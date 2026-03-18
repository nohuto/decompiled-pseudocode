/*
 * XREFs of ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18002A8C0 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180058488 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058B30 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z @ 0x180059AC0 (-AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z.c)
 *     ?AddRectToDirtyRegion@CPreComputeSubTreeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180059D08 (-AddRectToDirtyRegion@CPreComputeSubTreeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x18005AB18 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x18005AB30 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B3C0 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18008D530 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x18021CF30 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

__int64 __fastcall CTreeDirty::Add(
        CTreeDirty *this,
        unsigned __int64 a2,
        unsigned __int8 a3,
        const struct D2D_RECT_F *a4)
{
  unsigned int v4; // r14d
  int v5; // r12d
  float left; // xmm3_4
  float right; // xmm1_4
  float bottom; // xmm2_4
  float top; // xmm4_4
  __int64 v13; // r15
  __m128i v14; // xmm1
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm8_4
  float v21; // xmm2_4
  __int32 v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  char *v26; // rsi
  unsigned int v27; // r8d
  _QWORD *v28; // rbx
  __m128 v29; // xmm0
  __int64 v30; // rdx
  unsigned int *v31; // rbx
  char *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // eax
  _QWORD *v36; // rax
  CDirtyRegionAnnotation *v37; // r14
  _QWORD *v38; // rax
  char *v39; // rcx
  __int64 v40; // r8
  float v41; // xmm0_4
  float *v42; // r10
  unsigned int v43; // r9d
  unsigned int v44; // ecx
  unsigned int v45; // esi
  unsigned int i; // edx
  unsigned int v47; // eax
  __int64 v48; // r11
  _QWORD *v49; // r9
  float *v50; // rcx
  __m128 v51; // xmm1
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm2_4
  _BOOL8 v55; // rdx
  float v56; // xmm4_4
  BOOL v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // r9d
  __int64 v60; // r10
  __int64 v61; // rdx
  int v62; // r8d
  __int64 v63; // rax
  unsigned int v64; // xmm0_4
  unsigned int v65; // r10d
  __int64 v66; // r8
  unsigned int v67; // xmm0_4
  unsigned int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rcx
  unsigned int j; // r8d
  unsigned int v72; // eax
  _QWORD *v73; // r9
  const __m128i *v74; // rcx
  __int64 v75; // r8
  int v76; // xmm4_4
  unsigned int v77; // ebx
  __int64 v78; // rdx
  unsigned int v79; // ecx
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned int v82; // xmm0_4
  int v83; // [rsp+28h] [rbp-E0h]
  int v84; // [rsp+28h] [rbp-E0h]
  __m128 X_8; // [rsp+38h] [rbp-D0h] BYREF
  float v86; // [rsp+48h] [rbp-C0h] BYREF
  int v87; // [rsp+50h] [rbp-B8h] BYREF
  float v88; // [rsp+58h] [rbp-B0h] BYREF
  int v89; // [rsp+60h] [rbp-A8h] BYREF
  float v90; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+78h] [rbp-90h] BYREF
  __m128 *p_X_8; // [rsp+88h] [rbp-80h]
  __int64 v93; // [rsp+90h] [rbp-78h]
  int *v94; // [rsp+98h] [rbp-70h]
  __int64 v95; // [rsp+A0h] [rbp-68h]
  float *v96; // [rsp+A8h] [rbp-60h]
  __int64 v97; // [rsp+B0h] [rbp-58h]
  int *v98; // [rsp+B8h] [rbp-50h]
  __int64 v99; // [rsp+C0h] [rbp-48h]
  float *v100; // [rsp+C8h] [rbp-40h]
  __int64 v101; // [rsp+D0h] [rbp-38h]
  float *v102; // [rsp+D8h] [rbp-30h]
  __int64 v103; // [rsp+E0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v4 = 0;
  v5 = a3;
  if ( *((_BYTE *)this + 2324) )
    return 0LL;
  left = a4->left;
  right = a4->right;
  if ( right <= a4->left || (bottom = a4->bottom, top = a4->top, bottom <= top) )
  {
    if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(a4) )
      return 0LL;
    CTreeDirty::SetFullDirty(this);
    v78 = 235LL;
    v77 = -2003304438;
  }
  else
  {
    if ( left <= -3.4028235e38 && right >= 3.4028235e38 || top <= -3.4028235e38 && bottom >= 3.4028235e38 )
    {
      CTreeDirty::SetFullDirty(this);
      return 0LL;
    }
    v13 = 32LL;
    LOBYTE(v86) = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits) & 0x20;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 && !IsEmpty(a4) )
    {
      v86 = bottom;
      p_X_8 = &X_8;
      v90 = right;
      v94 = &v87;
      v89 = v76;
      v96 = &v88;
      v88 = left;
      v98 = &v89;
      v100 = &v90;
      v102 = &v86;
      v87 = v5;
      X_8.m128_u64[0] = a2;
      v93 = 8LL;
      v95 = 4LL;
      v97 = 4LL;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRTY_ADDRECT,
        v75,
        7u,
        &v91);
    }
    v14 = _mm_loadu_si128((const __m128i *)a4);
    v15 = *((float *)this + 577);
    X_8 = (__m128)v14;
    if ( v15 > *(float *)v14.m128i_i32 )
      *(float *)v14.m128i_i32 = v15;
    v16 = X_8.m128_f32[1];
    v17 = X_8.m128_f32[1];
    if ( *((float *)this + 578) > X_8.m128_f32[1] )
    {
      v16 = *((float *)this + 578);
      v17 = v16;
    }
    v18 = X_8.m128_f32[2];
    v19 = X_8.m128_f32[2];
    if ( X_8.m128_f32[2] > *((float *)this + 579) )
    {
      v18 = *((float *)this + 579);
      v19 = v18;
    }
    v20 = X_8.m128_f32[3];
    v21 = X_8.m128_f32[3];
    if ( X_8.m128_f32[3] > *((float *)this + 580) )
    {
      v20 = *((float *)this + 580);
      v21 = v20;
    }
    if ( v19 <= *(float *)v14.m128i_i32 || v21 <= v17 )
    {
      v20 = 0.0;
      v18 = 0.0;
      v16 = 0.0;
      v14.m128i_i32[0] = 0;
      v19 = 0.0;
      v21 = 0.0;
    }
    if ( v19 <= *(float *)v14.m128i_i32 || v21 <= v16 )
      return 0LL;
    COERCE_FLOAT(v22 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(v14.m128i_i32[0] & v22) < 8388608.0 )
    {
      v23 = floorf_0(*(float *)v14.m128i_i32);
      v22 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      *(float *)v14.m128i_i32 = (float)(int)v23;
    }
    X_8.m128_i32[0] = v14.m128i_i32[0];
    if ( COERCE_FLOAT(LODWORD(v16) & v22) < 8388608.0 )
    {
      v24 = floorf_0(v16);
      v22 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v16 = (float)(int)v24;
    }
    X_8.m128_f32[1] = v16;
    if ( COERCE_FLOAT(LODWORD(v18) & v22) < 8388608.0 )
    {
      v25 = ceilf_0(v18);
      v22 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v18 = (float)(int)v25;
    }
    X_8.m128_f32[2] = v18;
    if ( COERCE_FLOAT(LODWORD(v20) & v22) < 8388608.0 )
      v20 = (float)(int)ceilf_0(v20);
    v26 = (char *)this + 600;
    X_8.m128_f32[3] = v20;
    v27 = *((_DWORD *)this + 542);
    if ( v27 != 32 )
    {
      v28 = *(_QWORD **)v26;
      goto LABEL_29;
    }
    v36 = MIDL_user_allocate(0x610uLL);
    v28 = v36;
    if ( v36 )
    {
      memset_0(v36, 0, 0x610uLL);
      v37 = (CDirtyRegionAnnotation *)(v28 + 2);
      do
      {
        CDirtyRegionAnnotation::CDirtyRegionAnnotation(v37);
        v37 = (CDirtyRegionAnnotation *)((char *)v37 + 48);
        --v13;
      }
      while ( v13 );
      v38 = *(_QWORD **)v26;
      if ( *(char **)(*(_QWORD *)v26 + 8LL) != v26 )
        goto LABEL_99;
      *v28 = v38;
      v4 = 0;
      v28[1] = v26;
      v27 = 0;
      v38[1] = v28;
      *(_QWORD *)v26 = v28;
LABEL_29:
      v29 = X_8;
      v30 = (__int64)&v28[6 * v27 + 2];
      *((_DWORD *)this + 542) = v27 + 1;
      *(_QWORD *)(v30 + 16) = a2;
      *(_BYTE *)(v30 + 40) = v5;
      *(__m128 *)(v30 + 24) = v29;
      *(_QWORD *)(v30 + 8) = 0LL;
      *(_QWORD *)v30 = 0LL;
      v31 = (unsigned int *)((char *)this + 16);
      v32 = (char *)this + 16 * *((unsigned int *)this + 4) + 456;
      v33 = *(_QWORD *)v32;
      if ( *(char **)(*(_QWORD *)v32 + 8LL) == v32 )
      {
        *(_QWORD *)v30 = v33;
        *(_QWORD *)(v30 + 8) = v32;
        *(_QWORD *)(v33 + 8) = v30;
        *(_QWORD *)v32 = v30;
        *(__m128 *)&v31[4 * *v31 + 1] = v29;
        v34 = *v31 + 1;
        *v31 = v34;
        if ( v34 <= 8 )
        {
          *((_BYTE *)this + 452) = 1;
          return 0LL;
        }
        if ( v34 > 9 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x3E,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
            (const char *)a4);
        v39 = (char *)this + 16;
        if ( *((_BYTE *)this + 452) )
          CRectangleCollection<8>::EnsureWeights(v39);
        else
          CRectangleCollection<8>::UpdateOverhead(v39, 8LL, 0xFFFFFFFFLL);
        CRectangleCollection<8>::EnsureWeights((char *)this + 16);
        v41 = *((float *)this + 41);
        v42 = (float *)((char *)this + 172);
        v43 = 0;
        v44 = 1;
        v45 = 1;
        for ( i = 1; i < 0x24; ++i )
        {
          if ( v41 == 0.0 )
            break;
          v47 = v43 + 1;
          v40 = v44 + 1;
          if ( v43 + 1 != v44 )
            v40 = v44;
          v43 = 0;
          if ( v47 != v44 )
            v43 = v47;
          if ( v41 > *v42 )
          {
            v41 = *v42;
            v4 = v43;
            v45 = v40;
          }
          v42 += 2;
          v44 = v40;
        }
        v48 = 16LL * v45;
        v49 = (_QWORD *)((char *)this + v48 + 456);
        if ( (_QWORD *)*v49 != v49 )
        {
          v40 = 2 * (v4 + 29LL);
          **((_QWORD **)this + 2 * v4 + 58) = *v49;
          *(_QWORD *)(*v49 + 8LL) = *((_QWORD *)this + 2 * v4 + 58);
          **((_QWORD **)this + 2 * v45 + 58) = (char *)this + 16 * v4 + 456;
          *((_QWORD *)this + 2 * v4 + 58) = *((_QWORD *)this + 2 * v45 + 58);
          v49[1] = v49;
          *v49 = v49;
        }
        v50 = (float *)((char *)this + v48 + 20);
        v51 = (__m128)_mm_loadu_si128((const __m128i *)&v31[4 * v4 + 1]);
        v52 = _mm_shuffle_ps(v51, v51, 170).m128_f32[0];
        X_8 = v51;
        LODWORD(v53) = _mm_shuffle_ps(v51, v51, 255).m128_u32[0];
        LODWORD(v54) = _mm_shuffle_ps(v51, v51, 85).m128_u32[0];
        v55 = v52 <= v51.m128_f32[0] || v53 <= v54;
        v56 = v50[2];
        v57 = v56 <= *v50 || v50[3] <= v50[1];
        if ( v55 )
        {
          if ( !v57
            && (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(
                                  v50,
                                  v55,
                                  v40) )
          {
            v51 = (__m128)_mm_loadu_si128(v74);
LABEL_69:
            *(__m128 *)&v31[4 * v4 + 1] = v51;
            CRectangleCollection<8>::UpdateOverhead((char *)this + 16, v4, v45);
            v58 = *v31 - 1;
            *v31 = v58;
            if ( v45 < v58 )
            {
              *(_OWORD *)&v31[4 * v45 + 1] = *(_OWORD *)&v31[4 * v58 + 1];
              v59 = *v31;
              if ( v45 )
              {
                v60 = v45;
                v61 = (v45 * (v45 - 1)) >> 1;
                v62 = ((v59 * (v59 - 1)) >> 1) - v61;
                do
                {
                  v63 = (unsigned int)(v62 + v61);
                  v64 = v31[2 * v63 + 38];
                  v31[2 * v61 + 37] = v31[2 * v63 + 37];
                  v31[2 * v61 + 38] = v64;
                  v61 = (unsigned int)(v61 + 1);
                  --v60;
                }
                while ( v60 );
              }
              v65 = v45 + 1;
              if ( v45 + 1 < v59 )
              {
                v66 = v65 + ((v59 * (v59 - 1)) >> 1);
                do
                {
                  v67 = v31[2 * v66 + 38];
                  v68 = v31[2 * v66 + 37];
                  v66 = (unsigned int)(v66 + 1);
                  v69 = v65 * (v65 - 1);
                  ++v65;
                  v70 = v45 + (v69 >> 1);
                  v31[2 * v70 + 37] = v68;
                  v31[2 * v70 + 38] = v67;
                }
                while ( v65 < v59 );
              }
              for ( j = v59 + 1; ; ++j )
              {
                v72 = *v31;
                if ( j >= *v31 )
                  break;
                v79 = (j * (j - 1)) >> 1;
                v80 = v79 + v59;
                v81 = v45 + v79;
                v82 = v31[2 * v80 + 38];
                v31[2 * v81 + 37] = v31[2 * v80 + 37];
                v31[2 * v81 + 38] = v82;
              }
              v73 = (_QWORD *)((char *)this + 16 * v72 + 456);
              if ( (_QWORD *)*v73 != v73 )
              {
                **((_QWORD **)this + 2 * v45 + 58) = *v73;
                *(_QWORD *)(*v73 + 8LL) = *((_QWORD *)this + 2 * v45 + 58);
                **((_QWORD **)this + 2 * v72 + 58) = (char *)this + 16 * v45 + 456;
                *((_QWORD *)this + 2 * v45 + 58) = *((_QWORD *)this + 2 * v72 + 58);
                v73[1] = v73;
                *v73 = v73;
              }
            }
            return 0LL;
          }
          X_8 = 0uLL;
        }
        else
        {
          if ( v57 )
            goto LABEL_69;
          if ( v51.m128_f32[0] > *v50 )
          {
            X_8.m128_f32[0] = *v50;
            v51 = X_8;
          }
          if ( v54 > v50[1] )
          {
            X_8.m128_f32[1] = v50[1];
            v51 = X_8;
          }
          if ( v56 > v52 )
          {
            X_8.m128_f32[2] = v56;
            v51 = X_8;
          }
          if ( v50[3] <= v53 )
            goto LABEL_69;
          X_8.m128_f32[3] = v50[3];
        }
        v51 = X_8;
        goto LABEL_69;
      }
LABEL_99:
      __fastfail(3u);
    }
    v77 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
      (const char *)0x8007000ELL,
      v84);
    v78 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v78,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
    (const char *)v77,
    v83);
  return v77;
}
