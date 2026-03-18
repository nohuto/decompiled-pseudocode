/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009D060 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18000B410 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x18000EDA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180011040 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18002C040 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z @ 0x180038A6C (-ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18007B0D0 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18007D050 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007D068 (--0SamplerMode@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800BA820 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180166F34 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801A476C (-IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1801AC460 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C (-GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18025A0D8 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x18025A1D4 (-RemovePrimitiveClips@CCpuClip@@QEAAXXZ.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        struct CDrawListCache *a3)
{
  CPrimitiveGroupDrawListGenerator *v3; // r12
  int v4; // edi
  struct CDrawingContext *v6; // rbx
  __m128i si128; // xmm6
  __m128i v8; // xmm7
  __m128i v9; // xmm8
  __m128i v10; // xmm9
  int v11; // ecx
  int v12; // r13d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 i; // rax
  __int64 *v20; // r15
  __int64 v21; // r15
  __int64 v22; // r14
  __int128 v23; // xmm1
  __int64 v24; // rsi
  __int64 v25; // rdx
  int v26; // r8d
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  int v32; // eax
  bool v33; // cf
  char v34; // dl
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 v39; // r13
  char v40; // dl
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r12
  char v46; // al
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  char v57; // di
  int v58; // eax
  char v59; // bl
  CCommonRenderingEffectFactory *v60; // rcx
  struct CRenderingEffect *v61; // rax
  struct CRenderingEffect *v62; // rbx
  _QWORD *v63; // rcx
  __int64 v64; // r12
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdi
  bool v68; // di
  bool v69; // al
  __int64 v70; // rdx
  const struct PrimitiveVertexAttributesDesc *v71; // r8
  float v72; // xmm3_4
  unsigned int v73; // ecx
  unsigned int v74; // xmm1_4
  float v75; // xmm0_4
  unsigned __int64 v76; // rcx
  int v77; // eax
  unsigned int v78; // ecx
  int v79; // eax
  unsigned int v80; // edx
  _OWORD *v81; // rcx
  int v82; // eax
  unsigned int v83; // eax
  int v84; // eax
  __int64 v85; // rax
  struct CRenderingEffect *v86; // rcx
  bool v87; // zf
  __int64 v88; // rax
  unsigned int v89; // ebx
  enum DXGI_COLOR_SPACE_TYPE v90; // esi
  int v91; // ecx
  int v92; // ecx
  int v93; // ecx
  int v94; // ecx
  int v95; // eax
  __int16 v96; // [rsp+30h] [rbp-D0h]
  char v97; // [rsp+32h] [rbp-CEh]
  char v98; // [rsp+34h] [rbp-CCh]
  char v99; // [rsp+36h] [rbp-CAh]
  int v100; // [rsp+38h] [rbp-C8h]
  int v101; // [rsp+3Ch] [rbp-C4h]
  __int16 v102; // [rsp+50h] [rbp-B0h]
  int v103; // [rsp+60h] [rbp-A0h]
  __int64 v104; // [rsp+68h] [rbp-98h]
  int v105; // [rsp+70h] [rbp-90h]
  __int64 v106; // [rsp+78h] [rbp-88h]
  __int128 v107; // [rsp+80h] [rbp-80h] BYREF
  char v108; // [rsp+90h] [rbp-70h]
  __int128 v109; // [rsp+98h] [rbp-68h] BYREF
  char v110; // [rsp+A8h] [rbp-58h]
  CPrimitiveGroupDrawListGenerator *v111; // [rsp+B0h] [rbp-50h]
  struct CRenderingEffect *v112; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v113; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v114; // [rsp+D0h] [rbp-30h]
  unsigned int v115; // [rsp+E0h] [rbp-20h]
  __int64 v116; // [rsp+E8h] [rbp-18h]
  struct CDrawingContext *v117; // [rsp+F0h] [rbp-10h]
  struct D2D_RECT_F v118; // [rsp+F8h] [rbp-8h] BYREF
  CDrawListCache *v119; // [rsp+108h] [rbp+8h]
  _OWORD v120[2]; // [rsp+110h] [rbp+10h] BYREF
  __int32 v121; // [rsp+130h] [rbp+30h]
  _QWORD v122[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v123; // [rsp+170h] [rbp+70h] BYREF
  char v124; // [rsp+178h] [rbp+78h]
  __m128i v125; // [rsp+180h] [rbp+80h]
  __m128i v126; // [rsp+190h] [rbp+90h]
  __m128i v127; // [rsp+1A0h] [rbp+A0h]
  __m128i v128; // [rsp+1B0h] [rbp+B0h]
  int v129; // [rsp+1C0h] [rbp+C0h]
  __int64 v130; // [rsp+1C4h] [rbp+C4h]
  char v131; // [rsp+1CCh] [rbp+CCh]
  __m128i v132; // [rsp+1D0h] [rbp+D0h] BYREF
  __m128i v133; // [rsp+1E0h] [rbp+E0h]
  __m128i v134; // [rsp+1F0h] [rbp+F0h]
  __m128i v135; // [rsp+200h] [rbp+100h]
  int v136; // [rsp+210h] [rbp+110h]
  __int64 v137; // [rsp+220h] [rbp+120h] BYREF
  char v138[16]; // [rsp+230h] [rbp+130h] BYREF
  char v139[16]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v140[4496]; // [rsp+250h] [rbp+150h] BYREF
  _DWORD v141[8]; // [rsp+13E0h] [rbp+12E0h] BYREF
  __m256i v142; // [rsp+1400h] [rbp+1300h]
  __int128 v143; // [rsp+1420h] [rbp+1320h]
  __m256i v144; // [rsp+1430h] [rbp+1330h]
  __int128 v145; // [rsp+1450h] [rbp+1350h]
  __int128 v146; // [rsp+1460h] [rbp+1360h]

  v111 = this;
  v3 = this;
  v119 = a3;
  v117 = a2;
  v4 = 0;
  v113 = 0LL;
  v6 = a2;
  v114 = 0LL;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v140);
  v123 = 0LL;
  v124 = 0;
  v129 = 0;
  CShapePtr::~CShapePtr((CShapePtr *)&v123);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = _mm_load_si128((const __m128i *)&_xmm);
  v10 = _mm_load_si128((const __m128i *)&_xmm);
  ++dword_1803DE440;
  BYTE1(v129) = BYTE1(v129) & 0xC0 | 0x29;
  v131 = 0;
  v122[0] = 0LL;
  v130 = 1LL;
  v122[1] = 0LL;
  v125 = si128;
  v126 = v8;
  v127 = v9;
  v128 = v10;
  LOBYTE(v129) = -86;
  v136 = 0;
  CDrawListCache::Invalidate(a3);
  if ( CDrawingContext::IsWarpFastPathEnabled(v6) )
  {
    if ( CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(v3) )
    {
      v87 = *((_DWORD *)v6 + 60) == 4;
      BYTE12(v114) = 1;
      if ( v87 )
      {
LABEL_170:
        BYTE12(v114) = 0;
      }
      else
      {
        v88 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)v6 + 3) + 8LL) + 24LL))(
                *((_QWORD *)v6 + 3) + 8LL,
                &v137);
        v89 = 0;
        v90 = *(_DWORD *)(v88 + 8);
        while ( v89 < *((_DWORD *)v3 + 8) )
        {
          if ( !CDrawListBitmap::IsMatchingColorSpace((CDrawListBitmap *)(*((_QWORD *)v3 + 10) + 24LL * v89), v90) )
          {
            v6 = v117;
            goto LABEL_170;
          }
          ++v89;
        }
        v6 = v117;
      }
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v8 = _mm_load_si128((const __m128i *)&_xmm);
    v9 = _mm_load_si128((const __m128i *)&_xmm);
    v10 = _mm_load_si128((const __m128i *)&_xmm);
  }
  v11 = *((_DWORD *)v6 + 58);
  v100 = 0;
  if ( v11 != 1 )
  {
    v91 = v11 - 2;
    if ( !v91 || (v92 = v91 - 1) == 0 )
    {
      v100 = 2;
      goto LABEL_4;
    }
    v93 = v92 - 1;
    if ( v93 )
    {
      v94 = v93 - 1;
      if ( !v94 )
      {
        v100 = 4;
        goto LABEL_4;
      }
      if ( v94 != 1 )
        goto LABEL_4;
    }
    v100 = 3;
    goto LABEL_4;
  }
  v100 = 1;
LABEL_4:
  v12 = 1;
  LODWORD(v113) = 2;
  v103 = 1;
  if ( !*((_DWORD *)v6 + 59) )
  {
    v12 = 0;
    v103 = 0;
  }
  v13 = *((_DWORD *)v6 + 72);
  HIDWORD(v113) = v12;
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    v15 = *((_QWORD *)v6 + 35);
    v16 = *(__m128i *)(68 * v14 + v15 + 16);
    v132 = *(__m128i *)(68 * v14 + v15);
    v17 = *(__m128i *)(68 * v14 + v15 + 32);
    v133 = v16;
    v18 = *(__m128i *)(68 * v14 + v15 + 48);
    LODWORD(v15) = *(_DWORD *)(68 * v14 + v15 + 64);
    v134 = v17;
    v135 = v18;
    v136 = v15;
  }
  else
  {
    v132 = si128;
    v133 = v8;
    BYTE1(v136) = BYTE1(v136) & 0xC0 | 0x29;
    v134 = v9;
    v135 = v10;
    LOBYTE(v136) = -86;
  }
  if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)&v132) )
  {
    DWORD1(v113) = sqrtf_0(
                     (float)(*(float *)v132.m128i_i32 * *(float *)v132.m128i_i32)
                   + (float)(*(float *)&v132.m128i_i32[1] * *(float *)&v132.m128i_i32[1]));
    DWORD2(v113) = sqrtf_0(
                     (float)(*(float *)v133.m128i_i32 * *(float *)v133.m128i_i32)
                   + (float)(*(float *)&v133.m128i_i32[1] * *(float *)&v133.m128i_i32[1]));
  }
  else
  {
    *(_QWORD *)&v120[0] = v132.m128i_i64[0];
    DWORD2(v120[0]) = v132.m128i_i32[3];
    *(_QWORD *)((char *)v120 + 12) = v133.m128i_i64[0];
    *((_QWORD *)&v120[1] + 1) = v135.m128i_i64[0];
    DWORD1(v120[1]) = v133.m128i_i32[3];
    v121 = v135.m128i_i32[3];
    Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v120, (float *)&v113 + 1, (float *)&v113 + 2, 0LL);
    v12 = HIDWORD(v113);
    v103 = HIDWORD(v113);
  }
  CDrawingContext::GetCpuClip(v6, (struct CCpuClip *)v122);
  *(_QWORD *)&v114 = v122;
  for ( i = 0LL; ; i = (unsigned int)(v105 + 1) )
  {
    v20 = (__int64 *)*((_QWORD *)v3 + 2);
    v105 = i;
    if ( (unsigned int)i >= *((_DWORD *)v20 + 2) )
    {
      CDrawListCache::Update(v119, v117, (struct CDrawListEntryBuilder *)v140);
      goto LABEL_33;
    }
    v21 = *v20;
    v22 = 144 * i;
    v23 = *(_OWORD *)(144 * i + v21 + 48);
    v24 = (unsigned int)*(_QWORD *)(144 * i + v21 + 16) + **((_QWORD **)v3 + 3);
    v25 = HIDWORD(*(_QWORD *)(144 * i + v21 + 16));
    v26 = 100 * *(_DWORD *)(144 * i + v21) + 48;
    *(_OWORD *)v142.m256i_i8 = *(_OWORD *)(144 * i + v21 + 32);
    v27 = *(_OWORD *)(144 * i + v21 + 64);
    v115 = v26;
    *(_OWORD *)&v142.m256i_u64[2] = v23;
    v28 = *(_OWORD *)(144 * i + v21 + 80);
    v143 = v27;
    v29 = *(_OWORD *)(144 * i + v21 + 96);
    *(_OWORD *)v144.m256i_i8 = v28;
    v30 = *(_OWORD *)(144 * i + v21 + 112);
    *(_OWORD *)&v144.m256i_u64[2] = v29;
    v31 = *(_OWORD *)(144 * i + v21 + 128);
    v137 = v24 + (unsigned int)(v26 * (v25 - 1));
    v101 = 0;
    DWORD2(v114) = 0;
    v32 = *(_DWORD *)(144 * i + v21 + 4);
    v145 = v30;
    v146 = v31;
    if ( (v32 & 0x20) != 0 )
      break;
    if ( (v32 & 2) == 0 || v12 != 1 )
    {
      v33 = *(_DWORD *)(v22 + v21) == 0;
      v34 = 1;
      v110 = 0;
      v109 = 0LL;
      v99 = 1;
      v107 = 0LL;
      v108 = 0;
      if ( v33 )
      {
        v45 = *((_QWORD *)&v107 + 1);
        v39 = *((_QWORD *)&v109 + 1);
        v106 = v109;
        v116 = *((_QWORD *)&v107 + 1);
        v104 = v107;
        goto LABEL_38;
      }
      v35 = *(unsigned int *)(v22 + v21 + 40);
      if ( (unsigned int)v35 >= *((_DWORD *)v3 + 8) )
      {
        v39 = *((_QWORD *)&v109 + 1);
        v106 = v109;
      }
      else
      {
        v36 = *((_QWORD *)v3 + 10);
        v37 = 3 * v35;
        v38 = *(_QWORD *)(v36 + 24 * v35);
        v106 = v38;
        *(_QWORD *)&v109 = v38;
        if ( v38 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
        v39 = *(_QWORD *)(v36 + 8 * v37 + 8);
        *((_QWORD *)&v109 + 1) = v39;
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
        v110 = *(_BYTE *)(v36 + 8 * v37 + 16);
        if ( v110 )
        {
          v40 = 1;
        }
        else if ( v38 )
        {
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
        }
        else
        {
          v40 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 24LL))(v39, v138) + 4) == 3;
        }
        v3 = v111;
        v34 = v40 & 1;
        v99 = v34;
      }
      v41 = *(unsigned int *)(v22 + v21 + 56);
      if ( (unsigned int)v41 >= *((_DWORD *)v3 + 12) )
      {
        v45 = *((_QWORD *)&v107 + 1);
        v116 = *((_QWORD *)&v107 + 1);
        v104 = v107;
      }
      else
      {
        v42 = *((_QWORD *)v3 + 11);
        v43 = 3 * v41;
        v44 = *(_QWORD *)(v42 + 24 * v41);
        v104 = v44;
        *(_QWORD *)&v107 = v44;
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
        v45 = *(_QWORD *)(v42 + 8 * v43 + 8);
        v116 = v45;
        *((_QWORD *)&v107 + 1) = v45;
        if ( v45 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
        v108 = *(_BYTE *)(v42 + 8 * v43 + 16);
        if ( v108 )
        {
          v46 = 1;
        }
        else if ( v104 )
        {
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 32LL))(v104);
        }
        else
        {
          v46 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 24LL))(v45, v139) + 4) == 3;
        }
        v34 = v46 & v99;
        v99 &= v46;
      }
      if ( v34 )
      {
LABEL_38:
        v101 = 1;
        DWORD2(v114) = 1;
      }
      v48 = *(_DWORD *)(v22 + v21 + 52);
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          if ( v49 != 1 )
            goto LABEL_42;
          v97 = 3;
        }
        else
        {
          v97 = 2;
        }
      }
      else
      {
LABEL_42:
        v97 = 1;
      }
      v50 = *(_DWORD *)(v22 + v21 + 48);
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          if ( v51 != 1 )
            goto LABEL_46;
          HIBYTE(v96) = 3;
        }
        else
        {
          HIBYTE(v96) = 2;
        }
      }
      else
      {
LABEL_46:
        HIBYTE(v96) = 1;
      }
      if ( !v100 )
        goto LABEL_137;
      v52 = *(_DWORD *)(v22 + v21 + 44);
      if ( v52 == 1 )
        goto LABEL_49;
      if ( v52 )
      {
        if ( v52 == 3 )
          LOBYTE(v96) = 2;
        else
LABEL_49:
          LOBYTE(v96) = 1;
      }
      else
      {
LABEL_137:
        LOBYTE(v96) = 0;
      }
      v53 = *(_DWORD *)(v22 + v21 + 68);
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          if ( v54 != 1 )
            goto LABEL_53;
          v98 = 3;
        }
        else
        {
          v98 = 2;
        }
      }
      else
      {
LABEL_53:
        v98 = 1;
      }
      v55 = *(_DWORD *)(v22 + v21 + 64);
      if ( v55 )
      {
        v56 = v55 - 1;
        if ( v56 )
        {
          if ( v56 != 1 )
            goto LABEL_57;
          v57 = 3;
        }
        else
        {
          v57 = 2;
        }
      }
      else
      {
LABEL_57:
        v57 = 1;
      }
      if ( !v100 )
        goto LABEL_139;
      v58 = *(_DWORD *)(v22 + v21 + 60);
      if ( v58 == 1 )
        goto LABEL_60;
      if ( v58 )
      {
        if ( v58 == 3 )
          v59 = 2;
        else
LABEL_60:
          v59 = 1;
      }
      else
      {
LABEL_139:
        v59 = 0;
      }
      v112 = 0LL;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v112);
      LOBYTE(v102) = v59;
      HIBYTE(v102) = v57;
      if ( v39 || v45 )
      {
        v61 = (struct CRenderingEffect *)CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
        v62 = v61;
        if ( v61 )
        {
          CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v61);
          *v63 = &CCommonRenderingEffect::`vftable';
          CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v63 + 2));
          CDrawListBitmap::CDrawListBitmap((struct CRenderingEffect *)((char *)v62 + 40));
          SamplerMode::SamplerMode((struct CRenderingEffect *)((char *)v62 + 64));
          SamplerMode::SamplerMode((struct CRenderingEffect *)((char *)v62 + 67));
          v64 = *((_QWORD *)v62 + 2);
          *((_QWORD *)v62 + 2) = v106;
          if ( v106 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 8LL))(v106);
          if ( v64 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
          v65 = *((_QWORD *)v62 + 3);
          *((_QWORD *)v62 + 3) = v39;
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
          if ( v65 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
          *((_BYTE *)v62 + 32) = v110;
          v66 = *((_QWORD *)v62 + 5);
          *((_QWORD *)v62 + 5) = v104;
          if ( v104 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 8LL))(v104);
          if ( v66 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
          v45 = v116;
          v67 = *((_QWORD *)v62 + 6);
          *((_QWORD *)v62 + 6) = v116;
          if ( v45 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
          if ( v67 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
          *((_BYTE *)v62 + 56) = v108;
          *((_WORD *)v62 + 32) = v96;
          *((_BYTE *)v62 + 66) = v97;
          *(_WORD *)((char *)v62 + 67) = v102;
          *((_BYTE *)v62 + 69) = v98;
          v68 = !v39
             || CCommonRegistryData::EnableCommonSuperSets
             && v106
             && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v106 + 40LL))(v106)
             && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 72LL))(v39, 0LL);
          *((_BYTE *)v62 + 70) = v68;
          v69 = !v45
             || CCommonRegistryData::EnableCommonSuperSets
             && v104
             && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v104 + 40LL))(v104);
          *((_BYTE *)v62 + 70) = v68 && v69;
          (**(void (__fastcall ***)(struct CRenderingEffect *))v62)(v62);
          goto LABEL_91;
        }
        v4 = -2147024882;
        v83 = 44;
LABEL_155:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v83, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x17Cu, 0LL);
        v86 = v112;
        if ( v112 )
        {
          v85 = *(_QWORD *)v112;
          goto LABEL_144;
        }
      }
      else
      {
        v4 = CCommonRenderingEffectFactory::CreateSolidColorRenderingEffect(v60, &v112);
        if ( v4 < 0 )
        {
          v83 = 50;
          goto LABEL_155;
        }
        v62 = v112;
LABEL_91:
        CDrawListEntryBuilder::Begin(
          (CDrawListEntryBuilder *)v140,
          (const struct DrawListEntryBuilderSetupParams *)&v113,
          v62);
        while ( 1 )
        {
          memset(v120, 0, sizeof(v120));
          v120[0] = *(_OWORD *)v24;
          LODWORD(v120[1]) = *(_DWORD *)(v24 + 44);
          v132 = 0LL;
          v134 = 0uLL;
          v133 = 0LL;
          memset_0(v141, 0, 0x70uLL);
          v71 = 0LL;
          if ( *(_DWORD *)(v22 + v21) )
          {
            v72 = *(float *)(v24 + 60);
            v73 = 7;
            *(float *)&v74 = v72 * *(float *)(v24 + 56);
            v75 = v72 * *(float *)(v24 + 48);
            *(float *)&v132.m128i_i32[1] = v72 * *(float *)(v24 + 52);
            v132.m128i_i64[1] = __PAIR64__(LODWORD(v72), v74);
            *(float *)v132.m128i_i32 = v75;
            if ( *(_DWORD *)(v24 + 144) < 7u )
              v73 = *(_DWORD *)(v24 + 144);
            if ( v73 < *(_DWORD *)(v22 + v21 + 12) )
            {
              v76 = *(_DWORD *)(v22 + v21 + 8) + v73;
              if ( v76 >= *((_QWORD *)v111 + 8) )
                ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
                  v76,
                  v70,
                  0LL);
              v133.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)v111 + 9) + 8 * v76);
            }
            v77 = v101;
            if ( v99 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v72 - 1.0) & _xmm) < 0.0000011920929 )
              v78 = v101 | 1;
            else
              v78 = v101 & 0xFFFFFFFE;
            DWORD2(v114) = v78;
            v101 = v78;
            if ( v77 != v78 )
            {
              v84 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v140, v70);
              v4 = v84;
              if ( v84 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0x1A9u, 0LL);
                goto LABEL_142;
              }
              CDrawListEntryBuilder::Begin(
                (CDrawListEntryBuilder *)v140,
                (const struct DrawListEntryBuilderSetupParams *)&v113,
                v62);
            }
            if ( v39 )
            {
              v141[0] = *(_DWORD *)(v24 + 64);
              v141[1] = *(_DWORD *)(v24 + 68);
              v141[2] = 0;
              v141[3] = *(_DWORD *)(v24 + 72);
              v141[4] = *(_DWORD *)(v24 + 76);
              v141[5] = 0;
              v141[6] = *(_DWORD *)(v24 + 80);
              v141[7] = *(_DWORD *)(v24 + 84);
              v142.m256i_i32[0] = 1065353216;
              if ( *(float *)(v24 + 88) == 0.0
                && *(float *)(v24 + 92) == 0.0
                && *(float *)(v24 + 96) == 1.0
                && *(float *)(v24 + 100) == 1.0 )
              {
                v142.m256i_i8[20] = 0;
              }
              else
              {
                v142.m256i_i8[20] = 1;
                *(_OWORD *)((char *)v142.m256i_i64 + 4) = *(_OWORD *)(v24 + 88);
              }
            }
            if ( v45 )
            {
              v142.m256i_i64[3] = *(_QWORD *)(v24 + 104);
              LODWORD(v143) = 0;
              *(_QWORD *)((char *)&v143 + 4) = *(_QWORD *)(v24 + 112);
              HIDWORD(v143) = 0;
              v144.m256i_i64[0] = *(_QWORD *)(v24 + 120);
              v144.m256i_i32[2] = 1065353216;
              v144.m256i_i8[28] = CPrimitiveGroupDrawListGenerator::ShouldUseTexCoordClamp((const struct D2D_RECT_F *)(v24 + 128));
              if ( v144.m256i_i8[28] )
                *(_OWORD *)((char *)&v144.m256i_u64[1] + 4) = *v81;
            }
            v134.m128i_i64[0] = 2LL;
            v134.m128i_i64[1] = (__int64)v141;
            v71 = (const struct PrimitiveVertexAttributesDesc *)&v132;
          }
          v79 = CDrawListEntryBuilder::Insert(
                  (CDrawListEntryBuilder *)v140,
                  (const struct PrimitiveGeometryDesc *)v120,
                  v71,
                  (const struct D2D_MATRIX_3X2_F *)(v24 + 16));
          v4 = v79;
          if ( v79 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x1CFu, 0LL);
            goto LABEL_142;
          }
          if ( v24 == v137 )
            break;
          v24 += v115;
        }
        v82 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v140, v80);
        v4 = v82;
        if ( v82 >= 0 )
        {
          if ( v62 )
            (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v62 + 8LL))(v62);
          if ( v45 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          if ( v104 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          if ( v106 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
          v3 = v111;
          goto LABEL_126;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x1D3u, 0LL);
LABEL_142:
        if ( !v62 )
          goto LABEL_145;
        v85 = *(_QWORD *)v62;
        v86 = v62;
LABEL_144:
        (*(void (__fastcall **)(struct CRenderingEffect *))(v85 + 8))(v86);
      }
LABEL_145:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v107 + 1);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v107);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v109 + 1);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v109);
      goto LABEL_33;
    }
LABEL_126:
    v12 = v103;
  }
  CCpuClip::RemovePrimitiveClips((CCpuClip *)v122);
  CMILMatrix::CMILMatrix((CMILMatrix *)v120, (const struct D2D_MATRIX_3X2_F *)(v24 + 16));
  v118 = *(struct D2D_RECT_F *)v24;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v132, &v118);
  v95 = CCpuClip::AddPrimitiveClip((CCpuClip *)v122, (const struct CShape *)&v132, (const struct CMILMatrix *)v120);
  v4 = v95;
  if ( v95 >= 0 )
  {
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v132);
    goto LABEL_126;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x142u, 0LL);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v132);
LABEL_33:
  CShapePtr::~CShapePtr((CShapePtr *)&v123);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v140);
  return (unsigned int)v4;
}
