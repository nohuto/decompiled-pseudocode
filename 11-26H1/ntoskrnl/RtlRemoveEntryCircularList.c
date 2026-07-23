/*
 * XREFs of RtlRemoveEntryCircularList @ 0x140440580
 * Callers:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRemoveEntryCircularList(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  if ( (_QWORD *)*a1 == a2 )
  {
    result = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 == a2 )
    {
      *a1 = 0LL;
      return result;
    }
    *a1 = result;
  }
  v3 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (result = (_QWORD *)a2[1], (_QWORD *)*result != a2) )
    __fastfail(3u);
  *result = v3;
  v3[1] = result;
  return result;
}
