/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800F8878
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800F8660 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??$destruct_range@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800F8840 (--$destruct_range@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@YAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@V30@PEAV12@@Z @ 0x1801056B8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_re.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 *v2; // r14
  __int64 *v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v2 = a1[1];
  v4 = a1[2];
  result = v4 - v2;
  if ( result < a2 )
  {
    v6 = v2 - *a1;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800F88EDLL);
    }
    v7 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)(v4 - *a1), v4 - *a1, v6 + a2);
    v8 = (__int64 *)operator new[](saturated_mul(v7, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, (__int64)v8, v6);
    v9 = a1[1];
    v10 = *a1;
    v11 = v9 - *a1;
    v17 = v15;
    v18 = v16;
    v12 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v17, v11);
    std::_Uninitialized_move_unchecked<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>(
      v10,
      v9,
      v12);
    detail::destruct_range<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>(*a1, a1[1]);
    v13 = *a1;
    *a1 = v8;
    if ( v13 == (__int64 *)(a1 + 3) )
      v13 = 0LL;
    operator delete(v13);
    v14 = *a1;
    a1[1] = &(*a1)[v6];
    result = (unsigned __int64)&v14[v7];
    a1[2] = (__int64 *)result;
  }
  return result;
}
