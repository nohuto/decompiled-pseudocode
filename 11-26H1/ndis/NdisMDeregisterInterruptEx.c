/*
 * XREFs of NdisMDeregisterInterruptEx @ 0x1401748F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1400C80C4 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 */

void __stdcall NdisMDeregisterInterruptEx(NDIS_HANDLE NdisInterruptHandle)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  bool v3; // cf
  void *v4; // rcx
  void **i; // rcx
  char *v6; // rax
  KIRQL v7; // dl
  int v8; // edx
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+40h] [rbp-18h] BYREF
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisInterruptHandle + 12);
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)v1,
      NdisInterruptHandle);
  if ( _InterlockedExchangeAdd(&v1->RegisteredInterrupts, 0xFFFFFFFF) == 1 )
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)NdisInterruptHandle + 12) + 120LL), 0x20u);
  v3 = *((_BYTE *)NdisInterruptHandle + 193) != 0;
  *(&Parameters.Version + 1) = 0;
  Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)NdisInterruptHandle + 15);
  Parameters.Version = v3 + 2;
  IoDisconnectInterruptEx(&Parameters);
  v4 = (void *)*((_QWORD *)NdisInterruptHandle + 26);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)NdisInterruptHandle + 26) = 0LL;
  }
  ndisWaitForDpcCompletion(
    (volatile int *)NdisInterruptHandle + 26,
    (volatile unsigned __int8 *)NdisInterruptHandle + 4,
    (struct _KEVENT *)((char *)NdisInterruptHandle + 128));
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  for ( i = (void **)&v1->InterruptEx; ; i = (void **)(v6 + 160) )
  {
    v6 = (char *)*i;
    if ( !*i )
      break;
    if ( v6 == NdisInterruptHandle )
    {
      *i = (void *)*((_QWORD *)NdisInterruptHandle + 20);
      break;
    }
  }
  v7 = NewIrql;
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v7);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  ExFreePoolWithTag(NdisInterruptHandle, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      14,
      (struct _GUID *)&WPP_ad107ce1d5553708f9afef3ea157b65d_Traceguids,
      (char)v1);
  }
}
