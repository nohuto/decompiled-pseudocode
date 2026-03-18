/*
 * XREFs of PfpCreateEvent @ 0x1407C800C
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140CCE1F8 (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140CCE460 (PfpParametersInitialize.c)
 * Callees:
 *     PfpCreateEventInternal @ 0x1407C802C (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  return PfpCreateEventInternal(a1, a2, 656LL, a3);
}
