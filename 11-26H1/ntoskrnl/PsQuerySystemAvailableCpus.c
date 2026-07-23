/*
 * XREFs of PsQuerySystemAvailableCpus @ 0x1406184F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQuerySystemAvailableCpus @ 0x1405E81D0 (KeQuerySystemAvailableCpus.c)
 */

__int64 __fastcall PsQuerySystemAvailableCpus(
        struct _KAFFINITY_EX *a1,
        struct _LIST_ENTRY **a2,
        struct _LIST_ENTRY **a3)
{
  if ( !a1 || !a3 )
    return 3221225485LL;
  if ( a1->Size >= (unsigned __int16)KiActiveGroups )
    return KeQuerySystemAvailableCpus(a1, a2, a3, 0LL);
  return 3221225507LL;
}
