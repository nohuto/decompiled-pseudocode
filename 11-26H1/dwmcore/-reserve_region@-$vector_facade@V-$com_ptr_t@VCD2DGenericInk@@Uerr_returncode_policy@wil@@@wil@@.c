/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18019B6C4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x180125000 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18019B860 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@.c)
 *     ??$destruct_range@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18019B988 (--$destruct_range@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPE.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180205994 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wi.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // r12
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int128 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  char v20[32]; // [rsp+60h] [rbp-20h] BYREF

  v3 = a1;
  detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *v3;
  v5 = (__int64 *)v3[1];
  v6 = ((__int64)v5 - *v3) >> 3;
  v7 = 8 * v6;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v18, 8 * v6 + *v3, 1LL);
  v16 = v18;
  v17 = v19;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v16, v8);
  v9 = v6 - a2;
  v18 = v16;
  if ( (unsigned __int64)(v6 - a2) > 1 )
    v9 = 1LL;
  v19 = v17;
  v10 = 8 * v9;
  if ( v5 != &v5[v10 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v11 = &v5[v10 / 0xFFFFFFFFFFFFFFF8uLL];
    do
    {
      --v5;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v18);
      v12 = (_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v18);
      v13 = *v5;
      *v5 = 0LL;
      *v12 = v13;
    }
    while ( v5 != v11 );
    v3 = a1;
  }
  if ( (unsigned __int64)(v6 - a2) <= 1 )
  {
    v14 = v4 + 8 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v18, v4, v6);
    v16 = v18;
    v17 = v19;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v16, v6);
    v14 = v4 + 8 * a2;
    v18 = v16;
    v19 = v17;
    std::move_backward<std::move_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>>(
      v20,
      v14,
      v4 - 8 + 8 * v6,
      &v18);
  }
  if ( v7 + v4 >= (unsigned __int64)(8 * a2 + 8 + v4) )
    v7 = 8 * a2 + 8;
  detail::destruct_range<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>>(v14, v4 + v7);
  v3[1] += 8LL;
  return v14;
}
