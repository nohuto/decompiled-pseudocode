/*
 * XREFs of Bulk_MapStage @ 0x140019DB0
 * Callers:
 *     Bulk_MappingLoop @ 0x14003ADD0 (Bulk_MappingLoop.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018350 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x140018AA8 (Bulk_Stage_Release.c)
 *     Bulk_Stage_MapIntoRing @ 0x14001A0D0 (Bulk_Stage_MapIntoRing.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x14001ABCC (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // bp
  __int64 v4; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r12
  int v10; // r14d
  unsigned int v11; // ebp
  bool v12; // zf
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int128 v18; // xmm0
  bool v19; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 368);
  v2 = 0;
  v4 = *(_QWORD *)v1;
  if ( *(_DWORD *)(*(_QWORD *)v1 + 76LL) != 3 )
  {
    Bulk_Stage_MapIntoRing(*(_QWORD *)(a1 + 368));
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v6 = *(_QWORD **)(a1 + 40);
    v7 = *(_QWORD *)(v4 + 48);
    v8 = *(_QWORD *)(v6[12] + 24LL);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(WdfDriverGlobals, *v6);
    if ( KeGetCurrentIrql() != 2 )
      v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v19 = (*(_BYTE *)(v7 + 32) & 1) == 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64, bool))(*(_QWORD *)(v8 + 8) + 88LL))(
            v8,
            v9,
            *(_QWORD *)(v1 + 48),
            *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 48) + 44LL),
            *(_DWORD *)(v1 + 40),
            Bulk_EvtDmaCallback,
            v1,
            v19);
    if ( v2 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
    if ( v10 >= 0 )
      return _InterlockedXor((volatile signed __int32 *)(a1 + 344), 1u) != 0 ? 2 : 0;
    v11 = 1;
    goto LABEL_9;
  }
  v11 = 1;
  v12 = (*(_DWORD *)(a1 + 304))++ == -1;
  v13 = *(_DWORD *)(a1 + 304);
  if ( v12 )
  {
    *(_DWORD *)(a1 + 304) = 1;
    v13 = 1;
  }
  *(_DWORD *)(v1 + 160) = v13;
  v14 = *(_QWORD *)(v4 + 48);
  if ( *(_WORD *)(v14 + 2) != 56 )
  {
    switch ( *(_WORD *)(v14 + 2) )
    {
      case '9':
      case ':':
        v15 = *(_QWORD *)(v1 + 56);
        v16 = *(_DWORD *)(v1 + 40);
        v17 = *(unsigned int *)(v4 + 112);
        *(_OWORD *)(v1 + 128) = 0LL;
        *(_OWORD *)(v1 + 144) = 0LL;
        *(_DWORD *)(v1 + 136) = v16;
        *(_DWORD *)(v1 + 132) = v17;
        *(_DWORD *)v15 = 1;
        *(_QWORD *)(v15 + 16) = v17;
        *(_DWORD *)(v15 + 24) = v16;
        *(_DWORD *)(v1 + 140) = v13;
        v18 = *(_OWORD *)(v14 + 36);
        *(_DWORD *)(v1 + 128) = 2;
        *(_OWORD *)(v1 + 144) = v18;
        goto LABEL_20;
      default:
        break;
    }
  }
  if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              *(_QWORD *)(v1 + 48),
              v13,
              *(_DWORD *)(v1 + 40),
              v13,
              v1 + 128,
              *(_QWORD *)(v1 + 56)) < 0 )
  {
    *(_DWORD *)(v1 + 160) = 0;
LABEL_9:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Bulk_Stage_Release(a1, v1);
    if ( *(_DWORD *)(v4 + 120) == *(_DWORD *)(v4 + 116) )
    {
      Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v4, -1073737728, 1);
      v11 = 3;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return v11;
  }
LABEL_20:
  if ( **(_DWORD **)(v1 + 56) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v15, v13, v14);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  Bulk_Stage_MapIntoRing(v1);
  return 0LL;
}
