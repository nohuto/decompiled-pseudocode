/*
 * XREFs of RtlEraseUnicodeString @ 0x180111E30
 * Callers:
 *     <none>
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlEraseUnicodeString(__int64 a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    if ( *(_WORD *)(a1 + 2) )
    {
      result = memset_thunk_772440563353939046(v2, 0, *(unsigned __int16 *)(a1 + 2));
      *(_WORD *)a1 = 0;
    }
  }
  return result;
}
