/*
 * XREFs of PsQuerySystemAvailableCpusCount @ 0x140618530
 * Callers:
 *     <none>
 * Callees:
 *     KeQuerySystemAvailableCpus @ 0x1405E81D0 (KeQuerySystemAvailableCpus.c)
 */

__int64 __fastcall PsQuerySystemAvailableCpusCount(_DWORD *a1, struct _LIST_ENTRY **a2)
{
  if ( a1 && a2 )
    return KeQuerySystemAvailableCpus(0LL, 0LL, a2, a1);
  else
    return 3221225485LL;
}
