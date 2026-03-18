/*
 * XREFs of Bulk_ProcessTransferCompletion @ 0x14001F918
 * Callers:
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x14001F8E0 (Bulk_WdfEvtDpcForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x14004DDE0 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     Bulk_CompleteTransfers @ 0x14001FAFC (Bulk_CompleteTransfers.c)
 *     TR_TransfersReclaimed @ 0x14001FF88 (TR_TransfersReclaimed.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Bulk_ProcessTransferCompletion(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  KIRQL v5; // al
  int v6; // edx
  int v7; // edx
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-10h]

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v9 = &v8;
  v8 = (__int64)&v8;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_BYTE *)(v2 + 104) = v3;
  if ( *(_BYTE *)(v2 + 336) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v3);
  }
  else
  {
    *(_BYTE *)(v2 + 336) = 1;
    v4 = v2 + 408;
    do
    {
      if ( *(_QWORD *)v4 != v4 )
      {
        *v9 = *(_QWORD *)v4;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v9;
        **(_QWORD **)(v2 + 416) = &v8;
        v9 = *(__int64 **)(v2 + 416);
        *(_QWORD *)(v2 + 416) = v2 + 408;
        *(_QWORD *)v4 = v4;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), *(_BYTE *)(v2 + 104));
      Bulk_CompleteTransfers(v2, &v8);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_BYTE *)(v2 + 104) = v5;
    }
    while ( *(_QWORD *)v4 != v4 );
    v6 = *(_DWORD *)(v2 + 332);
    if ( (v6 & 0x40) != 0 && *(_QWORD *)(v2 + 376) == v2 + 376 && *(_QWORD *)(v2 + 392) == v2 + 392 )
    {
      v1 = 1;
      *(_DWORD *)(v2 + 332) = v6 & 0xFFFFFFBF;
    }
    *(_BYTE *)(v2 + 336) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v5);
    if ( v1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v7 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 48) + 143LL);
          LOBYTE(v7) = 5;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(v2 + 56) + 80LL),
            v7,
            14,
            16,
            (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v2 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(v2 + 56) + 152LL),
            *(_DWORD *)(v2 + 64));
        }
      }
      TR_TransfersReclaimed(v2);
    }
  }
}
