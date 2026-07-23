/*
 * XREFs of PsQueryProcessAvailableCpusCount @ 0x1406184B0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryProcessAvailableCpus @ 0x1405E8110 (KeQueryProcessAvailableCpus.c)
 */

__int64 __fastcall PsQueryProcessAvailableCpusCount(__int64 a1, _DWORD *a2, __int64 *a3)
{
  if ( a1 && a2 && a3 )
    return KeQueryProcessAvailableCpus(a1, 0LL, 0LL, a3, a2);
  else
    return 3221225485LL;
}
