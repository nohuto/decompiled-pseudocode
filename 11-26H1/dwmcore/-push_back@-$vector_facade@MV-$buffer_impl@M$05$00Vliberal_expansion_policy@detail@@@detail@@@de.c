/*
 * XREFs of ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x18003CC14
 * Callers:
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18003C7F0 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18003CDE0 (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAM@std@@V?$checked_array_iterator@PEAM@stdext@@@std@@YA?AV?$checked_array_iterator@PEAM@stdext@@V?$move_iterator@PEAM@0@0V12@@Z @ 0x180206F90 (--$uninitialized_move@V-$move_iterator@PEAM@std@@V-$checked_array_iterator@PEAM@stdext@@@std@@YA.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x18020700C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     ??C?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ @ 0x18021FDBC (--C-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // r13
  __int64 v4; // r15
  _QWORD *v5; // r12
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // r13
  __int64 result; // rax
  signed __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  LPVOID v18; // rbx
  _DWORD *v19; // r8
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int *v28; // [rsp+A8h] [rbp+48h]
  __int64 v29; // [rsp+B0h] [rbp+50h]

  v28 = a2;
  v5 = a1 + 1;
  v7 = (__int64)(a1[1] - *a1) >> 2;
  if ( (__int64)(a1[2] - a1[1]) >> 2 )
  {
    v3 = a1 + 1;
  }
  else
  {
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_13:
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v4, v2);
      v23 = v25;
      v24 = v26;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v2);
      v25 = v23;
      v26 = v24;
      v15 = v29 - 4 * v7 - 4;
      v16 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
              &v25,
              -(v15 >> 2));
      memmove_0((void *)(v16 - v15), (const void *)(v4 + 4 * v7), v15);
      goto LABEL_10;
    }
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (__int64)(a1[2] - *a1) >> 2,
            v7 + 1);
    v18 = operator new[](saturated_mul(v17, 4uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v18, v7);
    v19 = (_DWORD *)*v5;
    v20 = *a1;
    v23 = v25;
    v24 = v26;
    ((void (__fastcall *)(__int128 *, __int64, _DWORD *, __int128 *))std::uninitialized_move<std::move_iterator<float *>,stdext::checked_array_iterator<float *>>)(
      &v25,
      v20,
      v19,
      &v23);
    v21 = (_QWORD *)*a1;
    *a1 = v18;
    v27 = 0LL;
    if ( v21 == a1 + 3 )
      v21 = 0LL;
    operator delete(v21);
    v22 = *a1;
    *v5 = *a1 + 4 * v7;
    a1[2] = v22 + 4 * v17;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v27);
    v3 = a1 + 1;
  }
  v8 = (_DWORD *)*v5;
  v4 = *a1;
  v2 = (__int64)(*v5 - *a1) >> 2;
  v9 = 4 * v2 + *a1;
  v29 = 4 * v2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v9, 1LL);
  v23 = v25;
  v24 = v26;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v10);
  v11 = v2 - v7;
  v25 = v23;
  if ( v2 - v7 > 1 )
    v11 = 1LL;
  v26 = v24;
  v12 = 4 * v11;
  if ( v8 != &v8[v12 / 0xFFFFFFFFFFFFFFFCuLL] )
  {
    v13 = &v8[v12 / 0xFFFFFFFFFFFFFFFCuLL];
    do
    {
      --v8;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v25);
      *(_DWORD *)stdext::checked_array_iterator<enum IRenderTarget::Type *>::operator->(&v25) = *v8;
    }
    while ( v8 != v13 );
    v3 = a1 + 1;
  }
  if ( v2 - v7 > 1 )
    goto LABEL_13;
LABEL_10:
  *v3 = a1[1] + 4LL;
  result = *v28;
  *(_DWORD *)(v4 + 4 * v7) = result;
  return result;
}
