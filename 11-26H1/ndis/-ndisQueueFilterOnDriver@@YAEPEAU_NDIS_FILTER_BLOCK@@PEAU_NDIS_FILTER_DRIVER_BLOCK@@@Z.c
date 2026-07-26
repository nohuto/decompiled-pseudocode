/*
 * XREFs of ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140071D40
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 */

__int64 __fastcall ndisQueueFilterOnDriver(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_DRIVER_BLOCK *a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // al
  KIRQL v6; // r14
  char v8[4]; // [rsp+38h] [rbp-30h]

  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Bu,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  v6 = v5;
  if ( a2->Ref.Closing )
  {
    KeReleaseSpinLock(&a2->Ref.SpinLock, v5);
    v4 = 0;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel(&a2->Lock);
    a1->NextFilter = a2->FilterQueue;
    a2->FilterQueue = a1;
    KeReleaseSpinLockFromDpcLevel(&a2->Lock);
    KeReleaseSpinLock(&a2->Ref.SpinLock, v6);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v8);
  }
  return v4;
}
