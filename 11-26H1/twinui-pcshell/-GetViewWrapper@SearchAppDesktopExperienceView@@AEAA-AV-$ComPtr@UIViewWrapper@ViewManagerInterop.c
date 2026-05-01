/*
 * XREFs of ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1803C9878
 * Callers:
 *     ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1803C90A0 (-GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1803CC668 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall SearchAppDesktopExperienceView::GetViewWrapper(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
    v5 = v4(v3, a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8A9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v5);
  }
  return a2;
}
