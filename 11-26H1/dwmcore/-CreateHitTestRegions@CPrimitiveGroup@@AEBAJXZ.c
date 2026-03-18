/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE51C
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE4D4 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x1800AF650 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800AF6A4 (-IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUD2D_RECT_F@@AEAU2@@Z @ 0x1800AF780 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUD2D_RECT_F@@AEAU2@@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800AF8B0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x1800AFAC0 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqu.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800E9C24 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x18027D92C (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  int v7; // edi
  unsigned int v8; // eax
  char v9; // r12
  __int64 v10; // r13
  unsigned int v11; // edx
  unsigned int v12; // r11d
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // zf
  int v16; // r9d
  char v17; // r10
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rdx
  unsigned int v24; // r14d
  const struct D2D_RECT_F *v25; // rdx
  MILMatrix3x2 *v26; // rcx
  int v27; // r9d
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // edx
  int D2DGeometry; // eax
  int v33; // r9d
  char v35; // cl
  unsigned int v36; // eax
  int v37; // r9d
  struct D2D_POINT_2F *v38; // rax
  FLOAT v39; // xmm2_4
  __int64 v40; // r8
  float v41; // xmm0_4
  FLOAT v42; // xmm3_4
  __m128 v43; // xmm1
  __m128 v44; // xmm1
  __m128 v45; // xmm1
  __m128 v46; // xmm1
  int v47; // eax
  int v48; // eax
  _BYTE *v49; // rax
  const struct D2D_RECT_F *v50; // r9
  MILMatrix3x2 *v51; // rcx
  float *v52; // rcx
  FLOAT *v53; // r9
  const struct D2D_RECT_F *v54; // r10
  int v55; // r11d
  int v56; // r9d
  __m128 v57; // xmm1
  int v58; // r8d
  __m128 v59; // xmm1
  int v60; // edx
  __m128 v61; // xmm1
  int v62; // ecx
  __m128 v63; // xmm1
  unsigned int v64; // edx
  struct D2D_RECT_F v65; // xmm0
  __int64 v66; // rcx
  int v67; // eax
  int v68; // r9d
  unsigned int v69; // eax
  FLOAT right; // xmm0_4
  FLOAT bottom; // xmm1_4
  struct D2D_POINT_2F *v72; // rax
  FLOAT v73; // xmm2_4
  __int64 v74; // rdx
  float v75; // xmm0_4
  FLOAT v76; // xmm3_4
  float *v77; // r9
  __int64 v78; // r10
  int v79; // r11d
  __m128i v80; // xmm0
  int v81; // r10d
  __m128 v82; // xmm1
  __m128i v83; // xmm0
  int v84; // r8d
  __m128 v85; // xmm1
  __m128i v86; // xmm0
  int v87; // edx
  __m128 v88; // xmm1
  __m128i v89; // xmm0
  int v90; // ecx
  __m128 v91; // xmm1
  int v92; // eax
  int v93; // r9d
  unsigned int v94; // eax
  unsigned int v95; // [rsp+28h] [rbp-E0h]
  float v96; // [rsp+38h] [rbp-D0h]
  float v97; // [rsp+38h] [rbp-D0h]
  float v98; // [rsp+38h] [rbp-D0h]
  float v99; // [rsp+38h] [rbp-D0h]
  float v100; // [rsp+38h] [rbp-D0h]
  float v101; // [rsp+38h] [rbp-D0h]
  float v102; // [rsp+38h] [rbp-D0h]
  float v103; // [rsp+38h] [rbp-D0h]
  float v104; // [rsp+38h] [rbp-D0h]
  float v105; // [rsp+38h] [rbp-D0h]
  float v106; // [rsp+38h] [rbp-D0h]
  float v107; // [rsp+38h] [rbp-D0h]
  char v108; // [rsp+3Ch] [rbp-CCh]
  struct D2D_POINT_2F v109; // [rsp+40h] [rbp-C8h] BYREF
  FLOAT v110; // [rsp+48h] [rbp-C0h]
  FLOAT y; // [rsp+4Ch] [rbp-BCh]
  FLOAT v112; // [rsp+50h] [rbp-B8h]
  FLOAT v113; // [rsp+54h] [rbp-B4h]
  FLOAT left; // [rsp+58h] [rbp-B0h]
  FLOAT v115; // [rsp+5Ch] [rbp-ACh]
  __int64 v116; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1GeometrySink *v117; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v118; // [rsp+70h] [rbp-98h] BYREF
  int v119; // [rsp+80h] [rbp-88h]
  unsigned int v120; // [rsp+84h] [rbp-84h]
  unsigned int v121; // [rsp+88h] [rbp-80h]
  struct D2D_RECT_F v122; // [rsp+90h] [rbp-78h] BYREF
  struct D2D_RECT_F v123; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v124[3]; // [rsp+B8h] [rbp-50h] BYREF
  int v125; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v126; // [rsp+110h] [rbp+8h]
  _QWORD v127[2]; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v128; // [rsp+12Ch] [rbp+24h]
  unsigned int v129; // [rsp+130h] [rbp+28h]

  v4 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>(v127);
  v116 = 0LL;
  v117 = 0LL;
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 11);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 12);
  v5 = *((_QWORD *)this + 45);
  v6 = v5 + *((_QWORD *)this + 46);
LABEL_2:
  v7 = 0;
  while ( v5 < v6 )
  {
    v49 = (_BYTE *)(v5 + 16);
    v50 = (const struct D2D_RECT_F *)v5;
    v5 += 17LL;
    if ( (unsigned __int64)v49 > v6 || v5 > v6 )
    {
      v95 = 815;
      goto LABEL_36;
    }
    if ( !*v49 )
    {
      if ( IsPixelAligned(v50) )
      {
        v80 = (__m128i)*(unsigned int *)(v78 + 12);
        if ( (v79 & (unsigned int)_mm_cvtsi128_si32(v80)) > 0x497FFFF0 )
        {
          v82.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)*(float *)v80.m128i_i32 - *(float *)v80.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v82);
          v81 = (int)*(float *)v80.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v104 = *(float *)v80.m128i_i32 + 6291456.25;
          v81 = (int)(LODWORD(v104) << 10) >> 11;
        }
        v83 = (__m128i)*((unsigned int *)v77 + 2);
        if ( (v79 & (unsigned int)_mm_cvtsi128_si32(v83)) > 0x497FFFF0 )
        {
          v85.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)*(float *)v83.m128i_i32 - *(float *)v83.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v85);
          v84 = (int)*(float *)v83.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v105 = *(float *)v83.m128i_i32 + 6291456.25;
          v84 = (int)(LODWORD(v105) << 10) >> 11;
        }
        v86 = (__m128i)*((unsigned int *)v77 + 1);
        if ( (v79 & (unsigned int)_mm_cvtsi128_si32(v86)) > 0x497FFFF0 )
        {
          v88.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)*(float *)v86.m128i_i32 - *(float *)v86.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v88);
          v87 = (int)*(float *)v86.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v106 = *(float *)v86.m128i_i32 + 6291456.25;
          v87 = (int)(LODWORD(v106) << 10) >> 11;
        }
        v89 = (__m128i)*(unsigned int *)v77;
        if ( (v79 & (unsigned int)_mm_cvtsi128_si32(v89)) > 0x497FFFF0 )
        {
          v91.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)*(float *)v89.m128i_i32 - *(float *)v89.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v91);
          v90 = (int)*(float *)v89.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v107 = *(float *)v89.m128i_i32 + 6291456.25;
          v90 = (int)(LODWORD(v107) << 10) >> 11;
        }
        *(_QWORD *)&v123.top = __PAIR64__(v84, v87);
        LODWORD(v123.left) = v90;
        LODWORD(v123.bottom) = v81;
        v64 = v129 + 1;
        if ( v129 + 1 < v129 )
        {
          v7 = -2147024362;
          v94 = 183;
          v4 = -2147024362;
          v93 = -2147024362;
LABEL_119:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v93, v94, 0LL);
          v95 = 896;
LABEL_45:
          v33 = v7;
          goto LABEL_37;
        }
        if ( v64 <= v128 )
        {
          v65 = v123;
          v66 = v129;
          goto LABEL_83;
        }
        v92 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 16, 1, &v123);
        v7 = v92;
        v4 = v92;
        if ( v92 < 0 )
        {
          v93 = v92;
          v94 = 194;
          goto LABEL_119;
        }
LABEL_86:
        v4 = v7;
        goto LABEL_2;
      }
      *(_OWORD *)&a3 = *(unsigned int *)v77;
      right = v77[2];
      v109.y = v77[1];
      y = v109.y;
      bottom = *(float *)(v78 + 12);
      goto LABEL_109;
    }
    v51 = (MILMatrix3x2 *)v5;
    v5 += 24LL;
    if ( v5 > v6 )
    {
      v95 = 826;
      goto LABEL_36;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v51) )
    {
      v118 = 0LL;
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v52, v54, &v118);
      if ( IsPixelAligned(&v118) )
      {
        if ( (v55 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v118.bottom))) > 0x497FFFF0 )
        {
          v57.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)v118.bottom - v118.bottom;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v57);
          v56 = (int)v118.bottom - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v100 = v118.bottom + 6291456.25;
          v56 = (int)(LODWORD(v100) << 10) >> 11;
        }
        if ( (v55 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v118.right))) > 0x497FFFF0 )
        {
          v59.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)v118.right - v118.right;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v59);
          v58 = (int)v118.right - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v101 = v118.right + 6291456.25;
          v58 = (int)(LODWORD(v101) << 10) >> 11;
        }
        if ( (v55 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v118.top))) > 0x497FFFF0 )
        {
          v61.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)v118.top - v118.top;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v61);
          v60 = (int)v118.top - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v102 = v118.top + 6291456.25;
          v60 = (int)(LODWORD(v102) << 10) >> 11;
        }
        if ( (v55 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v118.left))) > 0x497FFFF0 )
        {
          v63.m128_f32[0] = -0.5;
          *(float *)&a3 = (float)(int)v118.left - v118.left;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v63);
          v62 = (int)v118.left - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v103 = v118.left + 6291456.25;
          v62 = (int)(LODWORD(v103) << 10) >> 11;
        }
        LODWORD(v122.top) = v60;
        LODWORD(v122.left) = v62;
        LODWORD(v122.right) = v58;
        v64 = v129 + 1;
        LODWORD(v122.bottom) = v56;
        if ( v129 + 1 < v129 )
        {
          v7 = -2147024362;
          v69 = 183;
          v4 = -2147024362;
          v68 = -2147024362;
        }
        else
        {
          if ( v64 <= v128 )
          {
            v65 = v122;
            v66 = v129;
LABEL_83:
            *(struct D2D_RECT_F *)(v127[0] + 16 * v66) = v65;
            v129 = v64;
            goto LABEL_86;
          }
          v67 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 16, 1, &v122);
          v7 = v67;
          v4 = v67;
          if ( v67 >= 0 )
            goto LABEL_86;
          v68 = v67;
          v69 = 194;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v68, v69, 0LL);
        v95 = 845;
        goto LABEL_45;
      }
      *(_OWORD *)&a3 = LODWORD(v118.left);
      right = v118.right;
      v109.y = v118.top;
      y = v118.top;
      bottom = v118.bottom;
LABEL_109:
      v115 = bottom;
      left = *(float *)&a3;
      v113 = bottom;
      v112 = right;
      v110 = right;
      v109.x = *(FLOAT *)&a3;
      goto LABEL_110;
    }
    v72 = &v109;
    v73 = *v53;
    v74 = 4LL;
    v75 = v53[2];
    v109.y = v53[1];
    y = v109.y;
    v113 = v53[3];
    v115 = v113;
    v109.x = v73;
    v110 = v75;
    v112 = v75;
    left = v73;
    do
    {
      *(_OWORD *)&a3 = LODWORD(v72->x);
      v76 = (float)((float)(v72->y * v52[3]) + (float)(*(float *)&a3 * v52[1])) + v52[5];
      v72->x = (float)((float)(v72->y * v52[2]) + (float)(v72->x * *v52)) + v52[4];
      v72->y = v76;
      ++v72;
      --v74;
    }
    while ( v74 );
LABEL_110:
    if ( !v116 )
    {
      v48 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(g_DeviceManager, &v116);
      v4 = v48;
      if ( v48 < 0 )
      {
        v95 = 921;
        goto LABEL_123;
      }
      v48 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v116 + 136LL))(v116, &v117);
      v4 = v48;
      if ( v48 < 0 )
      {
        v95 = 923;
        goto LABEL_123;
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v117 + 24LL))(v117, 1LL);
    }
    CPrimitiveGroup::AddFilledPolygonToD2DSink(v117, &v109);
  }
  v8 = *((_DWORD *)this + 84);
  v9 = 0;
  v10 = *((_QWORD *)this + 41);
  v11 = 0;
  v121 = v8;
  while ( 1 )
  {
    v12 = v11 + 144;
    v120 = v11 + 144;
    if ( v11 + 144 > v8 )
      break;
    v13 = v11;
    v14 = *(unsigned int *)(v11 + v10 + 16);
    v15 = (*(_DWORD *)(v11 + v10 + 4) & 0x20) == 0;
    v16 = *(_DWORD *)(v11 + v10 + 4) & 0x20;
    v119 = v16;
    if ( !v15 && (_DWORD)v14 != *((_DWORD *)this + 73) )
    {
      v108 = 1;
LABEL_9:
      v18 = *((_QWORD *)this + 44);
      v19 = v14;
      if ( v14 >= v18
        || (v20 = 148LL * *(unsigned int *)(v13 + v10 + 20), v20 > 0xFFFFFFFF)
        || (v21 = (unsigned int)(v20 + v14), (unsigned int)v21 < (unsigned int)v20)
        || v21 > v18 )
      {
        v95 = 969;
LABEL_36:
        v33 = -2147467259;
        v4 = -2147467259;
        goto LABEL_37;
      }
      v22 = 0;
      v23 = v19 + *((_QWORD *)this + 43);
      *(_QWORD *)&v118.left = v23;
      while ( 2 )
      {
        v24 = v22 + 148;
        if ( v22 + 148 > (unsigned int)v20 )
        {
          v16 = v119;
          v17 = v108;
          v12 = v120;
          goto LABEL_40;
        }
        if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v22 + v23 + 16)) )
        {
          v122 = 0LL;
          MILMatrix3x2::Transform2DBounds(v26, v25, &v122);
          if ( IsPixelAligned(&v122) )
          {
            if ( (_mm_cvtsi128_si32((__m128i)LODWORD(v122.bottom)) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v43.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v122.bottom - v122.bottom;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v43);
              v27 = (int)v122.bottom - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v96 = v122.bottom + 6291456.25;
              v27 = (int)(LODWORD(v96) << 10) >> 11;
            }
            if ( (_mm_cvtsi128_si32((__m128i)LODWORD(v122.right)) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v44.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v122.right - v122.right;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v44);
              v28 = (int)v122.right - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v97 = v122.right + 6291456.25;
              v28 = (int)(LODWORD(v97) << 10) >> 11;
            }
            if ( (_mm_cvtsi128_si32((__m128i)LODWORD(v122.top)) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v45.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v122.top - v122.top;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v45);
              v29 = (int)v122.top - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v98 = v122.top + 6291456.25;
              v29 = (int)(LODWORD(v98) << 10) >> 11;
            }
            if ( (_mm_cvtsi128_si32((__m128i)LODWORD(v122.left)) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v46.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v122.left - v122.left;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v46);
              v30 = (int)v122.left - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v99 = v122.left + 6291456.25;
              v30 = (int)(LODWORD(v99) << 10) >> 11;
            }
            *(_QWORD *)&v123.left = __PAIR64__(v29, v30);
            *(_QWORD *)&v123.right = __PAIR64__(v27, v28);
            v31 = v129 + 1;
            if ( v129 + 1 < v129 )
            {
              v7 = -2147024362;
              v36 = 183;
              v4 = -2147024362;
              v37 = -2147024362;
LABEL_44:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, v36, 0LL);
              v95 = 999;
              goto LABEL_45;
            }
            if ( v31 > v128 )
            {
              v47 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 16, 1, &v123);
              v7 = v47;
              v4 = v47;
              if ( v47 < 0 )
              {
                v37 = v47;
                v36 = 194;
                goto LABEL_44;
              }
            }
            else
            {
              *(struct D2D_RECT_F *)(v127[0] + 16LL * v129) = v123;
              v129 = v31;
            }
            v4 = v7;
            v7 = 0;
LABEL_29:
            v23 = *(_QWORD *)&v118.left;
            v22 = v24;
            continue;
          }
          *(_OWORD *)&a3 = LODWORD(v122.left);
          y = v122.top;
          v113 = v122.bottom;
          v115 = v122.bottom;
          v109 = *(struct D2D_POINT_2F *)&v122.left;
          v110 = v122.right;
          v112 = v122.right;
          left = v122.left;
        }
        else
        {
          v38 = &v109;
          v39 = v25->left;
          v40 = 4LL;
          v41 = v25->right;
          v109.y = v25->top;
          y = v109.y;
          v113 = v25->bottom;
          v115 = v113;
          v109.x = v39;
          v110 = v41;
          v112 = v41;
          left = v39;
          do
          {
            *(_OWORD *)&a3 = LODWORD(v38->x);
            v42 = (float)((float)(v38->y * v25[1].bottom) + (float)(*(float *)&a3 * v25[1].top)) + v25[2].top;
            v38->x = (float)((float)(v38->y * v25[1].right) + (float)(v38->x * *(float *)v26)) + v25[2].left;
            v38->y = v42;
            ++v38;
            --v40;
          }
          while ( v40 );
        }
        break;
      }
      if ( !v116 )
      {
        v48 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(
                g_DeviceManager,
                &v116);
        v4 = v48;
        if ( v48 < 0 )
        {
          v95 = 1046;
LABEL_123:
          v33 = v48;
LABEL_37:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, v95, 0LL);
          goto LABEL_38;
        }
        v48 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v116 + 136LL))(v116, &v117);
        v4 = v48;
        if ( v48 < 0 )
        {
          v95 = 1048;
          goto LABEL_123;
        }
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v117 + 24LL))(v117, 1LL);
      }
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v117, &v109);
      goto LABEL_29;
    }
    v108 = 0;
    v17 = 0;
    if ( !v9 && (*(_BYTE *)(v11 + v10 + 4) & 2) == 0 )
      goto LABEL_9;
LABEL_40:
    v35 = v17;
    v11 = v12;
    if ( !v16 )
      v35 = v9;
    v8 = v121;
    v9 = v35;
  }
  if ( v117 )
  {
    v48 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v117 + 72LL))(v117);
    v4 = v48;
    if ( v48 < 0 )
    {
      v95 = 1070;
      goto LABEL_123;
    }
    *((_QWORD *)this + 12) = v116;
    v116 = 0LL;
  }
  if ( v129 )
  {
    v124[0] = &CRegionShape::`vftable';
    v124[1] = 0LL;
    v124[2] = &v125;
    v125 = 0;
    v126 = 0LL;
    CRegionShape::BuildFromRects(v124, v127[0]);
    D2DGeometry = CRegionShape::GetD2DGeometry((CRegionShape *)v124, 0LL, (struct ID2D1Geometry **)this + 11);
    v4 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x43Fu, 0LL);
      CRegionShape::~CRegionShape((CRegionShape *)v124);
      goto LABEL_38;
    }
    CRegionShape::~CRegionShape((CRegionShape *)v124);
  }
  *((_BYTE *)this + 104) = 1;
LABEL_38:
  ReleaseInterfaceNoNULL<ID2D1Ink>(v117);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v116);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v127);
  return v4;
}
