/*
 * XREFs of FinalizeBootLogo @ 0x1405C7798
 * Callers:
 *     StartFirstUserProcess @ 0x140D0E818 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1405C730C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1405C74EC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1405C759C (InbvReleaseLock.c)
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
