/*
 * XREFs of CmSetLazyFlushState @ 0x140B48A54
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x140468400 (CmpEnableLazyFlush.c)
 *     CmpDisableLazyFlush @ 0x14050BABC (CmpDisableLazyFlush.c)
 */

__int64 __fastcall CmSetLazyFlushState(char a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    HIDWORD(WheapPfaLock.RelativeTimerBias) = CmpPrevIdleProcessingState;
    if ( *(_DWORD *)&WheapPfaLock.ApcStateFill[20] )
    {
      CmpDisableLazyFlush(1u);
      KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -900000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
    }
    return CmpEnableLazyFlush(4);
  }
  else
  {
    CmpDisableLazyFlush(4u);
    if ( *(_DWORD *)&WheapPfaLock.ApcStateFill[20] && (CmpHoldLazyFlush & 1) != 0 )
    {
      if ( KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
    }
    result = HIDWORD(WheapPfaLock.RelativeTimerBias);
    CmpPrevIdleProcessingState = HIDWORD(WheapPfaLock.RelativeTimerBias);
    HIDWORD(WheapPfaLock.RelativeTimerBias) = 0;
  }
  return result;
}
