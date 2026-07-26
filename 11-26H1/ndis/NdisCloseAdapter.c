/*
 * XREFs of NdisCloseAdapter @ 0x140176E20
 * Callers:
 *     NdisCloseAdapterEx @ 0x140066670 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0jqxz_EtwWriteTransfer @ 0x1400073E0 (McTemplateK0jqxz_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14004A300 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1400563F0 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x14005AC10 (WPP_RECORDER_SF_qqZZ.c)
 *     PktMonClientComponentUnregister @ 0x140064970 (PktMonClientComponentUnregister.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140169740 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1401770E0 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisCloseAdapter(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 result; // rax
  KIRQL v13; // al
  __int64 v14; // rcx
  char v15; // [rsp+28h] [rbp-40h]
  char v16[8]; // [rsp+30h] [rbp-38h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      30,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      v15);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == (struct _NDIS_OPEN_BLOCK *)v2 )
      break;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( i )
  {
    v9 = *(_QWORD *)(v2 + 24);
    v10 = *(_QWORD *)(v2 + 16);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        v8,
        0x1Fu,
        (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
        v10,
        v2,
        (unsigned __int16 *)(v9 + 72),
        *(unsigned __int16 **)(v10 + 3856));
    if ( (byte_14011D041 & 2) != 0 )
      McTemplateK0jqxz_EtwWriteTransfer(
        v7,
        v6,
        v10 + 4008,
        v10 + 4008,
        *(_DWORD *)(v10 + 4056),
        *(_QWORD *)(v10 + 4024),
        *(const wchar_t **)(v9 + 80));
    PktMonClientComponentUnregister((__int64 *)(v2 + 920));
    if ( *(_BYTE *)(v9 + 56) < 6u )
    {
      if ( !*(_BYTE *)(v2 + 904)
        || *(struct NDIS_BIND_LINK_BASE **)(v2 + 856) != Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v10 + 5120)) )
      {
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 232));
        *(_DWORD *)(v2 + 224) |= 0x40000000u;
        KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 232), v13);
        ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(v2 + 864));
LABEL_15:
        result = 259LL;
        goto LABEL_16;
      }
LABEL_13:
      *(_BYTE *)(v2 + 904) = 0;
      if ( (*(_DWORD *)(v10 + 124) & 0x2000) != 0 )
      {
        v14 = *(_QWORD *)(v10 + 3984);
        if ( v14 )
          (*(void (__fastcall **)(_QWORD))(v14 + 40))(*(_QWORD *)(v14 + 8));
      }
      ndisCleanUpForProtocol((struct _NDIS_OPEN_BLOCK *)v2, v11);
      ndisMKillOpen((struct _NDIS_OPEN_BLOCK *)v2);
      goto LABEL_15;
    }
    *(_BYTE *)(v2 + 65) = 0;
    if ( *(struct _KTHREAD **)(v9 + 416) == KeGetCurrentThread() )
      goto LABEL_13;
    result = 3221225473LL;
  }
  else
  {
    result = 0LL;
  }
LABEL_16:
  *a1 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = result;
    return WPP_RECORDER_SF_qL(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             6u,
             0x20u,
             (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
             v2,
             *(_QWORD *)v16);
  }
  return result;
}
