/*
 * XREFs of ?GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z @ 0x1800C11D8
 * Callers:
 *     ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x180316BE0 (-UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall IsGameManager::GetProcessFullPathFromProcessId(IsGameManager *this, DWORD a2, HSTRING *a3)
{
  HANDLE v5; // rax
  wil::details *v6; // rcx
  void *v7; // rbx
  const char *v8; // r9
  HRESULT v9; // eax
  unsigned int LastError; // edi
  HSTRING v11; // rcx
  DWORD dwSize; // [rsp+20h] [rbp-858h] BYREF
  HSTRING string; // [rsp+28h] [rbp-850h] BYREF
  HANDLE v15[2]; // [rsp+30h] [rbp-848h] BYREF
  WCHAR ExeName[1040]; // [rsp+40h] [rbp-838h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+878h] [rbp+0h]

  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  v5 = OpenProcess(0x1000u, 0, a2);
  v15[0] = v5;
  v7 = v5;
  if ( !v5 )
    return wil::details::GetLastErrorFailHr(v6);
  if ( !QueryFullProcessImageNameW(v5, 0, ExeName, &dwSize) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xA04,
                  (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                  v8);
    if ( v7 != (void *)-1LL )
      CloseHandle(v7);
    return LastError;
  }
  string = 0LL;
  v9 = WindowsCreateString(ExeName, dwSize, &string);
  LastError = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA06,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v15);
    return LastError;
  }
  v11 = *a3;
  *a3 = string;
  WindowsDeleteString(v11);
  if ( v7 != (void *)-1LL )
    CloseHandle(v7);
  return 0LL;
}
