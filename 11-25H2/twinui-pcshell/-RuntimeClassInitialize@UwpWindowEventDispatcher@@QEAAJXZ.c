/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800F871C
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800F8670 (--$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180025070 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180072370 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180091788 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1800A3D10 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  if ( dword_18089DF20 > v2 )
  {
    Init_thread_header(&dword_18089DF20);
    if ( dword_18089DF20 == -1 )
    {
      xmmword_18089C0A0 = SID_WindowEventDispatcher;
      xmmword_18089C0B0 = 0LL;
      xmmword_18089C0C0 = (__int128)SID_ViewEventDispatcher;
      xmmword_18089C0D0 = 0LL;
      xmmword_18089C0E0 = xmmword_1807589D8;
      xmmword_18089C0F0 = 0LL;
      xmmword_18089C100 = (__int128)SID_ForegroundViewManager;
      xmmword_18089C110 = 0LL;
      Init_thread_footer(&dword_18089DF20);
    }
  }
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(
           (UwpWindowEventDispatcher *)((char *)this + 128),
           (__int64)&xmmword_18089C0A0,
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
           (_QWORD *)this + 40,
           (__int64 *)&v14);
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
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
