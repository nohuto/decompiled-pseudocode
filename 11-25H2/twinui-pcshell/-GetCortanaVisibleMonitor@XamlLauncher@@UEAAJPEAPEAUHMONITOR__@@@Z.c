/*
 * XREFs of ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801C41D0
 * Callers:
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1800725F0 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802500A0 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801C437C (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::GetCortanaVisibleMonitor(XamlLauncher *this, HMONITOR *a2)
{
  _QWORD *v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (_QWORD *)((char *)this + 312);
  if ( !*v3 )
    return 2147943568LL;
  v10 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(v3, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v10 + 64LL))(v10, a2);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x488,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v7);
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x487,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  }
  return v6;
}
