/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180145484
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180145570 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@YAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@V30@PEAV12@@Z @ 0x1801056B8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_re.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  LPVOID v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  result = (v4 - v2) >> 3;
  if ( result < a2 )
  {
    v6 = (v2 - *(_QWORD *)a1) >> 3;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801454F9LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *(_QWORD *)a1) >> 3),
           (v4 - *(_QWORD *)a1) >> 3,
           v6 + a2);
    v8 = operator new[](saturated_mul(v7, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, (__int64)v8, v6);
    v9 = *(__int64 **)(a1 + 8);
    v10 = *(__int64 **)a1;
    v11 = ((__int64)v9 - *(_QWORD *)a1) >> 3;
    v17 = v15;
    v18 = v16;
    v12 = (_QWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v17, v11);
    std::_Uninitialized_move_unchecked<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>(
      v10,
      v9,
      v12);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    v13 = *(__int64 **)a1;
    *(_QWORD *)a1 = v8;
    if ( v13 == (__int64 *)(a1 + 24) )
      v13 = 0LL;
    operator delete(v13);
    v14 = *(__int64 **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 8 * v6;
    result = (unsigned __int64)&v14[v7];
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
