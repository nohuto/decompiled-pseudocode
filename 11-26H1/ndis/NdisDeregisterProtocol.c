/*
 * XREFs of NdisDeregisterProtocol @ 0x140175660
 * Callers:
 *     NdisDeregisterProtocolDriver @ 0x1400BBB10 (NdisDeregisterProtocolDriver.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x14006E680 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x14015BF00 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall NdisDeregisterProtocol(_DWORD *a1, _NDIS_PROTOCOL_BLOCK *a2)
{
  KIRQL v4; // al
  struct _NDIS_PROTOCOL_BLOCK *i; // rdi
  _NDIS_M_DRIVER_BLOCK *AssociatedMiniDriver; // rax
  int v7; // r9d
  __int64 v8; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      5u,
      0x14u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a2,
      &a2->Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  for ( i = ndisProtocolList; i && i != a2; i = i->NextProtocol )
    ;
  KeReleaseSpinLock(&ndisProtocolListLock, v4);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( !i )
  {
    *a1 = 0;
    return;
  }
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(&a2->Bind._p->_t, 0LL, RunSynchronous);
  if ( ndisCloseRef(&a2->Ref.SpinLock) )
  {
    AssociatedMiniDriver = a2->AssociatedMiniDriver;
    if ( AssociatedMiniDriver )
    {
      AssociatedMiniDriver->AssociatedProtocol = 0LL;
      a2->AssociatedMiniDriver = 0LL;
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a2->DeregEvent = &Event;
    ndisDereferenceProtocol(a2, 0, 0xFFu, v7);
    ndisWaitForKernelObject(&Event);
    *a1 = 0;
  }
  else
  {
    *a1 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    LODWORD(v8) = -1073741823;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x15u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a2,
      v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = *a1;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x16u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a2,
      v8);
  }
}
