/*
 * XREFs of ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x1800501A0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@EEAAXXZ @ 0x180050190 (-_Destroy@-$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?erase@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@0@Z @ 0x18000C4F8 (-erase@-$list@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V-$allocator@V-$weak_ptr@VCCa.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________CWindowBorder::CCachedBorderBrush::_CCachedBorderBrush_::_5_::_lambda_1___ @ 0x180050230 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--weak_ptr_CWindowB.c)
 */

void __fastcall CWindowBorder::CCachedBorderBrush::~CCachedBorderBrush(CWindowBorder::CCachedBorderBrush *this)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // [rsp+30h] [rbp+8h] BYREF

  if ( CWindowBorder::CCachedBorderBrush::s_cache )
  {
    std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________CWindowBorder::CCachedBorderBrush::_CCachedBorderBrush_::_5_::_lambda_1___(
      &v3,
      **(_QWORD **)(CWindowBorder::CCachedBorderBrush::s_cache + 24));
    std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::erase(
      CWindowBorder::CCachedBorderBrush::s_cache + 24,
      &v3,
      v3,
      *(_QWORD **)(CWindowBorder::CCachedBorderBrush::s_cache + 24));
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((char *)this + 64);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
