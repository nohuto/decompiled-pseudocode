/*
 * XREFs of ??$emplace@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x18000D120
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000C210 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??$?0VCCachedBorderBrush@CWindowBorder@@$0A@@?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@AEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x18000D1B4 (--$-0VCCachedBorderBrush@CWindowBorder@@$0A@@-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::emplace<std::shared_ptr<CWindowBorder::CCachedBorderBrush> &>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r8

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v8 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  std::weak_ptr<CWindowBorder::CCachedBorderBrush>::weak_ptr<CWindowBorder::CCachedBorderBrush>(v8 + 16, a4, v8);
  ++*(_QWORD *)(a1 + 8);
  v9 = *(_QWORD **)(a3 + 8);
  *v10 = a3;
  v10[1] = v9;
  *(_QWORD *)(a3 + 8) = v10;
  *v9 = v10;
  *a2 = v10;
  return a2;
}
