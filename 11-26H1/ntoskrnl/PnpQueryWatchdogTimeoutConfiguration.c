/*
 * XREFs of PnpQueryWatchdogTimeoutConfiguration @ 0x140CCA868
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1404EE1C8 (PnpGetRegistryDword.c)
 */

__int64 __fastcall PnpQueryWatchdogTimeoutConfiguration(void *a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)PnpGetRegistryDword(a1, (__int64)L"WatchdogFirstChanceInMs", &v3) < 0
    || (PnpWatchdogTimeoutFirstChance = v3, v3 - 1 > 0xFFFFFFFD) )
  {
    PnpWatchdogTimeoutFirstChance = 3000;
  }
  result = PnpGetRegistryDword(a1, (__int64)L"WatchdogSecondChanceInMs", &v3);
  if ( (int)result < 0 || (result = v3, PnpWatchdogTimeoutSecondChance = v3, PnpWatchdogTimeoutFirstChance >= v3) )
    PnpWatchdogTimeoutSecondChance = 360000;
  return result;
}
