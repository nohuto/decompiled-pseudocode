/*
 * XREFs of ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18008A7FC
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18008B230 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x18008BDE0 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::AdjustSizeForChrome(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // eax
  struct tagSIZE v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  ApplicationViewManagement::CGlobals::GetWindowSizeConverter(&v14);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CWinRTApplicationView *, __int64 *))(*(_QWORD *)v14 + 40LL))(
         v14,
         *a2,
         a3,
         this,
         &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = MulDiv(a2->cx, a3, 96);
    v11 = MulDiv(a2->cy, a3, 96);
    v12.cx = v15 + a2->cx - v10;
    v12.cy = a2->cy + HIDWORD(v15) - v11;
    *a2 = v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6);
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
}
