/*
 * XREFs of ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180135824
 * Callers:
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180134AB0 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x180135618 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::AdjustSizeForChrome(
        CWinRTApplicationView *this,
        struct tagSIZE *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // ebx
  int v11; // eax
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  struct tagSIZE v15; // [rsp+78h] [rbp+20h]

  v14 = 0LL;
  ApplicationViewManagement::CGlobals::GetWindowSizeConverter(v12);
  v6 = v12[0];
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CWinRTApplicationView *, __int64 *))(*(_QWORD *)v12[0] + 40LL))(
         v12[0],
         *a2,
         a3,
         this,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = MulDiv(a2->cx, a3, 96);
    v11 = MulDiv(a2->cy, a3, 96);
    v15.cx = v14 + a2->cx - v10;
    v15.cy = a2->cy + HIDWORD(v14) - v11;
    *a2 = v15;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v7);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v8;
  }
}
