/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1801669F0
 * Callers:
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801EAD20 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180512844 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180512CE8 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180166C54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802C3C54 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  unsigned int v5; // esi
  unsigned __int32 v8; // r14d
  int WorkAreaFromRect; // ebx
  int v10; // eax
  LONG cx; // r13d
  int v12; // ebx
  LONG cy; // eax
  bool v14; // cc
  int SystemMetrics; // edi
  int v16; // edi
  struct tagRECT *v17; // rcx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  LONG left; // r11d
  __int64 v20; // r10
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // r8d
  LONG v24; // r8d
  LONG v25; // ecx
  __int64 v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-60h]
  LONG v30; // [rsp+28h] [rbp-58h]
  struct tagRECT v32; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v34; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v35; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = 0;
  v8 = 1;
  *a5 = 0LL;
  if ( !a3 )
    v8 = _InterlockedIncrement(&dword_1808DD0A0);
  rc = 0LL;
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &rc);
  if ( WorkAreaFromRect < 0 )
  {
    v27 = 1368LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    return (unsigned int)WorkAreaFromRect;
  }
  v32 = 0LL;
  v10 = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v32);
  WorkAreaFromRect = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F2,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v10);
    v27 = 1371LL;
    goto LABEL_21;
  }
  cx = a4.cx;
  LODWORD(v28) = v32.right - v32.left;
  HIDWORD(v28) = v32.bottom - v32.top;
  v12 = v32.right - v32.left;
  cy = a4.cy;
  v14 = a4.cx <= v32.right - v32.left;
  *(_QWORD *)&v32.left = v28;
  if ( !v14 )
    cx = v28;
  if ( a4.cy > v32.top )
    cy = v32.top;
  v30 = cy;
  SystemMetrics = GetSystemMetrics(32);
  v16 = GetSystemMetrics(30) + SystemMetrics;
  if ( a2 )
  {
    v17 = &v35;
    v35 = *a2;
  }
  else
  {
    v17 = &v34;
    v34 = 0LL;
  }
  ScaleFactorForRect = GetScaleFactorForRect(v17);
  left = rc.left;
  v20 = HIDWORD(*(_QWORD *)&rc.left);
  v21 = (v12 - cx) / v16 + 1;
  v22 = (int)(float)((float)(32 * ScaleFactorForRect) / 100.0);
  if ( a3 )
  {
    if ( cx + a3->left + v16 <= rc.right )
      left = a3->left;
    if ( v30 + a3->top + v22 <= rc.bottom )
      LODWORD(v20) = a3->top;
  }
  if ( v21 )
    v23 = v8 % v21;
  else
    v23 = 0;
  v24 = left + v16 * v23;
  if ( (v32.top - v30) / v22 != -1 )
    v5 = v8 % ((v32.top - v30) / v22 + 1);
  a5->left = v24;
  v25 = v20 + v5 * v22;
  a5->top = v25;
  a5->right = v24 + cx;
  a5->bottom = v25 + v30;
  return 0LL;
}
