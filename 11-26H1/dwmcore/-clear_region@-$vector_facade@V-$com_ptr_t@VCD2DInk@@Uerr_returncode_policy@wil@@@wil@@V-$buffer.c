/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019671C
 * Callers:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801966F4 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1802495E0 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@EEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180196AE0 (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@std@@V-.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // r14
  __int64 *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  v7 = a2 + a3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1801967FFLL);
  }
  v8 = (__int64 *)(v3 + 8 * v6);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, *a1, v6);
  if ( v7 != v10 )
  {
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v9);
    v14 = v12;
    v15 = v13;
    std::move<std::move_iterator<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy> *>>(
      &v12,
      v3 + 8 * v7,
      v8,
      &v14);
  }
  result = std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(&v8[-a3], v8);
  a1[1] -= 8 * a3;
  return result;
}
