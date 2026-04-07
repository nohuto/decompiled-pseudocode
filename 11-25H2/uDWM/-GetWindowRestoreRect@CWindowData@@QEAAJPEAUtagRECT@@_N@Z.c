/*
 * XREFs of ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18005222C
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001BAFC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180051F68 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800539A8 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800B7A20 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18000A1E0 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     floor @ 0x18009B6B8 (floor.c)
 */

__int64 __fastcall CWindowData::GetWindowRestoreRect(CWindowData *this, struct tagRECT *a2, char a3)
{
  unsigned int v3; // edi
  CWindowList *v7; // rcx
  signed int LastError; // eax
  int v9; // eax
  LONG bottom; // ebx
  double v11; // xmm0_8
  int v12; // eax
  int v13; // ebx
  double v14; // xmm0_8
  HMONITOR v15; // rbx
  signed int v16; // eax
  __int64 v17; // rcx
  HMONITOR v18; // rax
  RECT rcWork; // xmm0
  signed int v20; // eax
  int v22; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+34h] [rbp-35h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+38h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp-1h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 29) & 0x20000000) == 0 )
  {
    *a2 = *((struct tagRECT *)this + 3);
    return v3;
  }
  wndpl.length = 44;
  memset(&wndpl.flags, 0, 40);
  SetLastError(0);
  if ( !GetWindowPlacement(*((HWND *)this + 5), &wndpl) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x658u, 0LL);
    return v3;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 83) - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v22 = 0;
    v23 = 0;
    CWindowList::GetPhysicalPtFromLogical(v7, this, &wndpl.rcNormalPosition, &v22, &v23);
    v9 = 0;
    bottom = wndpl.rcNormalPosition.bottom;
    if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left >= 0 )
      v9 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
    v11 = floor((float)((float)v9 * *((float *)this + 83)) + 0.5);
    wndpl.rcNormalPosition.left = v22 + (int)v11;
    v12 = 0;
    v13 = bottom - wndpl.rcNormalPosition.top;
    if ( v13 >= 0 )
      v12 = v13;
    v14 = floor((float)((float)v12 * *((float *)this + 83)) + 0.5);
    wndpl.rcNormalPosition.right = v23 + (int)v14;
  }
  SetLastError(0);
  v15 = MonitorFromRect(&wndpl.rcNormalPosition, 1u);
  if ( !v15 )
  {
    v16 = GetLastError();
    v3 = v16;
    if ( v16 > 0 )
      v3 = (unsigned __int16)v16 | 0x80070000;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x673u, 0LL);
    return v3;
  }
  if ( (wndpl.flags & 2) == 0 )
  {
    *a2 = wndpl.rcNormalPosition;
    if ( !a3 )
      return v3;
    v17 = *((_QWORD *)this + 60);
    if ( !v17 )
      return v3;
    v18 = MonitorFromRect((LPCRECT)(*(_QWORD *)(v17 + 32) + 48LL), 0);
    if ( !v18 || v18 != v15 )
      return v3;
    rcWork = *(RECT *)(*(_QWORD *)(*((_QWORD *)this + 60) + 32LL) + 48LL);
LABEL_35:
    *a2 = rcWork;
    return v3;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  SetLastError(0);
  if ( GetMonitorInfoW(v15, &mi) )
  {
    rcWork = mi.rcWork;
    goto LABEL_35;
  }
  v20 = GetLastError();
  v3 = v20;
  if ( v20 > 0 )
    v3 = (unsigned __int16)v20 | 0x80070000;
  if ( (v3 & 0x80000000) == 0 )
    v3 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x679u, 0LL);
  return v3;
}
