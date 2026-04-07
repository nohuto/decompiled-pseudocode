/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180055A98 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008F614 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180096D4C (-OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18000A650 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800283D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180044338 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800445A4 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18005222C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800539A8 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180053B00 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z @ 0x180054380 (-UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x1800543FC (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800942A0 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __m128i *v5; // rdx
  __m128i v6; // xmm7
  __m128i v7; // xmm6
  int cyTopHeight; // r15d
  int cxLeftWidth; // r14d
  LONG right; // r12d
  LONG bottom; // r13d
  HWND v12; // rdx
  int left; // ecx
  LONG top; // esi
  int v15; // ecx
  __m128i v16; // xmm2
  int v17; // eax
  int v18; // r9d
  int v19; // r8d
  int v20; // edx
  char v21; // r12
  bool v22; // r13
  bool v23; // si
  int updated; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  int WindowRectForLivePreview; // eax
  int v31; // eax
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  __int64 v34; // rax
  HMONITOR v35; // rax
  int v36; // eax
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  __m128i v40; // xmm7
  int v41; // eax
  int v42; // edx
  int nNumerator; // [rsp+3Ch] [rbp-45h] BYREF
  struct _MARGINS v45; // [rsp+40h] [rbp-41h] BYREF
  int v46; // [rsp+50h] [rbp-31h] BYREF
  struct tagRECT v47; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v49; // [rsp+78h] [rbp-9h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = 0;
  v5 = (__m128i *)*((_QWORD *)this + 10);
  v49 = *(struct tagRECT *)(v2 + 48);
  v6 = v5[3];
  v7 = v5[4];
  v45 = 0LL;
  if ( !*(_QWORD *)(v2 + 856) || *((_BYTE *)this + 20) )
  {
    Rect = 0LL;
    AdjustWindowRectEx(&Rect, v5[7].m128i_u32[1], 0, 0);
    cxLeftWidth = -Rect.left;
    right = Rect.right;
    cyTopHeight = -Rect.top;
    bottom = Rect.bottom;
    v45.cyTopHeight = -Rect.top;
    v45.cxLeftWidth = -Rect.left;
    v45.cxRightWidth = Rect.right;
    v45.cyBottomHeight = Rect.bottom;
  }
  else
  {
    cyTopHeight = v45.cyTopHeight;
    cxLeftWidth = v45.cxLeftWidth;
    right = v45.cxRightWidth;
    bottom = v45.cyBottomHeight;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    *(_QWORD *)&Rect.left = 0LL;
    DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
    if ( *((_DWORD *)this + 4) == 2 && (v34 = *((_QWORD *)this + 3)) != 0 )
    {
      *(_QWORD *)&Rect.left = *(_QWORD *)(v34 + 24);
    }
    else
    {
      v12 = *(HWND *)(*((_QWORD *)this + 9) + 856LL);
      if ( v12 )
      {
        WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v12);
        if ( WindowDataByHwnd )
        {
          v47 = 0LL;
          WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v47, 1);
          v3 = WindowRestoreRect;
          if ( WindowRestoreRect < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, 0x16Du, 0LL);
            return v3;
          }
          nNumerator = 0;
          v46 = 0;
          v35 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v35, 0LL, &nNumerator, &v46) )
          {
            v36 = MulDiv(375, nNumerator, 96);
            v37 = 0;
            top = v36;
            if ( v47.bottom - v47.top >= 0 )
              v37 = v47.bottom - v47.top;
            v38 = 0;
            if ( v47.right - v47.left >= 0 )
              v38 = v47.right - v47.left;
            left = MulDiv(v36, v38, v37);
            goto LABEL_8;
          }
        }
      }
    }
    left = Rect.left;
    top = Rect.top;
LABEL_8:
    v49.right = cxLeftWidth + right + v49.left + left;
    v49.bottom = cyTopHeight + bottom + top + v49.top;
    goto LABEL_9;
  }
  WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v49);
  v3 = WindowRectForLivePreview;
  if ( WindowRectForLivePreview < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRectForLivePreview, 0x17Fu, 0LL);
    return v3;
  }
LABEL_9:
  CWindowIconic::UpdateCloneSize(this, &v49, &v45);
  v15 = 0;
  v16 = _mm_srli_si128(v6, 8);
  if ( v49.right - v49.left >= 0 )
    v15 = v49.right - v49.left;
  v17 = 0;
  v18 = _mm_cvtsi128_si32(v6);
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
  v20 = _mm_cvtsi128_si32(v16) - v18;
  if ( v20 >= 0 )
    v17 = v20;
  if ( v17 != v15 )
    goto LABEL_14;
  v39 = 0;
  v40 = _mm_srli_si128(v6, 12);
  if ( v49.bottom - v49.top >= 0 )
    v39 = v49.bottom - v49.top;
  v41 = 0;
  v42 = _mm_cvtsi128_si32(v40) - v19;
  if ( v42 >= 0 )
    v41 = v42;
  if ( v41 == v39 )
    v21 = 0;
  else
LABEL_14:
    v21 = 1;
  v22 = v18 != v49.left || v19 != v49.top;
  v23 = cxLeftWidth != _mm_cvtsi128_si32(v7)
     || v45.cxRightWidth != _mm_cvtsi128_si32(_mm_srli_si128(v7, 4))
     || cyTopHeight != _mm_cvtsi128_si32(_mm_srli_si128(v7, 8))
     || v45.cyBottomHeight != _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  if ( v21 && (v31 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v3 = v31, v31 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x18Cu, 0LL);
  }
  else
  {
    if ( v23 )
      CTopLevelWindow::OnClientMarginsUpdated(*((CTopLevelWindow **)this + 11));
    if ( v22 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v21 || v23 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x19Bu, 0LL);
      }
      else
      {
        v27 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11), v25, v26);
        v3 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x19Cu, 0LL);
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13));
          v3 = v28;
          if ( v28 >= 0 )
          {
            if ( a2 )
              CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x19Du, 0LL);
          }
        }
      }
    }
  }
  return v3;
}
