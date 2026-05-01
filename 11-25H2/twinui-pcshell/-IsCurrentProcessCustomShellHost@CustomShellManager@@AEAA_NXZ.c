/*
 * XREFs of ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801D4968
 * Callers:
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x1801D47E0 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1801D4BAC (-_Buy_nonzero@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1802CC644 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CustomShellManager::IsCurrentProcessCustomShellHost(CustomShellManager *this)
{
  DWORD v1; // eax
  const char *v2; // r9
  size_t v3; // rbx
  WCHAR *v4; // rsi
  __int64 v5; // rdi
  DWORD v6; // eax
  __int64 v7; // r14
  __int64 v8; // rbx
  WCHAR *v9; // r15
  __int64 v10; // rbx
  size_t v11; // r8
  WCHAR *v12; // r14
  HANDLE CurrentProcess; // rax
  const char *v14; // r9
  BOOL FullProcessImageNameW; // r12d
  bool v16; // r14
  BOOL bIgnoreCase; // [rsp+20h] [rbp-40h]
  LPWSTR lpExeName[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  LPWSTR lpDst[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  CustomShellManager *nSize; // [rsp+90h] [rbp+30h] BYREF

  nSize = this;
  v1 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", 0LL, 0);
  LODWORD(nSize) = v1;
  if ( !v1 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x58,
      (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      v2);
  v3 = v1;
  *(_OWORD *)lpDst = 0LL;
  v22 = 0LL;
  std::vector<unsigned short>::_Buy_nonzero(lpDst, v1);
  v3 *= 2LL;
  v4 = lpDst[0];
  memset_0(lpDst[0], 0, v3);
  lpDst[1] = (WCHAR *)((char *)v4 + v3);
  v5 = v22;
  v6 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", v4, (DWORD)nSize);
  if ( v6 > (unsigned int)nSize )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)0x8007007ALL,
      bIgnoreCase);
  v7 = (unsigned int)nSize;
  *(_OWORD *)lpExeName = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  if ( (_DWORD)nSize )
  {
    std::vector<unsigned short>::_Buy_nonzero(lpExeName, (unsigned int)nSize);
    v10 = v7;
    v11 = 2 * v7;
    v12 = lpExeName[0];
    memset_0(lpExeName[0], 0, v11);
    lpExeName[1] = &v12[v10];
    v9 = v12;
    v8 = v20;
  }
  else
  {
    v12 = lpExeName[0];
  }
  CurrentProcess = GetCurrentProcess();
  FullProcessImageNameW = QueryFullProcessImageNameW(CurrentProcess, 0, v12, (PDWORD)&nSize);
  if ( FullProcessImageNameW || GetLastError() != 122 )
  {
    if ( !FullProcessImageNameW )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x66,
        (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        v14);
    v16 = CompareStringOrdinal(v12, -1, v4, -1, 1) == 2;
    if ( v9 )
      std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(2 * ((v8 - (__int64)v9) >> 1)));
    if ( v4 )
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(2 * ((v5 - (__int64)v4) >> 1)));
    return v16;
  }
  else
  {
    std::vector<unsigned short>::_Tidy(lpExeName);
    std::vector<unsigned short>::_Tidy(lpDst);
    return 0;
  }
}
