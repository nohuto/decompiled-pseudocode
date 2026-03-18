/*
 * XREFs of Isoch_MapStage @ 0x14001AF10
 * Callers:
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140014110 (Isoch_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x14001ABCC (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_Stage_Release @ 0x140028F84 (Isoch_Stage_Release.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  char v4; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r12
  int v11; // esi
  bool v12; // zf
  int v13; // r10d
  __int64 v14; // r11
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  __int128 v19; // xmm0
  bool v20; // [rsp+38h] [rbp-30h]

  v3 = *(__int64 **)(a1 + 376);
  v4 = 0;
  v6 = *v3;
  *(_DWORD *)(a1 + 360) = 0;
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v7 = *(_QWORD **)(a1 + 40);
    v8 = *(_QWORD *)(v6 + 48);
    v9 = *(_QWORD *)(v7[12] + 24LL);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(WdfDriverGlobals, *v7);
    if ( KeGetCurrentIrql() != 2 )
      v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v20 = (*(_BYTE *)(v8 + 32) & 1) == 0;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64 *, bool))(*(_QWORD *)(v9 + 8) + 88LL))(
            v9,
            v10,
            v3[8],
            *(_QWORD *)(v3[8] + 32) + *(unsigned int *)(v3[8] + 44),
            *((_DWORD *)v3 + 13),
            Isoch_EvtDmaCallback,
            v3,
            v20);
    if ( v4 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
    if ( v11 < 0 )
      goto LABEL_6;
    if ( _InterlockedXor((volatile signed __int32 *)(a1 + 348), 1u) )
      return 2LL;
    return *(_DWORD *)(a1 + 360) != 0 ? 4 : 0;
  }
  v12 = (*(_DWORD *)(a1 + 304))++ == -1;
  v13 = *(_DWORD *)(a1 + 304);
  if ( v12 )
  {
    *(_DWORD *)(a1 + 304) = 1;
    v13 = 1;
  }
  *((_DWORD *)v3 + 40) = v13;
  v14 = *(_QWORD *)(v6 + 48);
  if ( *(_WORD *)(v14 + 2) != 56 )
  {
    switch ( *(_WORD *)(v14 + 2) )
    {
      case '9':
      case ':':
        v16 = *(_DWORD *)(v6 + 88) + *(_DWORD *)(v6 + 92);
        v17 = v3[9];
        v18 = *((_DWORD *)v3 + 13);
        *((_OWORD *)v3 + 8) = 0LL;
        *((_OWORD *)v3 + 9) = 0LL;
        *((_DWORD *)v3 + 34) = v18;
        *((_DWORD *)v3 + 33) = v16;
        *(_DWORD *)v17 = 1;
        *(_QWORD *)(v17 + 16) = v16;
        *(_DWORD *)(v17 + 24) = v18;
        *((_DWORD *)v3 + 35) = v13;
        v19 = *(_OWORD *)(v14 + 36);
        *((_DWORD *)v3 + 32) = 2;
        *((_OWORD *)v3 + 9) = v19;
        goto LABEL_19;
      default:
        break;
    }
  }
  if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              (_QWORD *)v3[8],
              a3,
              *((_DWORD *)v3 + 13),
              v13,
              (_OWORD *)v3 + 8,
              v3[9]) >= 0 )
  {
LABEL_19:
    Debug_FreAssertMsg(
      (__int64)"ScatterGatherList->NumberOfElements must be 1",
      *(_DWORD *)v3[9] == 1,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      3863);
    Isoch_Stage_MapIntoRing(v3);
    return *(_DWORD *)(a1 + 360) != 0 ? 4 : 0;
  }
  *((_DWORD *)v3 + 40) = 0;
LABEL_6:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Isoch_Stage_Release(a1, v3);
  if ( *(_DWORD *)(v6 + 112) == *(_DWORD *)(v6 + 116) )
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v6, -1, -1073737728, 0, 0);
  else
    *(_DWORD *)(v6 + 108) = *(_DWORD *)(v6 + 96) - *(_DWORD *)(v6 + 104);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1LL;
}
