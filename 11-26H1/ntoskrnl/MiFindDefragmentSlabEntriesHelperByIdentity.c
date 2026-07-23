/*
 * XREFs of MiFindDefragmentSlabEntriesHelperByIdentity @ 0x14070BC80
 * Callers:
 *     <none>
 * Callees:
 *     MiCheckSlabEntryForDefrag @ 0x14070AC04 (MiCheckSlabEntryForDefrag.c)
 */

__int64 __fastcall MiFindDefragmentSlabEntriesHelperByIdentity(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *i; // rbx

  v5 = 16LL * *(unsigned __int8 *)(a3 + 88);
  for ( i = *(_QWORD **)(v5 + *(_QWORD *)(a2 + 88)); i != (_QWORD *)(v5 + *(_QWORD *)(a2 + 88)); i = (_QWORD *)*i )
  {
    if ( (unsigned int)MiCheckSlabEntryForDefrag(a3, (_DWORD *)i - 6) )
      return 1LL;
  }
  return 0LL;
}
