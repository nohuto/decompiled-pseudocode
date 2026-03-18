/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180087C70 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180019A30 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?CalcNodeWorldBounds@COcclusionContext@@AEBA_NPEBVCVisual@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028F30 (-CalcNodeWorldBounds@COcclusionContext@@AEBA_NPEBVCVisual@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180033150 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18008B1F0 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?RequiresExternalLayer@CVisual@@QEBA_NXZ @ 0x1801227E0 (-RequiresExternalLayer@CVisual@@QEBA_NXZ.c)
 *     ?PopLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180134B50 (-PopLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z @ 0x180167300 (-IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v4; // r14
  unsigned int v5; // r13d
  __int64 v6; // r12
  struct COcclusionInfo *OcclusionInfo; // rax
  int v8; // ebp
  struct COcclusionInfo *v9; // r15
  CBackdropVisualImage *v10; // rcx
  bool IsVisualInAncestorList; // al
  struct CBackdropVisualImage *v12; // rbx
  bool v13; // di
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // r9d
  char v18; // di
  int v19; // eax
  __m128 v20; // xmm12
  float v21; // xmm6_4
  float v22; // xmm15_4
  float v23; // xmm14_4
  float v24; // xmm13_4
  char v25; // al
  const struct CVisualTree *v26; // rbx
  int v27; // r15d
  float **v28; // rbx
  float **v29; // rdi
  float v30; // xmm12_4
  float *v31; // rbp
  __m128 v32; // xmm1
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm8_4
  __m128 v36; // xmm1
  float v37; // xmm3_4
  float v38; // xmm7_4
  __m128 v39; // xmm1
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42; // xmm10_4
  float v43; // xmm9_4
  float v44; // xmm11_4
  __m128 v45; // xmm1
  float v46; // xmm5_4
  int v47; // ecx
  int v48; // eax
  float v49; // xmm1_4
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  _DWORD *v58; // rcx
  __int64 result; // rax
  CVisual *v60; // rcx
  struct CTreeData *v61; // rax
  bool v62; // al
  struct CTreeData *TreeData; // [rsp+30h] [rbp-128h]
  __m128 v64; // [rsp+38h] [rbp-120h] BYREF
  __m128 v65; // [rsp+50h] [rbp-108h]
  __m128 v66; // [rsp+60h] [rbp-F8h]
  int v67; // [rsp+160h] [rbp+8h]
  struct COcclusionInfo *v70; // [rsp+178h] [rbp+20h]

  v4 = 0LL;
  v5 = 0;
  v6 = *((_QWORD *)this + 7);
  TreeData = CVisual::FindTreeData((CVisual *)v6, a2);
  OcclusionInfo = CTreeData::GetOcclusionInfo(TreeData, *((_DWORD *)this + 274), 0);
  v8 = *((_DWORD *)this + 318);
  v9 = OcclusionInfo;
  v70 = OcclusionInfo;
  v67 = v8;
  (*(void (__fastcall **)(struct COcclusionInfo *, _QWORD))(*(_QWORD *)OcclusionInfo + 8LL))(
    OcclusionInfo,
    *((unsigned int *)this + 317));
  v10 = (CBackdropVisualImage *)*((_QWORD *)this + 139);
  if ( !v10 )
    goto LABEL_6;
  IsVisualInAncestorList = CBackdropVisualImage::IsVisualInAncestorList(
                             v10,
                             (const struct CVisual *)v6,
                             *((const struct CVisualTreePath **)this + 1));
  v12 = (struct CBackdropVisualImage *)*((_QWORD *)this + 139);
  v13 = IsVisualInAncestorList;
  if ( CVisual::GetBackdropVisualImage((CVisual *)v6, *((const struct CVisualTreePath **)this + 1)) != v12 )
  {
    if ( *((_BYTE *)this + 1131) )
    {
LABEL_6:
      v14 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 272LL))(v6) )
      {
        if ( !v8 )
        {
          v18 = *((_BYTE *)this + 1126);
          *((_QWORD *)this + 138) = v6;
          *((_BYTE *)this + 1125) = *((_BYTE *)v9 + 28);
          v19 = (*(__int64 (__fastcall **)(__int64, COcclusionContext *, struct COcclusionInfo *))(*(_QWORD *)v6 + 248LL))(
                  v6,
                  this,
                  v9);
          v5 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x2E5u, 0LL);
            *((_BYTE *)this + 1125) = 1;
            *((_QWORD *)this + 138) = 0LL;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x22Bu, 0LL);
            v26 = a2;
            goto LABEL_115;
          }
          if ( *((_BYTE *)this + 1130) )
          {
            *((_DWORD *)this + 317) += 2;
            *((_BYTE *)this + 1130) = 0;
          }
          *((_BYTE *)this + 1125) = 1;
          *((_QWORD *)this + 138) = 0LL;
          if ( v18 && !*((_BYTE *)this + 1126) )
            v14 = *((_BYTE *)this + 1127);
        }
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(
                                (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
                                v15,
                                v16,
                                v17) )
          *((_BYTE *)this + 1126) = 0;
        if ( v14 )
          goto LABEL_88;
      }
      if ( v8 && (*((_DWORD *)this + 318) != 1 || (*(_DWORD *)(v6 + 96) & 0x100) == 0) )
      {
        v26 = a2;
LABEL_93:
        if ( *((_BYTE *)v9 + 26) )
        {
          v52 = *((_DWORD *)this + 330);
          if ( v52 )
            *((_DWORD *)this + 330) = v52 - 1;
          v53 = *((_DWORD *)this + 32);
          if ( v53 )
            *((_DWORD *)this + 32) = v53 - 1;
          v54 = *((_DWORD *)this + 44);
          if ( v54 )
            *((_DWORD *)this + 44) = v54 - 1;
          v55 = *((_DWORD *)this + 38);
          if ( v55 )
            *((_DWORD *)this + 38) = v55 - 1;
        }
        if ( *((_BYTE *)v9 + 25) )
        {
          v56 = *((_DWORD *)this + 8);
          if ( v56 )
            *((_DWORD *)this + 8) = v56 - 1;
        }
        if ( *((_BYTE *)v9 + 24) )
        {
          v57 = *((_DWORD *)this + 324);
          if ( v57 )
            *((_DWORD *)this + 324) = v57 - 1;
        }
        if ( (*(_BYTE *)(v6 + 102) & 2) != 0 )
          --*((_DWORD *)this + 320);
        if ( CVisual::RequiresExternalLayer((CVisual *)v6) )
          --*((_DWORD *)this + 319);
        goto LABEL_113;
      }
      v20 = 0LL;
      v66 = 0LL;
      v64 = 0LL;
      if ( *((_BYTE *)v9 + 24) )
      {
        if ( *((_DWORD *)this + 324) )
        {
          v20 = *(__m128 *)(*((_QWORD *)this + 161) + 16LL * (unsigned int)(*((_DWORD *)this + 324) - 1));
          v21 = v20.m128_f32[0];
          v22 = _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
          v65 = v20;
          v66 = v20;
          LODWORD(v23) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
          LODWORD(v24) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
          if ( v22 > v20.m128_f32[0] && v23 > v24 )
          {
            v25 = 1;
            goto LABEL_29;
          }
        }
        else
        {
          v21 = 0.0;
          LODWORD(v23) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 255).m128_u32[0];
          v65 = 0LL;
          LODWORD(v22) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
          LODWORD(v24) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
        }
        v25 = 0;
      }
      else
      {
        v25 = COcclusionContext::CalcNodeWorldBounds((__m128 **)this, v6, &v64);
        v20 = v64;
        v21 = v64.m128_f32[0];
        v23 = v64.m128_f32[3];
        v22 = v64.m128_f32[2];
        v24 = v64.m128_f32[1];
        v66 = v64;
        v65 = (__m128)v64.m128_u32[0];
      }
LABEL_29:
      if ( v25 )
      {
        if ( *((_DWORD *)this + 320) )
          *((_BYTE *)this + 1128) = 1;
        else
          *((_BYTE *)this + 1129) = 1;
        v27 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 288LL))(v6) )
        {
          v28 = (float **)*((_QWORD *)this + 170);
          v29 = (float **)*((_QWORD *)this + 171);
          v30 = v65.m128_f32[0];
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v28 == v29 )
              {
                v20 = v66;
                v8 = v67;
                v21 = v65.m128_f32[0];
                goto LABEL_68;
              }
              v31 = *v28;
              v64 = *(__m128 *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*v28 + 7) + 256LL))(*((_QWORD *)*v28 + 7))
                              + 8);
              v32 = v64;
              v33 = v64.m128_f32[0];
              if ( v30 > v64.m128_f32[0] )
              {
                v33 = v30;
                v32.m128_f32[0] = v30;
                v64 = v32;
              }
              v34 = _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
              v35 = v34;
              if ( v24 > v34 )
              {
                v34 = v24;
                v35 = v24;
                v36 = _mm_shuffle_ps(v64, v64, 225);
                v36.m128_f32[0] = v24;
                v32 = _mm_shuffle_ps(v36, v36, 225);
                v64 = v32;
              }
              v37 = _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
              v38 = v37;
              if ( v37 > v22 )
              {
                v37 = v22;
                v38 = v22;
                v39 = _mm_shuffle_ps(v64, v64, 210);
                v39.m128_f32[0] = v22;
                v32 = _mm_shuffle_ps(v39, v39, 201);
                v64 = v32;
              }
              v40 = _mm_shuffle_ps(v32, v32, 255).m128_f32[0];
              v41 = v40;
              v42 = v40;
              v43 = v40;
              v44 = v40;
              if ( v40 > v23 )
              {
                v40 = v23;
                v41 = v23;
                v45 = _mm_shuffle_ps(v64, v64, 147);
                v42 = v23;
                v45.m128_f32[0] = v23;
                v43 = v23;
                v32 = _mm_shuffle_ps(v45, v45, 57);
                v44 = v23;
                v64 = v32;
              }
              if ( v38 > v33 && v41 > v35 )
                break;
LABEL_66:
              ++v28;
            }
            v46 = v31[4790];
            if ( v31[4792] <= v46 || (v43 = v44, v31[4793] <= v31[4791]) )
            {
              v47 = 1;
              v42 = v43;
            }
            else
            {
              v47 = 0;
            }
            if ( v37 <= v33 || (v48 = 0, v42 <= v34) )
              v48 = 1;
            if ( !v47 )
            {
              if ( !v48 )
              {
                if ( v46 > v33 )
                  v31[4790] = v33;
                if ( v31[4791] > v34 )
                  v31[4791] = v34;
                if ( v37 > v31[4792] )
                  v31[4792] = v37;
                if ( v40 > v31[4793] )
                  v31[4793] = v40;
              }
              goto LABEL_66;
            }
            if ( v48 )
            {
              *((_QWORD *)v31 + 2396) = 0LL;
              ++v28;
              *((_QWORD *)v31 + 2395) = 0LL;
            }
            else
            {
              *(__m128 *)(v31 + 4790) = v32;
              ++v28;
            }
          }
        }
LABEL_68:
        v49 = *((float *)this + 142);
        if ( *((float *)this + 144) <= v49 || (v50 = 0, *((float *)this + 145) <= *((float *)this + 143)) )
          v50 = 1;
        if ( v22 > v21 && v23 > v24 )
          v27 = 0;
        if ( v50 )
        {
          if ( v27 )
          {
            *((_QWORD *)this + 72) = 0LL;
            *((_QWORD *)this + 71) = 0LL;
          }
          else
          {
            *(__m128 *)((char *)this + 568) = v20;
          }
        }
        else if ( !v27 )
        {
          if ( v49 > v21 )
            *((float *)this + 142) = v21;
          if ( *((float *)this + 143) > v24 )
            *((float *)this + 143) = v24;
          if ( v22 > *((float *)this + 144) )
            *((float *)this + 144) = v22;
          if ( v23 > *((float *)this + 145) )
            *((float *)this + 145) = v23;
        }
        v9 = v70;
      }
LABEL_88:
      v26 = a2;
      if ( !v8 )
      {
        CLightStack::PopLightsFromVisual((COcclusionContext *)((char *)this + 192), (const struct CVisual *)v6, a2);
        if ( *((_BYTE *)v9 + 27) )
        {
          v51 = *((_DWORD *)this + 336);
          if ( v51 )
            *((_DWORD *)this + 336) = v51 - 1;
        }
      }
      goto LABEL_93;
    }
    if ( v13 )
    {
      *((_BYTE *)this + 1131) = 1;
      goto LABEL_6;
    }
  }
  v26 = a2;
LABEL_113:
  if ( v8 )
    --*((_DWORD *)this + 318);
LABEL_115:
  v58 = (_DWORD *)*((_QWORD *)this + 53);
  *((_DWORD *)this + 317) += 2;
  if ( *v58 )
    goto LABEL_116;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 110);
  if ( *((_QWORD *)TreeData + 26) == v4 )
  {
LABEL_116:
    result = v5;
    *a3 = 1;
  }
  else
  {
    v60 = (CVisual *)*((_QWORD *)this + 8);
    v62 = 0;
    if ( v60 )
    {
      v61 = CVisual::FindTreeData(v60, v26);
      if ( v61 )
      {
        if ( *((_QWORD *)v61 + 26) == v4 )
          v62 = 1;
      }
    }
    *a3 = v62;
    return v5;
  }
  return result;
}
