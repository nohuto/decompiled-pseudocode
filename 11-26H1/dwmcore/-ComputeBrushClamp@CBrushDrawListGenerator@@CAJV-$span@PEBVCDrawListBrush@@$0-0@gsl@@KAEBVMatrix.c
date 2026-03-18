/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1800D9628 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D9900 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(unsigned __int64 *a1, int a2, float *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rsi
  void *v6; // r9
  unsigned __int64 v8; // rdi
  float *v9; // r14
  __int64 v11; // rbx
  unsigned int v12; // r8d
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  int v21; // eax
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm1
  __m128 v25; // xmm1
  void (__fastcall ***v26)(_QWORD, __int64); // r14
  int v27; // ebx
  struct CShape *v28; // rcx
  char *v29; // r8
  char *v30; // rbx
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r8
  void *v34; // rcx
  __int64 result; // rax
  int v36; // eax
  __int64 v37; // rdx
  void (__fastcall ***v38)(_QWORD, __int64); // rcx
  void (__fastcall ***v39)(_QWORD, __int64); // rcx
  void (__fastcall ***v40)(_QWORD, __int64); // rax
  HANDLE ProcessHeap; // rax
  int v42; // eax
  __int64 v43; // rax
  void (__fastcall ***v44)(_QWORD, __int64); // [rsp+38h] [rbp-D0h] BYREF
  void (__fastcall ***v45)(_QWORD, __int64); // [rsp+40h] [rbp-C8h] BYREF
  __m128 v46; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v47; // [rsp+58h] [rbp-B0h]
  _BYTE v48[20]; // [rsp+78h] [rbp-90h]
  __m128 v49; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h]
  float *v51; // [rsp+B8h] [rbp-50h]
  __int128 v52; // [rsp+C0h] [rbp-48h]
  struct CShape **v53; // [rsp+D0h] [rbp-38h]
  struct CShape *v54; // [rsp+D8h] [rbp-30h] BYREF
  char v55; // [rsp+E0h] [rbp-28h]
  __m128 v56; // [rsp+E8h] [rbp-20h] BYREF
  __m256i v57; // [rsp+F8h] [rbp-10h]
  __int128 v58; // [rsp+118h] [rbp+10h]
  int v59; // [rsp+128h] [rbp+20h]
  void **v60; // [rsp+138h] [rbp+30h] BYREF
  void *v61; // [rsp+140h] [rbp+38h]
  LPVOID lpMem; // [rsp+148h] [rbp+40h]
  char *v63; // [rsp+150h] [rbp+48h]
  void **v64; // [rsp+158h] [rbp+50h]
  __int128 v65; // [rsp+160h] [rbp+58h] BYREF
  void *v66; // [rsp+170h] [rbp+68h] BYREF

  v4 = *a1;
  v6 = 0LL;
  v44 = 0LL;
  v8 = 0LL;
  v51 = a3;
  v9 = a3;
  while ( 1 )
  {
    if ( v8 >= v4 )
    {
      result = (unsigned int)v6;
      *a4 = v44;
      return result;
    }
    v11 = *(_QWORD *)(a1[1] + 8 * v8);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 52) )
        break;
    }
LABEL_24:
    ++v8;
  }
  v60 = &CRectanglesShape::`vftable';
  lpMem = &v65;
  v61 = v6;
  v63 = (char *)&v65;
  v66 = v6;
  v64 = &v66;
  v52 = *(_OWORD *)(v11 + 32);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v49, (__int64)&v65, 1LL);
  v46 = v49;
  v47.m256i_i64[0] = v50;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v46, v12);
  v63 += 16;
  v59 = 0;
  v65 = v52;
  v13 = *(float *)(v11 + 8);
  v14 = *(float *)(v11 + 12);
  v15 = *(float *)(v11 + 16);
  v16 = *(float *)(v11 + 20);
  v17 = *(float *)(v11 + 24);
  v18 = *(float *)(v11 + 28);
  if ( ((1 << v8) & a2) != 0 )
  {
    v46.m128_i32[0] = *(_DWORD *)(v11 + 8);
    *(unsigned __int64 *)((char *)v46.m128_u64 + 4) = LODWORD(v14);
    v46.m128_f32[3] = v15;
    v47.m256i_i64[0] = LODWORD(v16);
    v47.m256i_i64[1] = __PAIR64__(LODWORD(v18), LODWORD(v17));
    v47.m256i_i32[4] = 1065353216;
    Matrix3x3::operator*(v46.m128_f32, v49.m128_f32, v9);
    v43 = Matrix3x3::As3DHomogeneous(&v49, (__int64)&v46);
    v56 = *(__m128 *)v43;
    v57 = *(__m256i *)(v43 + 16);
    v58 = *(_OWORD *)(v43 + 48);
    v21 = *(_DWORD *)(v43 + 64);
  }
  else
  {
    *(_QWORD *)&v48[12] = 0x28083F800000LL;
    *(_OWORD *)&v47.m256i_u64[1] = 0LL;
    v19 = (__m128)v46.m128_u64[0];
    *(_DWORD *)&v48[8] = 0;
    v47.m256i_i64[3] = 1065353216LL;
    v19.m128_f32[0] = v13;
    v20 = *(__m128 *)v47.m256i_i8;
    v21 = 10248;
    v20.m128_f32[0] = v15;
    v22 = _mm_shuffle_ps(v19, v19, 225);
    v23 = _mm_shuffle_ps(v20, v20, 225);
    v22.m128_f32[0] = v14;
    v23.m128_f32[0] = v16;
    *(__m128 *)v47.m256i_i8 = _mm_shuffle_ps(v23, v23, 225);
    v57 = v47;
    v24 = *(__m128 *)v48;
    v46 = _mm_shuffle_ps(v22, v22, 225);
    v24.m128_f32[0] = v17;
    v56 = v46;
    v25 = _mm_shuffle_ps(v24, v24, 225);
    v25.m128_f32[0] = v18;
    *(__m128 *)v48 = _mm_shuffle_ps(v25, v25, 225);
    v58 = *(_OWORD *)v48;
  }
  v26 = v44;
  v59 = v21;
  if ( !v44 )
  {
    v54 = 0LL;
    v53 = (struct CShape **)&v44;
    v55 = 1;
    v27 = CShape::CopyShape((CShape *)&v60, (const struct CMILMatrix *)&v56, &v54);
    if ( v55 )
    {
      v28 = *v53;
      *v53 = v54;
      if ( v28 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v28)(v28, 1LL);
    }
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x5Fu, 0LL);
      goto LABEL_28;
    }
    goto LABEL_12;
  }
  v45 = 0LL;
  v49.m128_u64[0] = (unsigned __int64)&v45;
  v49.m128_u64[1] = 0LL;
  LOBYTE(v50) = 1;
  v36 = CShape::TryOptimizedCombinePaths(v44, 0LL, &v60, &v56, 1, &v49.m128_u16[4]);
  v27 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x1C8u, 0LL);
  }
  else if ( !v49.m128_u64[1] )
  {
    v42 = CShape::D2DCombine(v26, v37, &v60, &v56, 1, &v49.m128_u16[4]);
    v27 = v42;
    if ( v42 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x1D3u, 0LL);
  }
  if ( (_BYTE)v50 )
  {
    v38 = *(void (__fastcall ****)(_QWORD, __int64))v49.m128_u64[0];
    *(_QWORD *)v49.m128_u64[0] = v49.m128_u64[1];
    if ( v38 )
      (**v38)(v38, 1LL);
  }
  if ( v27 >= 0 )
  {
    v39 = v44;
    v40 = v45;
    v45 = 0LL;
    v44 = v40;
    if ( v39 )
    {
      (**v39)(v39, 1LL);
      if ( v45 )
        (**v45)(v45, 1LL);
    }
LABEL_12:
    v29 = v63;
    v30 = (char *)lpMem;
    v60 = &CRectanglesShape::`vftable';
    if ( (v63 - (_BYTE *)lpMem) >> 4 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
        &v46,
        (__int64)lpMem,
        (v63 - (_BYTE *)lpMem) >> 4);
      v30 = (char *)lpMem;
      v29 = &v63[-16 * v31];
      v63 = v29;
    }
    if ( v66 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v66 + 16LL))(v66);
      v29 = v63;
      v6 = 0LL;
      v30 = (char *)lpMem;
      v66 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    v32 = (v29 - v30) >> 4;
    if ( v32 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v46, (__int64)v30, v32);
      v30 = (char *)lpMem;
      v63 -= 16 * v33;
    }
    lpMem = v6;
    if ( v30 != (char *)&v65 && v30 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v30);
      v6 = 0LL;
    }
    v34 = v61;
    if ( v61 )
    {
      v61 = v6;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
      v6 = 0LL;
    }
    v9 = v51;
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x6Au, 0LL);
  if ( v45 )
    (**v45)(v45, 1LL);
LABEL_28:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v60);
  if ( v44 )
    (**v44)(v44, 1LL);
  return (unsigned int)v27;
}
