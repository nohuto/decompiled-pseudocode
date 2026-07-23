/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x1407D27A0
 * Callers:
 *     PopValidateRTCWake @ 0x140C0F8AC (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x1404E513C (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140F1044C == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, (__int64)&v1, 0LL);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return PpmConvertTime(qword_140F10B70, PopQpcFrequency, 0x3E8uLL);
}
