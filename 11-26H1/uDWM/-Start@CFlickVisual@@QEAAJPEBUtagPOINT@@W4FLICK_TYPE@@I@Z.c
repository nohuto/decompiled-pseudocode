/*
 * XREFs of ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180085558
 * Callers:
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800A9028 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180012244 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800859B0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800A94B0 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CFlickVisual::Start(__int64 a1, POINT *a2, __int64 a3, int a4)
{
  int v4; // edi
  CTimelineBase *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  int v13; // eax
  int BitmapFromAtlas; // r14d
  int v15; // r14d
  __int64 v16; // rcx
  int *v17; // rax
  unsigned int v18; // eax
  CBaseObject **v19; // r12
  void *Theme; // rax
  int v21; // r9d
  _DWORD *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  LONG left; // r13d
  LONG top; // r12d
  HMONITOR v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r8
  int v32; // ebx
  int v33; // eax
  CDesktopManager *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  unsigned int v38; // [rsp+20h] [rbp-E0h]
  unsigned int nNumerator; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+40h] [rbp-C0h]
  _DWORD v41[43]; // [rsp+44h] [rbp-BCh] BYREF
  struct tagMONITORINFO mi; // [rsp+F0h] [rbp-10h] BYREF

  *(POINT *)(a1 + 232) = *a2;
  v4 = a3;
  *(_DWORD *)(a1 + 228) = a3;
  *(_DWORD *)(a1 + 224) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(a1, &UdwmFlickVisual_Start, a3);
  v7 = *(CTimelineBase **)(a1 + 280);
  if ( v7 )
    CTimelineBase::Release(v7);
  v8 = CTimeline<float>::operator new(v7, a2);
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    goto LABEL_33;
  }
  v12 = CTimeline<float>::CTimeline<float>(v8, v9, v10, v11, 0);
  *(_QWORD *)(a1 + 280) = v12;
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
  v41[3] = 2;
  v41[0] = 6;
  v15 = 0;
  v41[11] = 6;
  v40 = 0;
  v41[1] = 1;
  v41[2] = 7;
  v41[13] = 7;
  v41[6] = 9;
  v41[17] = 9;
  v41[10] = 11;
  v41[14] = 13;
  v41[25] = 13;
  v41[21] = 11;
  v41[8] = 10;
  v41[19] = 10;
  v41[18] = 15;
  v41[29] = 15;
  v16 = 21LL;
  v41[26] = 19;
  v41[37] = 19;
  v17 = v41;
  v41[30] = 21;
  v41[32] = 21;
  v41[38] = 21;
  v41[4] = 8;
  v41[5] = 3;
  v41[7] = 4;
  v41[9] = 5;
  v41[12] = 12;
  v41[15] = 8;
  v41[16] = 14;
  v41[20] = 16;
  v41[22] = 17;
  v41[23] = 12;
  v41[24] = 18;
  v41[27] = 14;
  v41[28] = 20;
  v41[31] = 16;
  v41[33] = 17;
  v41[34] = 22;
  v41[35] = 18;
  v41[36] = 23;
  v41[39] = 20;
  v41[40] = 24;
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
  v19 = (CBaseObject **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 248) )
    CBaseObject::Release(*v19);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v15, 0LL, (struct CBitmapSource **)(a1 + 248));
  v21 = BitmapFromAtlas;
  if ( BitmapFromAtlas < 0 )
  {
    v18 = 117;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, v18, 0LL);
    CFlickVisual::Stop((CFlickVisual *)a1);
    return (unsigned int)BitmapFromAtlas;
  }
  v22 = (_DWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 264) = *((_QWORD *)*v19 + 16);
  nNumerator = CDesktopManager::MonitorDpiFromPoint(*a2);
  if ( nNumerator < 0x90 )
  {
    *v22 = 32;
    *(_DWORD *)(a1 + 268) = 32;
  }
  CVisual::SetSize(*(CVisual **)(a1 + 256), (const struct tagSIZE *)(a1 + 264), v23, v24);
  left = *(_DWORD *)(a1 + 232) - *v22 / 2;
  top = *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 268) / 2;
  v27 = MonitorFromPoint(*(POINT *)(a1 + 232), 0);
  if ( v27 )
  {
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v27, &mi) )
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
        v29 = *(_DWORD *)(a1 + 268);
        if ( v29 + top > mi.rcMonitor.bottom )
          top = mi.rcMonitor.bottom - v29;
      }
      else
      {
        top = mi.rcMonitor.top;
      }
    }
  }
  CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 256), (unsigned int)left, v28);
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 256), (unsigned int)top, v30);
  CImage::SetBitmapSource(*(CImage **)(a1 + 256), *(struct CBitmapSource **)(a1 + 248));
  CVisual::SetOpacity((CVisual *)a1, 1.0, v31);
  v32 = *(_DWORD *)(a1 + 268);
  *(_DWORD *)(a1 + 240) = left + *(_DWORD *)(a1 + 264) / 2;
  v33 = MulDiv(20, nNumerator, 96);
  v34 = CDesktopManager::s_pDesktopManagerInstance;
  v35 = *(unsigned int *)(a1 + 228);
  v36 = *(unsigned int *)(a1 + 224);
  *(_DWORD *)(a1 + 244) = top + v32 + v33;
  LOBYTE(v38) = 1;
  CContactManager::PostFlickFeedbackUpdate(*((_QWORD *)v34 + 20), v36, v35, a1 + 240, v38);
  return (unsigned int)BitmapFromAtlas;
}
