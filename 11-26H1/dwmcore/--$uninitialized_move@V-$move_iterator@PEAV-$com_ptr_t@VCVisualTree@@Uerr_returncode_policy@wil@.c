/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18010563C
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@_K0@Z @ 0x18009BF84 (-reserve_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$defau.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180103854 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18019B860 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B2878 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801CBC1C (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_polic.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18021970C (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@YAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@V30@PEAV12@@Z @ 0x1801056B8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_re.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(a4, (a3 - a2) >> 3);
  a4[2] = (std::_Uninitialized_move_unchecked<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>(
             a2,
             a3,
             v8)
         - *a4) >> 3;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
