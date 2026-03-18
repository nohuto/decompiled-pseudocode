/*
 * XREFs of ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1801450A8
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801452A0 (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??C?$checked_array_iterator@PEA_N@stdext@@QEBAPEA_NXZ @ 0x1801451D4 (--C-$checked_array_iterator@PEA_N@stdext@@QEBAPEA_NXZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x180206E90 (--$uninitialized_move@V-$move_iterator@PEA_N@std@@V-$checked_array_iterator@PEA_N@stdext@@@std@@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

_BYTE *__fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::reserve_region(
        unsigned __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  _BYTE *v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  _BYTE *v7; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  _BYTE *v12; // r13
  _BYTE *v13; // rdi
  SIZE_T v15; // rdi
  LPVOID v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  void *v26; // [rsp+A0h] [rbp+40h] BYREF
  _BYTE *v27; // [rsp+A8h] [rbp+48h]

  v27 = a2;
  v6 = a1[1];
  v7 = a2;
  if ( a1[2] - v6 >= a3 )
  {
LABEL_13:
    v3 = (_BYTE *)a1[1];
    v10 = *a1;
    v5 = (__int64)&v3[-*a1];
    v4 = v5 - (_QWORD)v7;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)v3, a3);
    v22 = v24;
    v23 = v25;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, a3);
    v21 = v5 - (_QWORD)v7;
    if ( a3 < v5 - (__int64)v7 )
      v21 = a3;
    v24 = v22;
    v7 = &v3[-v21];
    v25 = v23;
    goto LABEL_5;
  }
  v10 = v6 - *a1;
  v11 = v10 + a3;
  if ( v11 >= v10 )
  {
    v15 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, a1[2] - *a1, v11);
    v16 = operator new[](v15);
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, (__int64)v16, v10);
    v17 = a1[1];
    v18 = *a1;
    v22 = v24;
    v23 = v25;
    std::uninitialized_move<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>(&v24, v18, v17, &v22);
    v19 = (unsigned __int64 *)*a1;
    *a1 = (unsigned __int64)v16;
    v26 = 0LL;
    if ( v19 == a1 + 3 )
      v19 = 0LL;
    operator delete(v19);
    v20 = *a1;
    a1[1] = *a1 + v10;
    a1[2] = v15 + v20;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v26);
    goto LABEL_13;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
  do
  {
    --v3;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v24);
    *(_BYTE *)stdext::checked_array_iterator<bool *>::operator->(&v24) = *v3;
LABEL_5:
    ;
  }
  while ( v3 != v7 );
  if ( v4 <= a3 )
  {
    v12 = v27;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, v10, v5);
    v22 = v24;
    v23 = v25;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, v5);
    v12 = v27;
    v24 = v22;
    v13 = &v27[v10];
    v25 = v23;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v24, (__int64)&v27[-(v5 - a3)]);
    memmove_0((void *)(v23 + v22 - (v5 + v10 - a3 - (_QWORD)v13)), v13, v5 + v10 - a3 - (_QWORD)v13);
  }
  a1[1] += a3;
  return &v12[v10];
}
