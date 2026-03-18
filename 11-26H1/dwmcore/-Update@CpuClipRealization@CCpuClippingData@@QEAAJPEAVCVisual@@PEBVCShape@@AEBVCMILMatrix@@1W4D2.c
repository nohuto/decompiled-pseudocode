/*
 * XREFs of ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800120B0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClippingData::CpuClipRealization::Update(
        CCpuClippingData::CpuClipRealization *this,
        struct CVisual *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4,
        const struct CShape *a5,
        enum D2D1_ANTIALIAS_MODE a6,
        bool *a7)
{
  __int64 v7; // rax
  char v11; // al
  __int64 v12; // rdx
  unsigned __int32 v13; // xmm12_4
  float v14; // xmm8_4
  bool v15; // al
  enum D2D1_ANTIALIAS_MODE v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ebx
  char v23; // r8
  char v24; // cl
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ebx
  void (__fastcall ***v29)(_QWORD, __int64); // rcx
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  char v31; // cl
  __int64 v32; // rax
  char v33; // cl
  char v34; // dl
  float v35; // xmm1_4
  float v36; // xmm9_4
  float v37; // xmm7_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  __int64 v44; // rbx
  __int64 v45; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+30h] [rbp-D8h] BYREF
  float v47; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v48[11]; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD v49[3]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v7 = *(_QWORD *)a3;
  v49[0] = a2;
  v11 = (*(__int64 (__fastcall **)(const struct CShape *))(v7 + 56))(a3);
  v13 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( !v11 )
  {
    v20 = *(_QWORD *)a3;
    v14 = CCommonRegistryData::m_flCpuClipFlatteningTolerance;
    *(_OWORD *)&v49[1] = 0LL;
    v21 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD *, _QWORD))(v20 + 48))(a3, &v49[1], 0LL);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
        (const char *)(unsigned int)v21,
        v45);
      return v22;
    }
    v23 = *((_BYTE *)a4 + 65);
    v47 = 0.0;
    LODWORD(v46) = 0;
    if ( (char)(4 * (v23 & 0xF0)) > 0 )
      goto LABEL_66;
    if ( (v23 & 0x20) != 0 )
    {
      v24 = 1;
      goto LABEL_58;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a4 + 7) & v13) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)a4 + 3) & v13) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)a4 + 15) & v13))
                      - 1.0) & v13) < 0.000081380211 )
    {
      v24 = 1;
      v34 = -16;
    }
    else
    {
      v24 = 0;
      v34 = 16;
    }
    *((_BYTE *)a4 + 65) = v34 ^ (v23 ^ v34) & 0xCF;
    if ( !v24 )
LABEL_66:
      v24 = 0;
LABEL_58:
    v35 = *(float *)a4;
    v36 = *((float *)a4 + 4);
    v37 = *((float *)a4 + 5);
    if ( v24 )
    {
      v38 = sqrtf_0((float)(*((float *)a4 + 1) * *((float *)a4 + 1)) + (float)(v35 * v35));
      v39 = sqrtf_0((float)(v37 * v37) + (float)(v36 * v36));
    }
    else
    {
      v48[1] = *((_DWORD *)a4 + 1);
      v48[2] = *((_DWORD *)a4 + 3);
      v40 = *((_DWORD *)a4 + 7);
      *(float *)v48 = v35;
      v41 = *((_DWORD *)a4 + 12);
      v48[5] = v40;
      v42 = *((_DWORD *)a4 + 13);
      v48[6] = v41;
      v43 = *((_DWORD *)a4 + 15);
      v48[7] = v42;
      *(float *)&v48[3] = v36;
      *(float *)&v48[4] = v37;
      v48[8] = v43;
      if ( !(unsigned __int8)Matrix3x3::Get2DScaleDimensionsWithPerspective(v48, &v47, &v46, &v49[1]) )
        goto LABEL_61;
      v38 = v47;
      v39 = *(float *)&v46;
    }
    v14 = v14 / fminf(1000.0, fmaxf(v38, v39));
LABEL_61:
    if ( !*a7 && *((_QWORD *)this + 1) && (float)(*((float *)this + 28) - v14) <= 0.000081380211 )
      goto LABEL_4;
    goto LABEL_63;
  }
  v14 = 0.0;
  if ( !*a7 && !*((_QWORD *)this + 1) )
  {
LABEL_4:
    v15 = 0;
    goto LABEL_5;
  }
LABEL_63:
  v15 = 1;
LABEL_5:
  *a7 = v15;
  if ( v15 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      v29 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
      if ( v29 )
        (**v29)(v29, 1LL);
    }
    *((_QWORD *)this + 1) = 0LL;
    *((_BYTE *)this + 16) = 0;
    if ( *((_BYTE *)this + 32) )
    {
      v30 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
      if ( v30 )
        (**v30)(v30, 1LL);
    }
    *((_QWORD *)this + 3) = 0LL;
    *((_BYTE *)this + 32) = 0;
    v25 = *(_QWORD *)this;
    *(_QWORD *)this = 0LL;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    if ( v14 > 0.0 )
    {
      v26 = *(_QWORD *)a3;
      v46 = 0LL;
      v27 = (*(__int64 (__fastcall **)(const struct CShape *, __int64, __int64 *))(v26 + 40))(a3, v12, &v46);
      v28 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33C,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
          (const char *)(unsigned int)v27,
          v45);
        return v28;
      }
      v44 = v46;
      CShapePtr::~CShapePtr((CCpuClippingData::CpuClipRealization *)((char *)this + 8));
      *((_QWORD *)this + 1) = v44;
      *((_BYTE *)this + 16) = 1;
    }
    *((float *)this + 28) = v14;
  }
  v16 = a6;
  if ( a6 == D2D1_ANTIALIAS_MODE_ALIASED )
    goto LABEL_13;
  v17 = *(_QWORD *)a3;
  LODWORD(v46) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, __int64 *))(v17 + 64))(a3, &v46) || (_DWORD)v46 != 1 )
    goto LABEL_13;
  if ( *((char *)a4 + 64) >> 6 != 1 )
  {
    if ( *((char *)a4 + 64) >> 6 < 0 )
    {
LABEL_11:
      if ( !a5
        || (v32 = *(_QWORD *)a5,
            LODWORD(v46) = 0,
            (*(unsigned __int8 (__fastcall **)(const struct CShape *, __int64 *))(v32 + 64))(a5, &v46))
        && (_DWORD)v46 == 1
        && CMILMatrix::Is2DAxisAlignedPreserving((CCpuClippingData::CpuClipRealization *)((char *)this + 40)) )
      {
        v16 = D2D1_ANTIALIAS_MODE_ALIASED;
      }
      goto LABEL_13;
    }
    v31 = *((_BYTE *)a4 + 65);
    if ( (char)(4 * v31) >> 6 == 1 )
      goto LABEL_44;
    if ( (char)(4 * v31) >> 6 >= 0 )
    {
      v33 = v31 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a4 + 7) & v13) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)a4 + 3) & v13) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)a4 + 15) & v13))
                        - 1.0) & v13) >= 0.000081380211 )
      {
        *((_BYTE *)a4 + 65) = v33 ^ 0x10;
LABEL_44:
        *((_BYTE *)a4 + 64) = *((_BYTE *)a4 + 64) & 0x3F | 0x40;
        goto LABEL_45;
      }
      *((_BYTE *)a4 + 65) = v33 ^ 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a4 + 1) - 0.0) & v13) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a4 + 4) - 0.0) & v13) < 0.000081380211 )
    {
      *((_BYTE *)a4 + 64) |= 0xC0u;
      goto LABEL_11;
    }
    goto LABEL_44;
  }
LABEL_45:
  if ( CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)a4) )
    goto LABEL_11;
LABEL_13:
  if ( v16 != *((_DWORD *)this + 27) )
  {
    *((_DWORD *)this + 27) = v16;
    *a7 = 1;
  }
  LOBYTE(v45) = 0;
  if ( v16 != D2D1_ANTIALIAS_MODE_ALIASED )
  {
    if ( CCommonRegistryData::CpuClipAASinkForceEnable )
      LOBYTE(v45) = v14 > 0.0;
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v49[0] + 240LL) + 216LL))(
        *(_QWORD *)(v49[0] + 240LL),
        &v45);
  }
  if ( (_BYTE)v45 != *((_BYTE *)this + 116)
    || *(_QWORD *)this && *(_BYTE *)(*(_QWORD *)this + 56LL) && !CMILMatrix::Is2DAxisAlignedPreserving(a4) )
  {
    v18 = *(_QWORD *)this;
    *(_QWORD *)this = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    *((_BYTE *)this + 116) = v45;
    *a7 = 1;
  }
  return 0LL;
}
