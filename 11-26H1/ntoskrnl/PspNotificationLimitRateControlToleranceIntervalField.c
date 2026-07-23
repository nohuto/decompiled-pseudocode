/*
 * XREFs of PspNotificationLimitRateControlToleranceIntervalField @ 0x140AF5790
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspNotificationLimitRateControlToleranceIntervalField(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      v2 = 56LL;
    else
      v2 = 36LL;
  }
  else
  {
    v2 = 64LL;
  }
  return a1 + v2;
}
