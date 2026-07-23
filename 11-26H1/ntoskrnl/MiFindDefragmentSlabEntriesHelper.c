/*
 * XREFs of MiFindDefragmentSlabEntriesHelper @ 0x14070BBE0
 * Callers:
 *     <none>
 * Callees:
 *     MiCheckSlabEntryForDefrag @ 0x14070AC04 (MiCheckSlabEntryForDefrag.c)
 */

__int64 __fastcall MiFindDefragmentSlabEntriesHelper(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbx
  _QWORD **v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *i; // rcx

  v3 = *(_QWORD *)(a2 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v5 = 0LL;
    else
      v5 = v3 ^ (a2 | 1);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
  }
  while ( v5 )
  {
    if ( (unsigned int)MiCheckSlabEntryForDefrag(a3, (_DWORD *)v5) )
      return 1LL;
    v6 = *(_QWORD ***)(v5 + 8);
    v7 = v5;
    if ( v6 )
    {
      v5 = *(_QWORD *)(v5 + 8);
      for ( i = *v6; i; i = (_QWORD *)*i )
        v5 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v7 )
          break;
        v7 = v5;
      }
    }
  }
  return 0LL;
}
