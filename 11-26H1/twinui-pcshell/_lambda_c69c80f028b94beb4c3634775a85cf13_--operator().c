/*
 * XREFs of _lambda_c69c80f028b94beb4c3634775a85cf13_::operator() @ 0x18039A6A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c69c80f028b94beb4c3634775a85cf13___::Run @ 0x18039C740 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c69c80f028b94beb4c3634775a85cf13___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLauncherUIMode@@@WRL@Microsoft@@@012@$$QEAW4EC_HOST_UI_MODE@@@Z @ 0x180399ED0 (--$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV-$ComPt.c)
 */

__int64 __fastcall lambda_c69c80f028b94beb4c3634775a85cf13_::operator()(const WCHAR *a1)
{
  bool v2; // cc
  HINSTANCE v3; // rax
  const char *v4; // r9
  unsigned int LastError; // ebx
  SHELLEXECUTEINFOW pExecInfo; // [rsp+20h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  int v9; // [rsp+A0h] [rbp+67h] BYREF
  HINSTANCE v10; // [rsp+A8h] [rbp+6Fh] BYREF

  memset_0(&pExecInfo, 0, sizeof(pExecInfo));
  v2 = *((_QWORD *)a1 + 3) <= 7uLL;
  pExecInfo.lpVerb = L"open";
  pExecInfo.cbSize = 112;
  pExecInfo.fMask = 0x4000000;
  pExecInfo.hwnd = 0LL;
  if ( !v2 )
    a1 = *(const WCHAR **)a1;
  pExecInfo.lpFile = a1;
  *(_OWORD *)&pExecInfo.lpParameters = 0LL;
  pExecInfo.nShow = 1;
  pExecInfo.hInstApp = 0LL;
  v10 = 0LL;
  v9 = 0;
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLauncherUIMode,CLauncherUIMode,enum EC_HOST_UI_MODE>(
              (__int64 *)&v10,
              &v9) >= 0 )
  {
    pExecInfo.fMask |= 0x8000000u;
    v3 = v10;
    if ( v10 )
      v3 = v10 + 10;
    pExecInfo.hInstApp = v3;
  }
  if ( ShellExecuteExW(&pExecInfo) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1B6,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                  v4);
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v10);
  return LastError;
}
