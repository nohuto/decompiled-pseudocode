/*
 * XREFs of PspNotificationLimitRateControlToleranceField @ 0x140AF7430
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspNotificationLimitRateControlToleranceField(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      v2 = 44LL;
    else
      v2 = 32LL;
  }
  else
  {
    v2 = 60LL;
  }
  return a1 + v2;
}
