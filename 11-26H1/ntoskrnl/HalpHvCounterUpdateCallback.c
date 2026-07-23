/*
 * XREFs of HalpHvCounterUpdateCallback @ 0x1405998D0
 * Callers:
 *     <none>
 * Callees:
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 */

__int64 __fastcall HalpHvCounterUpdateCallback(__int64 a1)
{
  __int64 result; // rax

  result = HalSocRequestApi(a1, (__int64)HalpHvCounterUpdateCallback, a1, 8LL, &HalpHvTimerApi);
  if ( (int)result < 0 )
    HalpHvTimerApi = 0LL;
  return result;
}
