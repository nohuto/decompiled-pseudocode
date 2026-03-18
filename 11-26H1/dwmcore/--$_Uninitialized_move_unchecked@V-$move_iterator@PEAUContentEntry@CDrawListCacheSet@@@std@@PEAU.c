/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUContentEntry@CDrawListCacheSet@@@std@@YAPEAUContentEntry@CDrawListCacheSet@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@V30@PEAU12@@Z @ 0x18025AD90
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18001E494 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CDrawListCacheSet::ContentEntry *>,CDrawListCacheSet::ContentEntry *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *i; // rcx
  __int64 v4; // rax

  for ( i = (_QWORD *)(a1 + 8); i - 1 != a2; i += 2 )
  {
    *(_DWORD *)a3 = *((_DWORD *)i - 2);
    *(_DWORD *)(a3 + 4) = *((_DWORD *)i - 1);
    v4 = *i;
    *i = 0LL;
    *(_QWORD *)(a3 + 8) = v4;
    a3 += 16LL;
  }
  return a3;
}
