/*
 * XREFs of ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18003CDE0
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18003B6F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x18003CC14 (-push_back@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@de.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAM@std@@V?$checked_array_iterator@PEAM@stdext@@@std@@YA?AV?$checked_array_iterator@PEAM@stdext@@V?$move_iterator@PEAM@0@0V12@@Z @ 0x180206F90 (--$uninitialized_move@V-$move_iterator@PEAM@std@@V-$checked_array_iterator@PEAM@stdext@@@std@@YA.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x18020700C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     ??C?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ @ 0x18021FDBC (--C-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

char *__fastcall CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        float **a2,
        __int64 *a3,
        float a4,
        float a5,
        float a6)
{
  float *v6; // rbx
  float *v7; // rdi
  __int64 v8; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  float v14; // xmm9_4
  float v15; // xmm6_4
  char *result; // rax
  float v17; // xmm8_4
  __int64 v18; // rdx
  detail::liberal_expansion_policy *v19; // rcx
  float v20; // xmm7_4
  unsigned __int64 v21; // rsi
  float v22; // xmm10_4
  _DWORD *v23; // rbx
  __int64 v24; // r15
  detail::liberal_expansion_policy *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD *i; // r13
  __int64 v29; // r13
  char v30; // dl
  unsigned __int64 v31; // rsi
  __int64 v32; // r13
  char *v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rax
  char *j; // r15
  float v37; // xmm0_4
  __int64 v38; // r13
  unsigned __int64 v39; // r13
  char *v40; // rsi
  __int64 v41; // r15
  unsigned __int64 v42; // r14
  unsigned int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rax
  char *v46; // r15
  __int64 v47; // rsi
  char *v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rax
  signed __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  SIZE_T v55; // r9
  unsigned __int64 v56; // rdi
  SIZE_T v57; // rax
  unsigned __int64 v58; // kr00_8
  LPVOID v59; // rbx
  __int64 v60; // r8
  __int64 v61; // rdx
  void *v62; // rcx
  bool v63; // zf
  __int64 v64; // rcx
  unsigned __int64 v65; // r14
  LPVOID v66; // rsi
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 *v69; // rcx
  __int64 v70; // rcx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdi
  LPVOID v73; // rbx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 *v76; // rcx
  __int64 v77; // rcx
  _QWORD v78[3]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v79; // [rsp+48h] [rbp-89h]
  __int128 v80; // [rsp+58h] [rbp-79h] BYREF
  __int64 v81; // [rsp+68h] [rbp-69h]
  __int128 v82; // [rsp+78h] [rbp-59h] BYREF
  __int64 v83; // [rsp+88h] [rbp-49h]
  float *v84; // [rsp+F8h] [rbp+27h]
  __int64 v85; // [rsp+128h] [rbp+57h] BYREF
  float *v86; // [rsp+130h] [rbp+5Fh]
  detail::liberal_expansion_policy *v87; // [rsp+138h] [rbp+67h]

  v85 = a1;
  v8 = a3[1];
  v11 = *a3;
  v12 = (v8 - *a3) >> 2;
  if ( v12 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v82, v11, v12);
    a3[1] += -4 * v13;
    v8 = a3[1];
  }
  v14 = a6;
  v15 = fmaxf(a4, **a2);
  result = (char *)(((char *)a2[1] - (char *)*a2) & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = fminf(a5, *(float *)((char *)*a2 + (_QWORD)result - 16));
  if ( (float)(v17 - v15) <= a6 )
    return result;
  v18 = a3[2];
  v19 = (detail::liberal_expansion_policy *)*a3;
  v86 = v6;
  v20 = v15 + a6;
  v21 = (v8 - (__int64)v19) >> 2;
  v84 = v7;
  v22 = v17 - a6;
  if ( !((v18 - v8) >> 2) )
  {
    if ( v21 + 1 < v21 )
      goto LABEL_41;
    v54 = detail::liberal_expansion_policy::expand(v19, (v18 - (__int64)v19) >> 2, v21 + 1);
    v56 = v54;
    v58 = v54;
    v57 = 4 * v54;
    if ( !is_mul_ok(v58, 4uLL) )
      v57 = v55;
    v59 = operator new[](v57);
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v80, (__int64)v59, v21);
    v60 = a3[1];
    v61 = *a3;
    *(_OWORD *)&v78[1] = v80;
    v79 = v81;
    std::uninitialized_move<std::move_iterator<float *>,stdext::checked_array_iterator<float *>>(
      &v82,
      v61,
      v60,
      &v78[1]);
    v62 = (void *)*a3;
    v63 = *a3 == (_QWORD)(a3 + 3);
    v85 = 0LL;
    *a3 = (__int64)v59;
    if ( v63 )
      v62 = 0LL;
    operator delete(v62);
    v64 = *a3;
    a3[1] = *a3 + 4 * v21;
    a3[2] = v64 + 4 * v56;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v85);
  }
  v23 = (_DWORD *)a3[1];
  v85 = *a3;
  v24 = ((__int64)v23 - v85) >> 2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v80, v85 + 4 * v24, 1LL);
  *(_OWORD *)&v78[1] = v80;
  v79 = v81;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v78[1], 1LL);
  v26 = v24 - v21;
  if ( v24 - v21 > 1 )
    v26 = 1LL;
  v80 = *(_OWORD *)&v78[1];
  v81 = v79;
  v27 = 4 * v26;
  for ( i = &v23[v27 / 0xFFFFFFFFFFFFFFFCuLL]; v23 != i; *(_DWORD *)v25 = *v23 )
  {
    --v23;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v80);
    v25 = (detail::liberal_expansion_policy *)stdext::checked_array_iterator<enum IRenderTarget::Type *>::operator->(&v80);
  }
  v29 = v85;
  if ( v24 - v21 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v80, v85, v24);
    *(_OWORD *)&v78[1] = v80;
    v79 = v81;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v78[1], v24);
    v80 = *(_OWORD *)&v78[1];
    v81 = v79;
    v51 = 4 * v24 - 4 * v21 - 4;
    v52 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(&v80, -(v51 >> 2));
    memmove_0((void *)(v52 - v51), (const void *)(v29 + 4 * v21), v51);
  }
  a3[1] += 4LL;
  *(float *)(v29 + 4 * v21) = v15;
  v30 = 0;
  v6 = *a2;
  v7 = a2[1];
  while ( v6 != v7 )
  {
    v37 = *v6;
    if ( v20 >= *v6 )
      goto LABEL_37;
    if ( v37 >= v22 )
      break;
    v25 = (detail::liberal_expansion_policy *)a3[1];
    v38 = (__int64)v25 - *a3;
    if ( v38 && v14 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 - *((float *)v25 - 1)) & _xmm) )
      goto LABEL_35;
    v39 = v38 >> 2;
    if ( (a3[2] - (__int64)v25) >> 2 )
      goto LABEL_26;
    if ( v39 + 1 >= v39 )
    {
      v65 = detail::liberal_expansion_policy::expand(v25, (a3[2] - *a3) >> 2, v39 + 1);
      v66 = operator new[](saturated_mul(v65, 4uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v80, (__int64)v66, v39);
      v67 = a3[1];
      v68 = *a3;
      *(_OWORD *)&v78[1] = v80;
      v79 = v81;
      std::uninitialized_move<std::move_iterator<float *>,stdext::checked_array_iterator<float *>>(
        &v80,
        v68,
        v67,
        &v78[1]);
      v69 = (__int64 *)*a3;
      *a3 = (__int64)v66;
      v85 = 0LL;
      if ( v69 == a3 + 3 )
        v69 = 0LL;
      operator delete(v69);
      v70 = *a3;
      a3[1] = *a3 + 4 * v39;
      a3[2] = v70 + 4 * v65;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v85);
LABEL_26:
      v40 = (char *)a3[1];
      v87 = (detail::liberal_expansion_policy *)*a3;
      v41 = (v40 - (char *)v87) >> 2;
      v85 = v41;
      v42 = v41 - v39;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v82, (__int64)v87 + 4 * v41, 1LL);
      *(_OWORD *)&v78[1] = v82;
      v79 = v83;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v78[1], v43);
      v44 = v41 - v39;
      if ( v41 - v39 > 1 )
        v44 = 1LL;
      v80 = *(_OWORD *)&v78[1];
      v81 = v79;
      v45 = 4 * v44;
      if ( v40 != &v40[-v45] )
      {
        v46 = &v40[-v45];
        do
        {
          v40 -= 4;
          stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v80);
          *(_DWORD *)stdext::checked_array_iterator<enum IRenderTarget::Type *>::operator->(&v80) = *(_DWORD *)v40;
        }
        while ( v40 != v46 );
        v41 = v85;
      }
      if ( v42 > 1 )
      {
        v47 = (__int64)v87;
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v82, (__int64)v87, v41);
        *(_OWORD *)&v78[1] = v82;
        v79 = v83;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v78[1], v41);
        v48 = (char *)(v47 + 4 * v39);
        v82 = *(_OWORD *)&v78[1];
        v49 = v47 + 4 * v85 - 4;
        v83 = v79;
        v50 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                &v82,
                -((v49 - (__int64)v48) >> 2));
        memmove_0(&v48[v50 - v49], v48, v49 - (_QWORD)v48);
      }
      v25 = v87;
      a3[1] += 4LL;
      v30 = 0;
      *((float *)v25 + v39) = *v6;
LABEL_35:
      if ( v30 || v6[1] == v6[2] )
        goto LABEL_37;
      goto LABEL_42;
    }
LABEL_41:
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_42:
    if ( (unsigned __int64)((a3[1] - *a3) >> 2) > 1 )
    {
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
        a3,
        (unsigned int *)v6);
      v30 = 1;
    }
LABEL_37:
    v6 += 4;
  }
  v31 = (a3[1] - *a3) >> 2;
  if ( (a3[2] - a3[1]) >> 2 )
    goto LABEL_13;
  if ( v31 + 1 < v31 )
    goto LABEL_41;
  v71 = detail::liberal_expansion_policy::expand(v25, (a3[2] - *a3) >> 2, v31 + 1);
  v72 = v71;
  v73 = operator new[](saturated_mul(v71, 4uLL));
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v82, (__int64)v73, v31);
  v74 = a3[1];
  v75 = *a3;
  v80 = v82;
  v81 = v83;
  std::uninitialized_move<std::move_iterator<float *>,stdext::checked_array_iterator<float *>>(&v82, v75, v74, &v80);
  v76 = (__int64 *)*a3;
  *a3 = (__int64)v73;
  v85 = 0LL;
  if ( v76 == a3 + 3 )
    v76 = 0LL;
  operator delete(v76);
  v77 = *a3;
  a3[1] = *a3 + 4 * v31;
  a3[2] = v77 + 4 * v72;
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v85);
LABEL_13:
  v32 = *a3;
  v33 = (char *)a3[1];
  v34 = (__int64)&v33[-*a3] >> 2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v82, *a3 + 4 * v34, 1LL);
  *(_OWORD *)&v78[1] = v82;
  v79 = v83;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v78[1], 1LL);
  v35 = v34 - v31;
  if ( v34 - v31 > 1 )
    v35 = 1LL;
  v80 = *(_OWORD *)&v78[1];
  v81 = v79;
  result = (char *)(4 * v35);
  for ( j = (char *)(v33 - result); v33 != j; *(_DWORD *)result = *(_DWORD *)v33 )
  {
    v33 -= 4;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v80);
    result = (char *)stdext::checked_array_iterator<enum IRenderTarget::Type *>::operator->(&v80);
  }
  if ( v34 - v31 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v82, v32, v34);
    *(_OWORD *)&v78[1] = v82;
    v79 = v83;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v78[1], v34);
    v82 = *(_OWORD *)&v78[1];
    v83 = v79;
    v53 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
            &v82,
            -((__int64)(4 * v34 - 4 * v31 - 4) >> 2));
    result = (char *)memmove_0(
                       (void *)(v53 - (4 * v34 - 4 * v31 - 4)),
                       (const void *)(v32 + 4 * v31),
                       4 * v34 - 4 * v31 - 4);
  }
  a3[1] += 4LL;
  *(float *)(v32 + 4 * v31) = v17;
  return result;
}
