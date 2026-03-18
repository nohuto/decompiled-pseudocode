/*
 * XREFs of ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008DC40 (-clear_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansio.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x18008DDC0 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800CB0D0 (-GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1800D4488 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800D4AA0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CPreWalkVisual::CalcTransform(
        CPreWalkVisual *this,
        struct CVisual *a2,
        CVisual **a3,
        unsigned __int64 a4)
{
  CVisual *v7; // r15
  CVisual *TransformParentForValidation; // rax
  CVisual *v9; // rsi
  CVisual *v10; // rdx
  CVisual *v11; // rcx
  CVisual **v12; // rax
  CVisual **i; // rbx
  CVisual **j; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  CVisual *v17; // rdi
  void ***v18; // rbx
  CVisual *v19; // rbx
  CVisual *v20; // r8
  CVisual *v21; // rcx
  CVisual *v22; // rdx
  CVisual **v23; // rax
  CVisual *v24; // rcx
  CVisual *v25; // rdx
  CVisual **v26; // rax
  __int64 v27; // rax
  char v28; // di
  __int64 v29; // rax
  char v30; // al
  CVisual *v31; // rax
  __int64 v32; // r8
  CVisual **v33; // rbx
  bool v34; // zf
  HANDLE ProcessHeap; // rax
  bool v36[8]; // [rsp+28h] [rbp-E0h] BYREF
  CVisual *v37; // [rsp+30h] [rbp-D8h] BYREF
  CVisual **v38; // [rsp+38h] [rbp-D0h] BYREF
  CVisual **v39; // [rsp+40h] [rbp-C8h]
  __int64 *v40; // [rsp+48h] [rbp-C0h]
  _BYTE v41[512]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+250h] [rbp+148h] BYREF

  v38 = (CVisual **)v41;
  v39 = (CVisual **)v41;
  v37 = a2;
  v40 = &v42;
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
    (__int64 *)&v38,
    (__int64 *)&v37);
  v7 = v37;
  if ( v37 )
  {
    do
    {
      if ( (unsigned __int64)CVisual::EnsureTreeData(v7, (const struct CVisualTree *)a3)[28] >= a4 )
        break;
      v36[0] = 0;
      TransformParentForValidation = CVisual::GetTransformParentForValidation(v7, a3, v36);
      v37 = TransformParentForValidation;
      v9 = TransformParentForValidation;
      if ( TransformParentForValidation )
      {
        if ( !v36[0] )
        {
          v19 = v7;
          if ( v7 )
          {
            v20 = a3[9];
            v21 = v7;
            v22 = v7;
            while ( v21 != v20 )
            {
              if ( !v22
                || (v23 = (CVisual **)*((_QWORD *)v22 + 11), (v22 = (CVisual *)v23) == 0LL)
                || v21 != (CVisual *)v23 && (v22 = v23[11], v21 != v22) )
              {
                v21 = (CVisual *)*((_QWORD *)v21 + 11);
                if ( v21 )
                  continue;
              }
              goto LABEL_48;
            }
            v24 = v9;
            v25 = v9;
            while ( v24 != v20 )
            {
              if ( !v25
                || (v26 = (CVisual **)*((_QWORD *)v25 + 11), (v25 = (CVisual *)v26) == 0LL)
                || v24 != (CVisual *)v26 && (v25 = v26[11], v24 != v25) )
              {
                v24 = (CVisual *)*((_QWORD *)v24 + 11);
                if ( v24 )
                  continue;
              }
              goto LABEL_48;
            }
            if ( v7 != v9 )
            {
              v28 = (v27 = *((_QWORD *)v7 + 11)) != 0 && *(_DWORD *)(v27 + 108) == 1
                 || *((_DWORD *)v7 + 27) == 1
                 && (unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)v7 + 10);
              if ( v7 != a3[9] )
              {
                do
                {
                  v29 = *((_QWORD *)v19 + 11);
                  v30 = v29 && *(_DWORD *)(v29 + 108) == 1
                     || *((_DWORD *)v19 + 27) == 1
                     && (unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)v19 + 10);
                  if ( v28 != v30 )
                    break;
                  v31 = (CVisual *)*((_QWORD *)v19 + 11);
                  v19 = v31;
                  if ( v31 == v9 )
                    goto LABEL_22;
                }
                while ( v31 != a3[9] );
              }
            }
          }
LABEL_48:
          CVisual::InvalidateTransformParent(v7, a3);
          v9 = 0LL;
LABEL_23:
          if ( v7 == a3[9] )
            goto LABEL_26;
          v9 = (CVisual *)*((_QWORD *)v7 + 11);
          v37 = v9;
          if ( !v9 )
            goto LABEL_26;
          goto LABEL_25;
        }
        v10 = TransformParentForValidation;
        v11 = TransformParentForValidation;
        while ( v11 != a3[9] )
        {
          if ( !v10
            || (v12 = (CVisual **)*((_QWORD *)v10 + 11), (v10 = (CVisual *)v12) == 0LL)
            || v11 != (CVisual *)v12 && (v10 = v12[11], v11 != v10) )
          {
            v11 = (CVisual *)*((_QWORD *)v11 + 11);
            if ( v11 )
              continue;
          }
          goto LABEL_48;
        }
        for ( i = v38; i != v39; ++i )
        {
          if ( *i == v9 )
          {
            if ( i != v39 )
            {
              for ( j = i; j != v39; ++j )
                CVisual::InvalidateTransformParent(*j, a3);
              detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::clear_region(
                (__int64 *)&v38,
                i - v38,
                ((char *)v39 - (char *)i - 8) >> 3);
            }
            break;
          }
        }
      }
LABEL_22:
      if ( !v9 )
        goto LABEL_23;
LABEL_25:
      detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        (__int64 *)&v38,
        (__int64 *)&v37);
      v9 = v37;
LABEL_26:
      v7 = v9;
    }
    while ( v9 );
  }
  v15 = v39 - v38;
  v16 = (int)v15;
  if ( (int)v15 > 0 )
  {
    while ( 1 )
    {
      v17 = v38[v16 - 1];
      v18 = CVisual::EnsureTreeData(v17, (const struct CVisualTree *)a3);
      CVisual::EnsureLayoutSize(v17);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
        break;
      if ( CVisual::EnsureWorldTransform(v17, (const struct CVisualTree *)a3, (RTL_SRWLOCK *)v18) )
        goto LABEL_68;
LABEL_69:
      if ( --v16 <= 0 )
        goto LABEL_70;
    }
    CVisual::EnsureWorldTransform(v17, (const struct CVisualTree *)a3, (RTL_SRWLOCK *)v18);
    if ( !*((_BYTE *)v18 + 15) || v18[28] != *((void ***)v18[31][3] + 110) )
      goto LABEL_69;
LABEL_68:
    *((_BYTE *)this + 27) = 1;
    CVisual::PropagateFlags((__int64)v17, 5u);
    *((_BYTE *)v18 + 137) = 1;
    goto LABEL_69;
  }
LABEL_70:
  v32 = v39 - v38;
  if ( v32 )
    detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v38,
      0LL,
      v32);
  v33 = v38;
  v34 = v38 == (CVisual **)v41;
  v38 = 0LL;
  if ( v34 )
    v33 = 0LL;
  if ( v33 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v33);
  }
}
