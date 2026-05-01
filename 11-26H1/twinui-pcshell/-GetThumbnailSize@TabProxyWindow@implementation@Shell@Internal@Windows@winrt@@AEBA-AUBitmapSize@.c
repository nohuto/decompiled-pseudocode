/*
 * XREFs of ?GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA?AUBitmapSize@Imaging@Graphics@56@_N@Z @ 0x1801A2270
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x180266CF0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x180582510 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetThumbnailSize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  LONG WindowLongW; // edi
  LONG v7; // eax
  HWND v8; // rcx
  DWORD v9; // ebx
  __int32 bottom; // eax
  HMONITOR v11; // rax
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  HMONITOR v17; // rax
  int nNumerator; // [rsp+20h] [rbp-59h] BYREF
  int v19; // [rsp+24h] [rbp-55h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-51h] BYREF
  struct tagRECT v21; // [rsp+38h] [rbp-41h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+48h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+78h] [rbp-1h] BYREF

  *(_QWORD *)a2 = 0LL;
  WindowLongW = GetWindowLongW(*(HWND *)(a1 + 56), -16);
  v7 = GetWindowLongW(*(HWND *)(a1 + 56), -20);
  v8 = *(HWND *)(a1 + 56);
  v9 = v7;
  Rect = 0LL;
  GetClientRect(v8, &Rect);
  v21 = 0LL;
  memset(&wndpl, 0, sizeof(wndpl));
  if ( !AdjustWindowRectEx(&v21, WindowLongW, 0, v9) || !GetWindowPlacement(*(HWND *)(a1 + 56), &wndpl) )
    goto LABEL_6;
  if ( (wndpl.flags & 2) != 0 && wndpl.showCmd == 2 )
  {
    v17 = MonitorFromRect(&wndpl.rcNormalPosition, 0);
    if ( v17 )
    {
      mi.cbSize = 40;
      memset(&mi.rcMonitor, 0, 36);
      if ( GetMonitorInfoW(v17, &mi) )
      {
        Rect = mi.rcWork;
        bottom = v21.bottom + _mm_srli_si128(*(__m128i *)(&mi + 20), 8).m128i_i32[1];
        goto LABEL_15;
      }
    }
LABEL_6:
    bottom = Rect.bottom;
    goto LABEL_7;
  }
  if ( ((wndpl.showCmd - 2) & 0xFFFFFFFA) != 0 || wndpl.showCmd == 3 || !CopyRect(&Rect, &wndpl.rcNormalPosition) )
    goto LABEL_6;
  Rect.right += v21.left - v21.right;
  bottom = Rect.bottom - v21.bottom;
LABEL_15:
  Rect.bottom = bottom;
LABEL_7:
  if ( a3 )
  {
    *(_DWORD *)(a2 + 4) = bottom - Rect.top;
    v15 = Rect.right - Rect.left;
    goto LABEL_10;
  }
  nNumerator = 0;
  v19 = 0;
  v11 = MonitorFromWindow(0LL, 1u);
  if ( (unsigned int)GetDpiForMonitorInternal(v11, 0LL, &nNumerator, &v19) )
  {
    v12 = MulDiv(375, nNumerator, 96);
    v13 = Rect.bottom - Rect.top;
    v14 = Rect.right - Rect.left;
    *(_DWORD *)(a2 + 4) = v12;
    v15 = MulDiv(v12, v14, v13);
LABEL_10:
    *(_DWORD *)a2 = v15;
  }
  return a2;
}
