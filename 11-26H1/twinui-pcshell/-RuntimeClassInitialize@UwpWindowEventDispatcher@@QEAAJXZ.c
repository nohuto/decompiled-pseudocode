/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800CFA70
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800CF9C0 (--$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D2B4 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1800FA0D4 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::RuntimeClassInitialize(UwpWindowEventDispatcher *this)
{
  int v2; // eax
  int v3; // eax
  CCriticalFailureHandler *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  CCriticalFailureHandler *v7; // rcx
  const char *v8; // r9
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 *v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UwpWindowEventDispatcher *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL);
  if ( dword_1808DE5A8 > v2 )
  {
    Init_thread_header(&dword_1808DE5A8);
    if ( dword_1808DE5A8 == -1 )
    {
      xmmword_1808DC750 = SID_WindowEventDispatcher;
      xmmword_1808DC760 = 0LL;
      xmmword_1808DC770 = (__int128)SID_ViewEventDispatcher;
      xmmword_1808DC780 = 0LL;
      xmmword_1808DC790 = xmmword_180781F98;
      xmmword_1808DC7A0 = 0LL;
      xmmword_1808DC7B0 = (__int128)SID_ForegroundViewManager;
      xmmword_1808DC7C0 = 0LL;
      Init_thread_footer(&dword_1808DE5A8);
    }
  }
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(
           (UwpWindowEventDispatcher *)((char *)this + 128),
           (__int64)&xmmword_1808DC750,
           4uLL);
    LODWORD(v14) = v3;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v14);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v3 = (int)v14;
    }
    if ( v3 < 0 )
    {
      if ( v3 != -2147024882 && v3 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v4,
          (int *)&v14,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x38u,
          v11,
          v12);
        v3 = (int)v14;
      }
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x38,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v3,
          (int)v11);
    }
    v14 = this;
    v5 = *((_QWORD *)this + 40);
    *((_QWORD *)this + 40) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<UwpWindowManagerBridge,IUwpWindowManagerBridge,UwpWindowEventDispatcher *>(
           (char *)this + 320,
           &v14);
    LODWORD(v14) = v6;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&v14);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v6 = (int)v14;
    }
    if ( v6 < 0 )
    {
      if ( v6 != -2147024882 && v6 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v7,
          (int *)&v14,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x3Cu,
          v11,
          v12);
        v6 = (int)v14;
      }
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3C,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v6,
          (int)v11);
    }
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v7) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 80LL))(*((_QWORD *)this + 40));
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x44,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v9,
          (int)v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x49,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
