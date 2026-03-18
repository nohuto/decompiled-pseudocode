/*
 * XREFs of VfSuspectDriversInsert @ 0x140C38A1C
 * Callers:
 *     VfSuspectDriversParseRegistryString @ 0x140CDF400 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140F08DD8;
  if ( *(__int64 **)qword_140F08DD8 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140F08DD8 = (__int64)a1;
  return result;
}
