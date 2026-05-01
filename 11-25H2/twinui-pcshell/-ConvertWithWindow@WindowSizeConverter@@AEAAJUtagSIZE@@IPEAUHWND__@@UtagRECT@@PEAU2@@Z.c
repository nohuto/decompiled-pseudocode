/*
 * XREFs of ?ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z @ 0x1802412C4
 * Callers:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180067F50 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall WindowSizeConverter::ConvertWithWindow(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        int a3,
        HWND a4,
        struct tagRECT *a5,
        struct tagSIZE *a6)
{
  LONG cx; // ebx
  const char *v9; // r9
  __int64 v10; // rdx
  LONG cy; // [rsp+24h] [rbp-2Ch]
  struct tagRECT Rect; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT v14; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  cx = a2.cx;
  cy = a2.cy;
  *a6 = 0LL;
  Rect = 0LL;
  if ( !GetWindowRect(a4, &Rect) )
  {
    v10 = 647LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
             v9);
  }
  v14 = 0LL;
  if ( !GetClientRect(a4, &v14) )
  {
    v10 = 653LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
             v9);
  }
  a6->cx = v14.left
         + Rect.right
         + a5->left
         - (int)(float)((float)(a3 * cx) / -100.0)
         - a5->right
         - Rect.left
         - v14.right;
  a6->cy = v14.top
         + Rect.bottom
         + a5->top
         - (int)(float)((float)(a3 * cy) / -100.0)
         - a5->bottom
         - Rect.top
         - v14.bottom;
  return 0LL;
}
