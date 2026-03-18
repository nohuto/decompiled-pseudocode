/*
 * XREFs of PsQuerySystemAvailableCpus @ 0x140615580
 * Callers:
 *     <none>
 * Callees:
 *     KeQuerySystemAvailableCpus @ 0x1405E5860 (KeQuerySystemAvailableCpus.c)
 */

__int64 __fastcall PsQuerySystemAvailableCpus(struct _KAFFINITY_EX *a1, _QWORD *a2, unsigned __int64 *a3)
{
  if ( !a1 || !a3 )
    return 3221225485LL;
  if ( a1->Size >= (unsigned __int16)KiActiveGroups )
    return KeQuerySystemAvailableCpus(a1, a2, a3, 0LL);
  return 3221225507LL;
}
