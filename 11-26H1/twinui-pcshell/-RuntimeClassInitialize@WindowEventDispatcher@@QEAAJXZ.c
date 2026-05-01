/*
 * XREFs of ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x18041DA2C
 * Callers:
 *     ??$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1804108B4 (--$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180410958 (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::RuntimeClassInitialize(WindowManagerBridge **this)
{
  int v2; // eax
  int v3; // eax
  CCriticalFailureHandler *v4; // rcx
  WindowManagerBridge *v5; // rcx
  int v6; // eax
  CCriticalFailureHandler *v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WindowEventDispatcher *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL);
  if ( dword_1808DE590 > v2 )
  {
    Init_thread_header(&dword_1808DE590);
    if ( dword_1808DE590 == -1 )
    {
      xmmword_1808DC680 = SID_WindowEventDispatcher;
      xmmword_1808DC690 = 0LL;
      xmmword_1808DC6A0 = (__int128)SID_ViewEventDispatcher;
      xmmword_1808DC6B0 = 0LL;
      xmmword_1808DC6C0 = xmmword_180781F98;
      xmmword_1808DC6D0 = 0LL;
      xmmword_1808DC6E0 = (__int128)SID_ForegroundViewManager;
      xmmword_1808DC6F0 = 0LL;
      Init_thread_footer(&dword_1808DE590);
    }
  }
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(
           (CImmersiveShellComponent *)(this + 16),
           (__int64)&xmmword_1808DC680,
           4uLL);
    LODWORD(v13) = v3;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v3 = (int)v13;
    }
    if ( v3 < 0 && v3 != -2147024882 && v3 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x42u,
        v10,
        v11);
      v3 = (int)v13;
    }
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x43,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        (int)v10);
    v13 = (WindowEventDispatcher *)this;
    v5 = this[39];
    this[39] = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(WindowManagerBridge *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(
           this + 39,
           &v13);
    LODWORD(v13) = v6;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v6 = (int)v13;
    }
    if ( v6 < 0 && v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x48u,
        v10,
        v11);
      v6 = (int)v13;
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x49,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        (int)v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
