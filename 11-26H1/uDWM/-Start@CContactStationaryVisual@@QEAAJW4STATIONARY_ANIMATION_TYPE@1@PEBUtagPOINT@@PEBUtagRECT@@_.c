/*
 * XREFs of ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800036B0
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800032EC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180004A98 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180008230 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180013600 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CContactStationaryVisual::Start(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT *a3,
        _DWORD *a4,
        char a5)
{
  __int64 v6; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  struct CBitmapSource ***v11; // r15
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  int v14; // ebp
  float v15; // xmm0_4
  CTimelineBase *v16; // rcx
  CTimelineBase *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r9
  CContactManager *v23; // rcx
  int v24; // r9d
  struct tagPOINT v25; // r8
  int v26; // eax
  int v27; // edx
  int BoundedContactWidth; // eax
  struct tagSIZE *v29; // r14
  int v30; // eax
  _DWORD *v31; // rbx
  int v32; // ebx
  struct CBitmapSource **v33; // rdx
  double v34; // xmm1_8
  unsigned int v35; // eax
  _QWORD *v37; // rax
  float v38; // xmm1_4
  int v39; // eax
  __m128i v40; // xmm0
  int v41; // ecx

  *(_DWORD *)(a1 + 344) = a2;
  v6 = 44LL * (int)a2;
  v9 = *(_OWORD *)((char *)&csadAnimData + v6 + 16);
  *(_OWORD *)(a1 + 236) = *(_OWORD *)((char *)&csadAnimData + v6);
  v10 = *(_QWORD *)((char *)&csadAnimData + v6 + 32);
  LODWORD(v6) = *(_DWORD *)((char *)&csadAnimData + v6 + 40);
  *(_OWORD *)(a1 + 252) = v9;
  *(_QWORD *)(a1 + 268) = v10;
  *(_DWORD *)(a1 + 276) = v6;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(&csadAnimData, &UdwmContactStationaryVisual_Start, a2);
  if ( *(_QWORD *)(a1 + 236) == 0x200000001LL
    && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
  {
    *(_DWORD *)(a1 + 240) = 7;
    *(_DWORD *)(a1 + 248) = 1;
  }
  v11 = (struct CBitmapSource ***)(a1 + 312);
  Theme = (void *)CDesktopManager::GetTheme();
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 *(_DWORD *)(a1 + 240),
                                 *(_DWORD *)(a1 + 248),
                                 0LL,
                                 a1 + 312);
  v14 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v24 = BitmapsFromAtlasImageStrip;
    v35 = 99;
    goto LABEL_31;
  }
  if ( a5 )
    v15 = FLOAT_0_050000001;
  else
    v15 = 0.0;
  v16 = *(CTimelineBase **)(a1 + 280);
  *(float *)(a1 + 348) = v15;
  if ( v16 )
  {
    CTimelineBase::Release(v16);
    *(_QWORD *)(a1 + 280) = 0LL;
  }
  v17 = *(CTimelineBase **)(a1 + 288);
  if ( v17 )
  {
    CTimelineBase::Release(v17);
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  v18 = CTimeline<float>::operator new();
  if ( a5 )
  {
    if ( v18 )
    {
      CTimelineBase::CTimelineBase(v18, v19, v20, v18, 0);
      *v22 = &CTimeline<float>::`vftable';
      *(_QWORD *)(a1 + 288) = v22;
      if ( v22 )
        goto LABEL_14;
    }
    else
    {
      *(_QWORD *)(a1 + 288) = 0LL;
    }
    v24 = -2147024882;
    v35 = 117;
    v14 = -2147024882;
    goto LABEL_31;
  }
  if ( !v18 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
LABEL_41:
    v24 = -2147024882;
    v35 = 122;
    v14 = -2147024882;
    goto LABEL_31;
  }
  v37 = CTimeline<float>::CTimeline<float>(v18, v19, v20, v21, *(_DWORD *)(a1 + 272));
  *(_QWORD *)(a1 + 280) = v37;
  if ( !v37 )
    goto LABEL_41;
LABEL_14:
  v14 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v24 = v14;
  if ( v14 < 0 )
  {
    v35 = 125;
    goto LABEL_31;
  }
  v25 = *a3;
  v26 = *(_DWORD *)(a1 + 276);
  *(struct tagPOINT *)(a1 + 224) = *a3;
  if ( (v26 & 8) != 0 )
  {
    v29 = (struct tagSIZE *)(a1 + 304);
    v38 = *(float *)(a1 + 264);
    v31 = (_DWORD *)(a1 + 308);
    *(_QWORD *)(a1 + 304) = *((_QWORD *)**v11 + 16);
    v39 = (int)(float)((float)*(int *)(a1 + 304) * v38);
    v40 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 308));
    *(_DWORD *)(a1 + 304) = v39;
    v41 = (int)(float)(_mm_cvtepi32_ps(v40).m128_f32[0] * v38);
    *(_DWORD *)(a1 + 308) = v41;
    if ( v39 < 1 )
      v29->cx = 1;
    if ( v41 < 1 )
      *v31 = 1;
    goto LABEL_23;
  }
  if ( (v26 & 4) != 0 )
  {
    if ( a4 )
    {
      v27 = a4[3] - a4[1];
      if ( a4[2] - *a4 <= v27 )
        v27 = a4[2] - *a4;
      BoundedContactWidth = CContactManager::GetBoundedContactWidth(v23, v27, v25);
      *(_DWORD *)(a1 + 232) = BoundedContactWidth;
      v29 = (struct tagSIZE *)(a1 + 304);
      v30 = (int)(float)((float)BoundedContactWidth * *(float *)(a1 + 264));
      *(_DWORD *)(a1 + 304) = v30;
      if ( v30 < 1 )
      {
        v29->cx = 1;
        v30 = 1;
      }
      v31 = (_DWORD *)(a1 + 308);
      *(_DWORD *)(a1 + 308) = v30;
      goto LABEL_23;
    }
    v14 = -2147024809;
    v35 = 149;
    v24 = -2147024809;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v35, 0LL);
    CContactStationaryVisual::Stop((CContactStationaryVisual *)a1);
    return (unsigned int)v14;
  }
  v29 = (struct tagSIZE *)(a1 + 304);
  v31 = (_DWORD *)(a1 + 308);
  *(_QWORD *)(a1 + 304) = *((_QWORD *)**v11 + 16);
LABEL_23:
  CVisual::SetSize(*(CVisual **)(a1 + 296), v29);
  v32 = a3->y - *v31 / 2;
  CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 296), a3->x - v29->cx / 2);
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 296), v32);
  if ( (*(_BYTE *)(a1 + 276) & 1) != 0 )
    v33 = *v11;
  else
    v33 = &(*v11)[*(unsigned int *)(a1 + 252)];
  CImage::SetBitmapSource(*(CImage **)(a1 + 296), *v33);
  if ( a5 )
  {
    v34 = 0.0;
  }
  else if ( (*(_BYTE *)(a1 + 276) & 2) != 0 )
  {
    v34 = *(float *)(a1 + 256);
  }
  else
  {
    v34 = DOUBLE_1_0;
  }
  CVisual::SetOpacity((CVisual *)a1, v34);
  return (unsigned int)v14;
}
