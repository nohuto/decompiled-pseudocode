/*
 * XREFs of ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180093928
 * Callers:
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800AAE24 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18002D634 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180033198 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180093D80 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180097EBC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800AB2B4 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CFlickVisual::Start(__int64 a1, POINT *a2, __int64 a3, int a4)
{
  int v4; // r15d
  CTimelineBase *v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  int v13; // eax
  int BitmapFromAtlas; // esi
  int v15; // esi
  __int64 v16; // rcx
  int *v17; // rax
  unsigned int v18; // eax
  CBaseObject **v19; // r15
  void *Theme; // rax
  int v21; // r9d
  _DWORD *v22; // r13
  LONG left; // r12d
  LONG top; // r15d
  HMONITOR v25; // rax
  int v26; // ecx
  int v27; // eax
  CDesktopManager *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  unsigned int nNumerator; // [rsp+30h] [rbp-D0h]
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h]
  _DWORD v36[43]; // [rsp+64h] [rbp-9Ch] BYREF

  *(POINT *)(a1 + 264) = *a2;
  v4 = a3;
  *(_DWORD *)(a1 + 260) = a3;
  *(_DWORD *)(a1 + 256) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(a1, &UdwmFlickVisual_Start, a3);
  v7 = *(CTimelineBase **)(a1 + 312);
  if ( v7 )
    CTimelineBase::Release(v7);
  v8 = DefaultHeap::AllocClear(0x78uLL);
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 312) = 0LL;
    goto LABEL_33;
  }
  v12 = CTimeline<float>::CTimeline<float>((__int64)v8, v9, v10, v11, 0);
  *(_QWORD *)(a1 + 312) = v12;
  if ( !v12 )
  {
LABEL_33:
    BitmapFromAtlas = -2147024882;
    v18 = 64;
    goto LABEL_34;
  }
  v13 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  BitmapFromAtlas = v13;
  if ( v13 < 0 )
  {
    v21 = v13;
    v18 = 66;
    goto LABEL_35;
  }
  v35 = 0;
  v36[0] = 6;
  v15 = 0;
  v36[11] = 6;
  v36[1] = 1;
  v36[3] = 2;
  v36[2] = 7;
  v36[13] = 7;
  v36[6] = 9;
  v36[17] = 9;
  v36[10] = 11;
  v36[14] = 13;
  v36[25] = 13;
  v36[21] = 11;
  v36[8] = 10;
  v36[19] = 10;
  v36[18] = 15;
  v36[29] = 15;
  v16 = 21LL;
  v36[26] = 19;
  v36[37] = 19;
  v17 = v36;
  v36[30] = 21;
  v36[32] = 21;
  v36[38] = 21;
  v36[4] = 8;
  v36[5] = 3;
  v36[7] = 4;
  v36[9] = 5;
  v36[12] = 12;
  v36[15] = 8;
  v36[16] = 14;
  v36[20] = 16;
  v36[22] = 17;
  v36[23] = 12;
  v36[24] = 18;
  v36[27] = 14;
  v36[28] = 20;
  v36[31] = 16;
  v36[33] = 17;
  v36[34] = 22;
  v36[35] = 18;
  v36[36] = 23;
  v36[39] = 20;
  v36[40] = 24;
  do
  {
    if ( *(v17 - 1) == v4 )
      v15 = *v17;
    v17 += 2;
    --v16;
  }
  while ( v16 );
  if ( !v15 )
  {
    BitmapFromAtlas = -2147467259;
    v18 = 110;
LABEL_34:
    v21 = BitmapFromAtlas;
    goto LABEL_35;
  }
  v19 = (CBaseObject **)(a1 + 280);
  if ( *(_QWORD *)(a1 + 280) )
    CBaseObject::Release(*v19);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v15, 0LL, (struct CBitmapSource **)(a1 + 280));
  v21 = BitmapFromAtlas;
  if ( BitmapFromAtlas < 0 )
  {
    v18 = 117;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, v18, 0LL);
    CFlickVisual::Stop((CFlickVisual *)a1);
    return (unsigned int)BitmapFromAtlas;
  }
  v22 = (_DWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 296) = *((_QWORD *)*v19 + 3);
  nNumerator = CDesktopManager::MonitorDpiFromPoint(*a2);
  if ( nNumerator < 0x90 )
  {
    *v22 = 32;
    *(_DWORD *)(a1 + 300) = 32;
  }
  CVisual::SetSize(*(CVisual **)(a1 + 288), (const struct tagSIZE *)(a1 + 296));
  left = *(_DWORD *)(a1 + 264) - *v22 / 2;
  top = *(_DWORD *)(a1 + 268) - *(_DWORD *)(a1 + 300) / 2;
  v25 = MonitorFromPoint(*(POINT *)(a1 + 264), 0);
  if ( v25 )
  {
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v25, &mi) )
    {
      if ( left >= mi.rcMonitor.left )
      {
        if ( *v22 + left > mi.rcMonitor.right )
          left = mi.rcMonitor.right - *v22;
      }
      else
      {
        left = mi.rcMonitor.left;
      }
      if ( top >= mi.rcMonitor.top )
      {
        v26 = *(_DWORD *)(a1 + 300);
        if ( v26 + top > mi.rcMonitor.bottom )
          top = mi.rcMonitor.bottom - v26;
      }
      else
      {
        top = mi.rcMonitor.top;
      }
    }
  }
  CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 288), left);
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 288), top);
  CImage::SetBitmapSource(*(CImage **)(a1 + 288), *(struct CBitmapSource **)(a1 + 280));
  CVisual::SetOpacity((CVisual *)a1, 1.0);
  *(_DWORD *)(a1 + 272) = left + *(_DWORD *)(a1 + 296) / 2;
  v27 = MulDiv(20, nNumerator, 96);
  v28 = CDesktopManager::s_pDesktopManagerInstance;
  v29 = *(unsigned int *)(a1 + 260);
  v30 = *(unsigned int *)(a1 + 256);
  *(_DWORD *)(a1 + 276) = top + *(_DWORD *)(a1 + 300) + v27;
  LOBYTE(v32) = 1;
  CContactManager::PostFlickFeedbackUpdate(*((_QWORD *)v28 + 20), v30, v29, a1 + 272, v32);
  return (unsigned int)BitmapFromAtlas;
}
