/*
 * XREFs of RmActivityImportanceTakeMostImportant @ 0x180015B20
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180015BC0 (RmpActivityImportanceMergeVectors.c)
 */

__int64 __fastcall RmActivityImportanceTakeMostImportant(__int64 a1, __int64 a2, _DWORD *a3)
{
  *a3 = RmpActivityImportanceMergeVectors();
  return 0LL;
}
