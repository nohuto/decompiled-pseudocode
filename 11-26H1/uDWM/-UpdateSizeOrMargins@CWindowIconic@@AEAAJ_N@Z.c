/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180089A38 (-OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180010644 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800116B8 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180011760 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800148E0 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800335E4 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180033740 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004C0D8 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180059334 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18006FE40 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z @ 0x180075544 (-UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __m128i v7; // xmm6
  int cxLeftWidth; // r14d
  int cxRightWidth; // r12d
  int cyTopHeight; // r15d
  int cyBottomHeight; // r13d
  __int64 v12; // rax
  int left; // ecx
  LONG top; // esi
  HWND v15; // rdx
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  HMONITOR v18; // rax
  int v19; // eax
  int v20; // r8d
  int v21; // edx
  int WindowRectForLivePreview; // eax
  int v23; // ecx
  __m128i v24; // xmm2
  int v25; // eax
  int v26; // r9d
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  __m128i v30; // xmm6
  int v31; // eax
  int v32; // edx
  char v33; // si
  bool v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // r15
  int v39; // eax
  int updated; // eax
  int nNumerator; // [rsp+3Ch] [rbp-45h] BYREF
  struct _MARGINS v44; // [rsp+40h] [rbp-41h] BYREF
  int v45; // [rsp+50h] [rbp-31h] BYREF
  struct tagRECT v46; // [rsp+58h] [rbp-29h] BYREF
  __int128 v47; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT Rect; // [rsp+78h] [rbp-9h] BYREF
  struct tagRECT v49; // [rsp+88h] [rbp+7h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = (char *)this + 20;
  v4 = 0;
  v5 = *((_QWORD *)this + 10);
  v49 = *(struct tagRECT *)(v2 + 48);
  v7 = *(__m128i *)(v5 + 48);
  v47 = *(_OWORD *)(v5 + 64);
  v44 = 0LL;
  if ( *(_QWORD *)(v2 + 920) && !*v3 )
  {
    cyBottomHeight = v44.cyBottomHeight;
    cyTopHeight = v44.cyTopHeight;
    cxRightWidth = v44.cxRightWidth;
    cxLeftWidth = v44.cxLeftWidth;
  }
  else
  {
    Rect = 0LL;
    AdjustWindowRectEx(&Rect, *(_DWORD *)(v5 + 116), 0, 0);
    cxLeftWidth = -Rect.left;
    cxRightWidth = Rect.right;
    cyTopHeight = -Rect.top;
    cyBottomHeight = Rect.bottom;
    v44.cyTopHeight = -Rect.top;
    v44.cxLeftWidth = -Rect.left;
    v44.cxRightWidth = Rect.right;
    v44.cyBottomHeight = Rect.bottom;
  }
  if ( *v3 )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v49);
    v4 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRectForLivePreview, 0x1AEu, 0LL);
      return v4;
    }
    goto LABEL_22;
  }
  *(_QWORD *)&Rect.left = 0LL;
  DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
  if ( *((_DWORD *)this + 4) == 2 && (v12 = *((_QWORD *)this + 3)) != 0 )
  {
    *(_QWORD *)&Rect.left = *(_QWORD *)(v12 + 128);
  }
  else
  {
    v15 = *(HWND *)(*((_QWORD *)this + 9) + 920LL);
    if ( v15 )
    {
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v15);
      if ( WindowDataByHwnd )
      {
        v46 = 0LL;
        WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v46, 1);
        v4 = WindowRestoreRect;
        if ( WindowRestoreRect < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x19Cu, 0LL);
          return v4;
        }
        nNumerator = 0;
        v45 = 0;
        v18 = MonitorFromWindow(0LL, 1u);
        if ( (unsigned int)GetDpiForMonitorInternal(v18, 0LL, &nNumerator, &v45) )
        {
          v19 = MulDiv(375, nNumerator, 96);
          v20 = 0;
          top = v19;
          if ( v46.bottom - v46.top >= 0 )
            v20 = v46.bottom - v46.top;
          v21 = 0;
          if ( v46.right - v46.left >= 0 )
            v21 = v46.right - v46.left;
          left = MulDiv(v19, v21, v20);
          goto LABEL_10;
        }
      }
    }
  }
  left = Rect.left;
  top = Rect.top;
LABEL_10:
  v49.right = cxLeftWidth + cxRightWidth + v49.left + left;
  v49.bottom = cyTopHeight + cyBottomHeight + top + v49.top;
LABEL_22:
  CWindowIconic::UpdateCloneSize(this, &v49, &v44);
  v23 = 0;
  v24 = _mm_srli_si128(v7, 8);
  if ( v49.right - v49.left >= 0 )
    v23 = v49.right - v49.left;
  v25 = 0;
  v26 = _mm_cvtsi128_si32(v7);
  v27 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  v28 = _mm_cvtsi128_si32(v24) - v26;
  if ( v28 >= 0 )
    v25 = v28;
  if ( v25 != v23 )
    goto LABEL_33;
  v29 = 0;
  v30 = _mm_srli_si128(v7, 12);
  if ( v49.bottom - v49.top >= 0 )
    v29 = v49.bottom - v49.top;
  v31 = 0;
  v32 = _mm_cvtsi128_si32(v30) - v27;
  if ( v32 >= 0 )
    v31 = v32;
  if ( v31 == v29 )
    v33 = 0;
  else
LABEL_33:
    v33 = 1;
  v34 = v26 != v49.left || v27 != v49.top;
  v38 = operator!=(&v44, &v47);
  if ( v33 && (v39 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v4 = v39, v39 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x1BBu, 0LL);
  }
  else
  {
    if ( v38 )
      CTopLevelWindow::OnClientMarginsUpdated(*((CTopLevelWindow **)this + 11));
    if ( v34 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v33 || v38 )
    {
      updated = CWindowIconic::UpdateClientArea(this, v35, v36, v37);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1CAu, 0LL);
      }
      else
      {
        CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
        CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 13));
        if ( a2 )
          CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
      }
    }
  }
  return v4;
}
