/*
 * XREFs of ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18016B7F4
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800C8C10 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18016BC30 (-ensure_extra_capacity@-$buffer_impl@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall CRegionShape::IntersectWithRect(__int64 a1, float *a2, _QWORD *a3)
{
  float *v3; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  int *v7; // r15
  int v8; // eax
  __int64 v9; // rdx
  int *v10; // r15
  char *v11; // rdx
  int v12; // r13d
  int *v13; // r8
  int *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // xmm6_8
  __int64 v20; // rsi
  __int64 v21; // rbx
  char *v22; // rsi
  __int64 v23; // rbx
  _QWORD *v24; // rsi
  int *v25; // rcx
  __int64 v26; // rax
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  _OWORD *v31; // rdi
  unsigned int v32; // r8d
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  _OWORD *v35; // rsi
  unsigned int v36; // edi
  void *v38[2]; // [rsp+38h] [rbp-89h]
  char *v39; // [rsp+48h] [rbp-79h]
  __int128 v40; // [rsp+58h] [rbp-69h] BYREF
  __int64 v41; // [rsp+68h] [rbp-59h]
  __int128 v42; // [rsp+78h] [rbp-49h] BYREF
  __int64 v43; // [rsp+88h] [rbp-39h]
  unsigned __int64 v44; // [rsp+90h] [rbp-31h]
  __int64 v45; // [rsp+98h] [rbp-29h]
  int *v46; // [rsp+A0h] [rbp-21h]
  __int64 v47; // [rsp+B0h] [rbp-11h]
  __int64 v48; // [rsp+B8h] [rbp-9h]
  __int64 v49; // [rsp+C0h] [rbp-1h]

  v3 = a2;
  *a3 = 0LL;
  v5 = CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
  v6 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    *v5 = &CRectanglesShape::`vftable';
    v5[2] = v5 + 5;
    v5[3] = v5 + 5;
    v5[4] = v5 + 7;
    v5[7] = 0LL;
    v7 = *(int **)(a1 + 16);
    v8 = *v7;
    if ( *v7 )
    {
      v9 = v7[4];
      v10 = v7 + 3;
      v11 = (char *)v10 + v9;
      v39 = v11;
      v12 = 0;
      v13 = &v10[2 * v8 - 2];
      v14 = v10 + 2;
      v46 = v13;
      v15 = ((__int64)v10 + v10[3] - (_QWORD)v11 + 8) >> 3;
      if ( (int)v15 <= 0 )
      {
        v12 = 1;
        do
        {
          v10 = v14;
          v16 = v14[3];
          v11 = (char *)v14 + v14[1];
          v14 += 2;
          v39 = v11;
          LODWORD(v15) = ((__int64)v14 + v16 - (__int64)v11) >> 3;
          if ( (_DWORD)v15 )
            goto LABEL_14;
        }
        while ( v10 < v13 );
      }
    }
    else
    {
      v12 = (int)a3;
      v13 = 0LL;
      LODWORD(v15) = (_DWORD)a3;
      v10 = 0LL;
      v11 = v39;
      v46 = 0LL;
    }
LABEL_15:
    while ( v10 < v13 )
    {
      v27 = (float)*v10;
      v28 = (float)*(int *)&v11[8 * v12];
      v29 = (float)*(int *)&v11[8 * v12 + 4];
      v30 = (float)v10[2];
      *(float *)v38 = v28;
      *((float *)v38 + 1) = v27;
      *(float *)&v38[1] = v29;
      *((float *)&v38[1] + 1) = v30;
      if ( *v3 > v28 )
      {
        *(float *)v38 = *v3;
        v28 = *v3;
      }
      if ( v3[1] > v27 )
      {
        *((float *)v38 + 1) = v3[1];
        v27 = *((float *)v38 + 1);
      }
      if ( v29 > v3[2] )
      {
        *(float *)&v38[1] = v3[2];
        v29 = *(float *)&v38[1];
      }
      if ( v30 > v3[3] )
      {
        *((float *)&v38[1] + 1) = v3[3];
        v30 = *((float *)&v38[1] + 1);
      }
      if ( v29 > v28 && v30 > v27 )
      {
        v24 = v6 + 2;
        v49 = (__int64)(v6[3] - v6[2]) >> 4;
        v23 = v49;
        detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
          v6 + 2,
          1LL);
        v31 = (_OWORD *)v6[3];
        v45 = v6[2];
        v47 = ((__int64)v31 - v45) >> 4;
        v44 = v47 - v23;
        v48 = 16 * v47;
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v40, v45 + 16 * v47, 1LL);
        v42 = v40;
        v43 = v41;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v42, v32);
        v33 = v44;
        v34 = v44;
        if ( v44 > 1 )
          v34 = 1LL;
        v40 = v42;
        v41 = v43;
        if ( v31 != &v31[-v34] )
        {
          v35 = &v31[-v34];
          do
          {
            --v31;
            stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v40);
            *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v40) = *v31;
          }
          while ( v31 != v35 );
          v33 = v44;
          v24 = v6 + 2;
        }
        if ( v33 > 1 )
        {
          v17 = v45;
          stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v40, v45, v47);
          v42 = v40;
          v43 = v41;
          stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v42, v18);
          v19 = v42;
          v20 = v23;
          v41 = v43;
          v21 = v48 + v17 - 16;
          v22 = (char *)(v17 + 16 * v20);
          v40 = v42;
          stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v40, -((v21 - (__int64)v22) >> 4));
          memmove_0(&v22[v19 + 16 * v43 - v21], v22, v21 - (_QWORD)v22);
          v23 = v49;
          v24 = v6 + 2;
        }
        v24[1] += 16LL;
        v11 = v39;
        v13 = v46;
        *(_OWORD *)(v45 + 16 * v23) = *(_OWORD *)v38;
        v3 = a2;
      }
      if ( ++v12 >= (int)v15 )
      {
        v25 = v10 + 2;
        while ( 1 )
        {
          v10 = v25;
          v26 = v25[3];
          v11 = (char *)v25 + v25[1];
          v25 += 2;
          v39 = v11;
          LODWORD(v15) = ((__int64)v25 + v26 - (__int64)v11) >> 3;
          if ( (_DWORD)v15 )
            break;
          if ( v10 >= v13 )
            goto LABEL_15;
        }
LABEL_14:
        v12 = 0;
      }
    }
    v36 = 0;
    *a3 = v6;
  }
  else
  {
    v36 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x75u, 0LL);
  }
  return v36;
}
