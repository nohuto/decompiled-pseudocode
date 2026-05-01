/*
 * XREFs of ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x180657BE0
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801F9AD0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x18020F5A0 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x18050E784 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GDIHelpers::AddBackgroundForIcon(
        HANDLE h,
        HBITMAP a2,
        LONG *a3,
        const struct tagSIZE *a4,
        const struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  HDC CompatibleDC; // rax
  HDC v10; // rdi
  HDC v11; // rax
  HDC v12; // rbx
  HGDIOBJ v13; // r12
  const char *v14; // r9
  unsigned int LastError; // esi
  HBITMAP v17; // rax
  HBITMAP v18; // rsi
  HGDIOBJ v19; // r15
  const struct tagRECT *v20; // r8
  int cx; // r9d
  int cy; // r11d
  BLENDFUNCTION v23[2]; // [rsp+60h] [rbp-89h] BYREF
  void *ppvBits; // [rsp+68h] [rbp-81h] BYREF
  HBITMAP v25; // [rsp+70h] [rbp-79h]
  const struct tagSIZE *v26; // [rsp+78h] [rbp-71h]
  struct tagSIZE *v27; // [rsp+80h] [rbp-69h]
  _OWORD pv[2]; // [rsp+88h] [rbp-61h] BYREF
  RECT v29; // [rsp+A8h] [rbp-41h] BYREF
  BITMAPINFO pbmi; // [rsp+B8h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  v25 = a2;
  v26 = a5;
  v27 = a6;
  CompatibleDC = CreateCompatibleDC(0LL);
  v10 = CompatibleDC;
  if ( !CompatibleDC )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (int)"shell\\inc\\GDIHelpers.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v11 = CreateCompatibleDC(CompatibleDC);
  v12 = v11;
  if ( !v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17B,
      (int)"shell\\inc\\GDIHelpers.h",
      (const char *)0x8007000ELL);
LABEL_9:
    DeleteDC(v10);
    return 2147942414LL;
  }
  v13 = SelectObject(v11, h);
  memset(pv, 0, sizeof(pv));
  if ( !GetObjectW(h, 32, pv) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x181,
                  (unsigned int)"shell\\inc\\GDIHelpers.h",
                  v14);
    SelectObject(v12, v13);
    DeleteDC(v12);
    DeleteDC(v10);
    return LastError;
  }
  pbmi.bmiHeader.biSize = 44;
  memset(&pbmi.bmiHeader.biWidth, 0, 40);
  pbmi.bmiHeader.biWidth = *a3;
  pbmi.bmiHeader.biHeight = a3[1];
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  ppvBits = 0LL;
  v17 = CreateDIBSection(v10, &pbmi, 0, &ppvBits, 0LL, 0);
  v18 = v17;
  *(_QWORD *)&v23[0].BlendOp = v17;
  if ( !v17 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (int)"shell\\inc\\GDIHelpers.h",
      (const char *)0x8007000ELL);
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)v23);
    SelectObject(v12, v13);
    DeleteDC(v12);
    goto LABEL_9;
  }
  v19 = SelectObject(v10, v17);
  v29.left = (*a3 - a4->cx) / 2;
  v29.top = (a3[1] - a4->cy) / 2;
  v29.right = a4->cx + v29.left;
  v29.bottom = a4->cy + v29.top;
  GDIHelpers::FillRectARGB(v10, &v29, v20, *(_DWORD *)v25);
  cx = DWORD1(pv[0]);
  if ( v26->cx < SDWORD1(pv[0]) )
    cx = v26->cx;
  cy = DWORD2(pv[0]);
  if ( v26->cy < SDWORD2(pv[0]) )
    cy = v26->cy;
  GdiAlphaBlend(
    v10,
    (*a3 - cx) / 2,
    (a3[1] - cy) / 2,
    cx,
    cy,
    v12,
    0,
    0,
    SDWORD1(pv[0]),
    SDWORD2(pv[0]),
    (BLENDFUNCTION)33488896);
  *(_QWORD *)&v23[0].BlendOp = 0LL;
  *v27 = (struct tagSIZE)v18;
  SelectObject(v10, v19);
  CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)v23);
  SelectObject(v12, v13);
  DeleteDC(v12);
  DeleteDC(v10);
  return 0LL;
}
