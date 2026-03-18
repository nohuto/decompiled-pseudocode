/*
 * XREFs of FinalizeBootLogo @ 0x1405C4F28
 * Callers:
 *     StartFirstUserProcess @ 0x140D08548 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1405C4A9C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1405C4C7C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1405C4D2C (InbvReleaseLock.c)
 */

__int64 __fastcall FinalizeBootLogo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  InbvAcquireLock(a1, a2);
  if ( !(unsigned int)InbvGetDisplayState(v3, v2) )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock(v5, v4);
}
