/*
 * XREFs of _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$6 @ 0x1806EB0B2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize_::_1_::catch_6(wil *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx
  void *v5; // rdx
  CCriticalFailureHandler *v6; // rcx
  const char *v7; // r9

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v4 + 288) = v3;
  wil::details::SetEvent(*(wil::details **)(v4 + 264), v5);
  v7 = (const char *)*(unsigned int *)(v4 + 288);
  *(_DWORD *)(a2 + 48) = (_DWORD)v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v6, (int *)(a2 + 48));
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = (const char *)*(unsigned int *)(a2 + 48);
  }
  if ( (int)v7 >= 0 )
    return 1LL;
  if ( (_DWORD)v7 != -2147024882 && (_DWORD)v7 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      (int *)(a2 + 48),
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      0x48u);
    v7 = (const char *)*(unsigned int *)(a2 + 48);
  }
  if ( (int)v7 >= 0 )
    return 1LL;
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x48,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
    v7);
  return 0LL;
}
