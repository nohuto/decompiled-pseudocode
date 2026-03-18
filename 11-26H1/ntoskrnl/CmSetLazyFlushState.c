/*
 * XREFs of CmSetLazyFlushState @ 0x140B46A24
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x14046EC80 (CmpEnableLazyFlush.c)
 *     CmpDisableLazyFlush @ 0x14051204C (CmpDisableLazyFlush.c)
 */

__int64 __fastcall CmSetLazyFlushState(char a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    *(_DWORD *)&WheapPfaLock.ApcStateFill[40] = CmpPrevIdleProcessingState;
    if ( HIDWORD(WheapPfaLock.TrapFrame) )
    {
      CmpDisableLazyFlush(1u);
      KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -900000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
    }
    return CmpEnableLazyFlush(4);
  }
  else
  {
    CmpDisableLazyFlush(4u);
    if ( HIDWORD(WheapPfaLock.TrapFrame) && (CmpHoldLazyFlush & 1) != 0 )
    {
      if ( KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
    }
    result = *(unsigned int *)&WheapPfaLock.ApcStateFill[40];
    CmpPrevIdleProcessingState = *(_DWORD *)&WheapPfaLock.ApcStateFill[40];
    *(_DWORD *)&WheapPfaLock.ApcStateFill[40] = 0;
  }
  return result;
}
