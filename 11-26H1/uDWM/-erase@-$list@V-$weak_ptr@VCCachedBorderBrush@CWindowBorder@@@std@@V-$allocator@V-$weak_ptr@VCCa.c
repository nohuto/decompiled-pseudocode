/*
 * XREFs of ?erase@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@0@Z @ 0x18000C4F8
 * Callers:
 *     ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x1800501A0 (--1CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rbp
  std::_Ref_count_base *v10; // rcx
  _QWORD *v11; // r15
  _QWORD *result; // rax

  v5 = a3;
  if ( a3 != a4 )
  {
    v8 = (_QWORD *)a3[1];
    v9 = 0LL;
    *v8 = a4;
    a4[1] = v8;
    do
    {
      v10 = (std::_Ref_count_base *)v5[3];
      v11 = (_QWORD *)*v5;
      if ( v10 )
        std::_Ref_count_base::_Decwref(v10);
      std::_Deallocate<16>(v5, 32LL);
      ++v9;
      v5 = v11;
    }
    while ( v11 != a4 );
    *(_QWORD *)(a1 + 8) -= v9;
  }
  result = a2;
  *a2 = a4;
  return result;
}
