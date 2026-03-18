/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x1407CF700
 * Callers:
 *     PopValidateRTCWake @ 0x140C0969C (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x1403E63D0 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x1404EBB5C (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140F0FB8C == 4 )
  {
    if ( !LOBYTE(stru_140F10828.OtherOperationCount) )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, (__int64)&v1, 0LL);
      return v1;
    }
  }
  else if ( !LOBYTE(stru_140F10828.OtherOperationCount) )
  {
    return result;
  }
  return PpmConvertTime((unsigned __int64)stru_140F10070.SavedApcState.ApcListHead[0].Blink, PopQpcFrequency, 0x3E8uLL);
}
