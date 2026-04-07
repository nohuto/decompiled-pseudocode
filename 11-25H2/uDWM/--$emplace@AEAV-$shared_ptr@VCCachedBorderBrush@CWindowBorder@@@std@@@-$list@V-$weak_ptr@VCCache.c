/*
 * XREFs of ??$emplace@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@1@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x18003E990
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003E3B0 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
const struct std::nothrow_t *__fastcall std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::emplace<std::shared_ptr<CWindowBorder::CCachedBorderBrush> &>(
        const char *a1,
        const struct std::nothrow_t *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax

  if ( qword_180119970 == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v7 = operator new[](0x20uLL, a2);
  v7[2] = 0LL;
  v7[3] = 0LL;
  if ( a4[1] )
  {
    v7[2] = *a4;
    v8 = a4[1];
    v7[3] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
  }
  ++qword_180119970;
  v9 = *(_QWORD **)(a3 + 8);
  *v7 = a3;
  v7[1] = v9;
  *(_QWORD *)(a3 + 8) = v7;
  *v9 = v7;
  *(_QWORD *)a2 = v7;
  return a2;
}
