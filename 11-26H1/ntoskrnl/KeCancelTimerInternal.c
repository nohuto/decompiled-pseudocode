/*
 * XREFs of KeCancelTimerInternal @ 0x1404B2DDC
 * Callers:
 *     ExpTimerPause @ 0x1404B2CF0 (ExpTimerPause.c)
 *     DifKeCancelTimerInternalWrapper @ 0x1406643E0 (DifKeCancelTimerInternalWrapper.c)
 *     ExpTimerAdjust @ 0x1406D3490 (ExpTimerAdjust.c)
 * Callees:
 *     KiDecodeTolerableDelayValue @ 0x1403B6BFC (KiDecodeTolerableDelayValue.c)
 *     KiCancelTimer @ 0x1403B6FE0 (KiCancelTimer.c)
 */

char __fastcall KeCancelTimerInternal(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // si
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // al

  v10 = KiCancelTimer(a1, 0);
  if ( v10 )
  {
    *a2 = *(_QWORD *)(a1 + 24);
    *a3 = 2;
    v14 = *(_BYTE *)(a1 + 1);
    if ( (v14 & 1) != 0 )
    {
      *a3 = 1;
    }
    else if ( (v14 & 2) != 0 )
    {
      *a3 = 3;
    }
    LOBYTE(v9) = *(_BYTE *)(a1 + 1) >> 2;
    *a4 = (unsigned int)KiDecodeTolerableDelayValue(v9, v8, v11, v12) / 0x2710;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v10;
}
