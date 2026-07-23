/*
 * XREFs of PfpCreateEvent @ 0x1407CB06C
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140CD4358 (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140CD45C0 (PfpParametersInitialize.c)
 * Callees:
 *     PfpCreateEventInternal @ 0x1407CB08C (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  return PfpCreateEventInternal(a1, a2, 656LL, a3);
}
