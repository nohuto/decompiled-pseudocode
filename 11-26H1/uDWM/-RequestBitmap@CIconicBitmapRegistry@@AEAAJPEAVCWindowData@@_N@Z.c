/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0
 * Callers:
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001935C (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001AA84 (-WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x18002D478 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180038B84 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180068EC0 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800718B8 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800B68DC (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 * Callees:
 *     ?FindWindowDataIndex@CIconicBitmapRegistry@@AEAAIPEAVCWindowData@@@Z @ 0x18001992C (-FindWindowDataIndex@CIconicBitmapRegistry@@AEAAIPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x18001E1EC (-GetGlobalTime@CDesktopManager@@SANXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18002CA30 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180033740 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180038D60 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18003E0D4 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180060188 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x18006DDC8 (-UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18006FE40 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, HWND *a2, char a3)
{
  unsigned int v3; // edi
  char v4; // si
  unsigned int WindowDataIndex; // eax
  int v10; // eax
  __int64 v11; // rcx
  HWND v12; // r15
  LPARAM v13; // r9
  UINT v14; // edx
  WPARAM v15; // r8
  double GlobalTime; // xmm0_8
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ebp
  unsigned int v20; // eax
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  HWND v23; // rdx
  LPARAM v24; // rsi
  CDesktopManager *v25; // rcx
  int started; // eax
  CWindowData *WindowDataByHwnd; // rax
  int WindowRestoreRect; // eax
  HMONITOR v29; // rax
  LONG v30; // eax
  int v31; // r8d
  int v32; // edx
  struct tagRECT v33; // [rsp+30h] [rbp-38h] BYREF
  int v34; // [rsp+78h] [rbp+10h] BYREF
  int nNumerator; // [rsp+80h] [rbp+18h] BYREF
  struct tagSIZE v36; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a2 != (HWND *)-2LL )
  {
    WindowDataIndex = CIconicBitmapRegistry::FindWindowDataIndex(this, (struct CWindowData *)a2);
    if ( WindowDataIndex < *((_DWORD *)this + 18) )
    {
      v4 = 1;
      v10 = DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 48, WindowDataIndex);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x15Fu, 0LL);
    }
  }
  if ( !a3 )
  {
    if ( a2 != (HWND *)-2LL )
    {
      if ( !v4 )
      {
        if ( a2 == (HWND *)-1LL || !a2[115] )
          return v3;
        goto LABEL_11;
      }
      if ( a2 != (HWND *)-1LL )
      {
LABEL_11:
        CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)a2, 0);
LABEL_12:
        CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(this);
        return v3;
      }
    }
    *((_BYTE *)this + 89) = 0;
    goto LABEL_12;
  }
  if ( a2 == (HWND *)-2LL )
  {
    IsWindowTab((struct CWindowData *)0xFFFFFFFFFFFFFFFELL);
LABEL_15:
    v11 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
    v12 = *(HWND *)(v11 + 40);
    *((_BYTE *)this + 89) = 1;
    if ( v4 )
    {
LABEL_37:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v11, &UdwmManageIconicThumbnail_Info, 3LL);
      if ( !IsWindowTab((struct CWindowData *)a2) )
      {
        v25 = CDesktopManager::s_pDesktopManagerInstance;
        if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
        {
          *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) = 1;
          started = CDesktopManager::PostStartAnimations(v25);
          v3 = started;
          if ( started < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x1B2u, 0LL);
        }
      }
      return v3;
    }
    v13 = 0LL;
    v14 = 806;
    v15 = 0LL;
LABEL_36:
    PostMessageW(v12, v14, v15, v13);
    goto LABEL_37;
  }
  *(_QWORD *)&v33.right = a2;
  GlobalTime = CDesktopManager::GetGlobalTime();
  v17 = *((_DWORD *)this + 18);
  v18 = v17 + 1;
  *(double *)&v33.left = GlobalTime + 10.0;
  if ( v17 + 1 < v17 )
  {
    v3 = -2147024362;
    v20 = 183;
    v19 = -2147024362;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v20, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x16Bu, 0LL);
    return v3;
  }
  v19 = 0;
  if ( v18 <= *((_DWORD *)this + 17) )
  {
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v17) = v33;
    *((_DWORD *)this + 18) = v18;
    goto LABEL_21;
  }
  v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 16LL, 1LL, &v33);
  v3 = v19;
  if ( v19 < 0 )
  {
    v20 = 194;
    goto LABEL_25;
  }
LABEL_21:
  if ( !IsWindowTab((struct CWindowData *)a2) )
  {
    v3 = v19;
    if ( a2 == (HWND *)-1LL )
      goto LABEL_15;
    goto LABEL_29;
  }
  if ( a2 == (HWND *)-1LL )
  {
    v3 = v19;
    goto LABEL_15;
  }
  if ( !*((_DWORD *)a2 + 148) || !*(_DWORD *)(*(_QWORD *)a2[71] + 73LL) )
  {
LABEL_29:
    v12 = a2[5];
    CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)a2, 1);
    v3 = v19;
    if ( v4 )
      goto LABEL_37;
    if ( !v12 )
      goto LABEL_37;
    v36 = 0LL;
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v12);
    AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
    if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v36) )
      goto LABEL_37;
    v23 = a2[115];
    if ( v23 )
    {
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v23);
      if ( WindowDataByHwnd )
      {
        v33 = 0LL;
        WindowRestoreRect = CWindowData::GetWindowRestoreRect(WindowDataByHwnd, &v33, 1);
        v3 = WindowRestoreRect;
        if ( WindowRestoreRect < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowRestoreRect, 0x19Au, 0LL);
          return v3;
        }
        nNumerator = 0;
        v34 = 0;
        v29 = MonitorFromWindow(0LL, 1u);
        if ( (unsigned int)GetDpiForMonitorInternal(v29, 0LL, &nNumerator, &v34) )
        {
          v30 = MulDiv(375, nNumerator, 96);
          v31 = 0;
          if ( v33.bottom - v33.top >= 0 )
            v31 = v33.bottom - v33.top;
          v36.cy = v30;
          v32 = 0;
          if ( v33.right - v33.left >= 0 )
            v32 = v33.right - v33.left;
          v36.cx = MulDiv(v30, v32, v31);
        }
      }
    }
    v24 = LOWORD(v36.cy) | (LOWORD(v36.cx) << 16);
    if ( CWindowData::IsImmersiveWindow((CWindowData *)a2) )
      v15 = (WPARAM)a2[5];
    else
      v15 = 0LL;
    v13 = v24;
    v14 = 803;
    goto LABEL_36;
  }
  return 0LL;
}
