/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18022B7B8
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18021EA08 (-clear@-$vector_facade@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_im.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  __int64 *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // r15
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = (__int64 *)(v3 + 8 * v6);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v3, v6);
  v9 = 8 * v8;
  if ( v8 != v10 )
  {
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, 0LL);
    v11 = (__int64 *)(v9 + v3);
    v16 = v14;
    v17 = v15;
    v12 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v16, v7 - v11)
        - (_QWORD)v11;
    while ( v11 != v7 )
    {
      wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=((__int64 *)((char *)v11 + v12), v11);
      ++v11;
    }
  }
  result = std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
             &v7[v9 / 0xFFFFFFFFFFFFFFF8uLL],
             v7);
  a1[1] -= v9;
  return result;
}
