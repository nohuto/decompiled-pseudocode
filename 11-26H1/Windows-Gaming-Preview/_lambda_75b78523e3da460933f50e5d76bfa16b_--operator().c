/*
 * XREFs of _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x1800263F8
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x18002E820 (Windows--Internal--COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b___ea_18002E820.c)
 * Callees:
 *     memset_0 @ 0x180002FE8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180008DB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000C440 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014B68 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035A60 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036E10 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_75b78523e3da460933f50e5d76bfa16b_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  unsigned int StringPropertyFromGameConfigStore; // ebx
  HSTRING v10; // rcx
  int v12; // eax
  HSTRING v13; // rcx
  HSTRING v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, HSTRING *); // rcx
  struct _RTL_CRITICAL_SECTION *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v19; // xmm6
  __int64 v20; // rbx
  HSTRING v21; // rcx
  const char *v22; // r9
  int v23; // eax
  HSTRING v24; // rcx
  HSTRING v25; // rbx
  __int64 (__fastcall *v26)(HSTRING, HSTRING *); // rdi
  int v27; // eax
  HSTRING v28; // rcx
  __int64 v29; // rbx
  int LaunchParameters; // eax
  HSTRING v31; // rcx
  HSTRING v32; // rbx
  const char *v33; // r9
  unsigned int LastError; // edi
  HSTRING v35; // rcx
  HSTRING v36; // rcx
  __int128 v37; // [rsp+28h] [rbp-59h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+38h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  HSTRING v40; // [rsp+E8h] [rbp+67h] BYREF
  HSTRING string; // [rsp+F8h] [rbp+77h] BYREF
  HSTRING v42; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 256);
  if ( v5 )
  {
    v40 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 112LL))(v5, &v40);
    StringPropertyFromGameConfigStore = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v6);
      v10 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return StringPropertyFromGameConfigStore;
    }
    v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v40, v7, v8);
    StringPropertyFromGameConfigStore = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v12);
      v13 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16LL))(v13);
      }
      return StringPropertyFromGameConfigStore;
    }
    *(_BYTE *)(a2 + 16) = 1;
    v14 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return 0LL;
  }
  v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, HSTRING *))(v4 + 296);
  if ( !v15 )
  {
    v16 = (struct _RTL_CRITICAL_SECTION *)(v4 + 168);
    EnterCriticalSection(v16);
    v42 = (HSTRING)v16;
    v18 = *(_QWORD *)(*a1 + 272);
    if ( !v18 || !*(_QWORD *)(*a1 + 280) )
    {
      StringPropertyFromGameConfigStore = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x80070005LL);
LABEL_36:
      if ( v16 )
        LeaveCriticalSection(v16);
      return StringPropertyFromGameConfigStore;
    }
    LOBYTE(v17) = 1;
    v19 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       v18,
                       v17);
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v37 = v19;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                          *(_QWORD *)(*a1 + 280),
                                          &v37,
                                          23LL,
                                          &string);
    if ( (StringPropertyFromGameConfigStore & 0x80000000) != 0 )
      goto LABEL_17;
    if ( !string )
    {
      StringPropertyFromGameConfigStore = -2147024894;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)StringPropertyFromGameConfigStore);
LABEL_18:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_36;
    }
    v40 = 0LL;
    v20 = *a1;
    WindowsDeleteString(0LL);
    v40 = 0LL;
    StringPropertyFromGameConfigStore = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                                          (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v20 + 16),
                                          &v40);
    if ( (StringPropertyFromGameConfigStore & 0x80000000) != 0 )
      goto LABEL_22;
    v21 = v40;
    if ( v40 )
    {
      if ( !WindowsIsStringEmpty(v40) )
      {
LABEL_28:
        pExecInfo.cbSize = 112;
        memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
        pExecInfo.nShow = 1;
        pExecInfo.lpFile = WindowsGetStringRawBuffer(string, 0LL);
        if ( v40 && !WindowsIsStringEmpty(v40) )
          pExecInfo.lpParameters = WindowsGetStringRawBuffer(v40, 0LL);
        if ( !ShellExecuteExW(&pExecInfo) )
        {
          StringPropertyFromGameConfigStore = wil::details::in1diag3::Return_GetLastError(
                                                retaddr,
                                                (void *)0x40E,
                                                (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                                                v22);
          goto LABEL_23;
        }
        WindowsDeleteString(v40);
        v40 = 0LL;
        WindowsDeleteString(string);
        string = 0LL;
        if ( v16 )
          LeaveCriticalSection(v16);
        return 0LL;
      }
      v21 = v40;
    }
    WindowsDeleteString(v21);
    v40 = 0LL;
    v37 = v19;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(*(_QWORD *)(*a1 + 280), &v37, 4LL, &v40);
    if ( (StringPropertyFromGameConfigStore & 0x80000000) != 0 )
    {
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)StringPropertyFromGameConfigStore);
LABEL_23:
      WindowsDeleteString(v40);
      v40 = 0LL;
      goto LABEL_18;
    }
    goto LABEL_28;
  }
  v40 = 0LL;
  v23 = (**v15)(v15, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v40);
  StringPropertyFromGameConfigStore = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v23);
    v24 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return StringPropertyFromGameConfigStore;
  }
  string = 0LL;
  v25 = v40;
  v26 = *(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v40 + 96LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v27 = v26(v25, &string);
  StringPropertyFromGameConfigStore = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v27);
    WindowsDeleteString(string);
    string = 0LL;
    v28 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v28 + 16LL))(v28);
    }
    return StringPropertyFromGameConfigStore;
  }
  v29 = *a1;
  WindowsDeleteString(0LL);
  v42 = 0LL;
  LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                       (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v29 + 16),
                       &v42);
  StringPropertyFromGameConfigStore = LaunchParameters;
  if ( LaunchParameters < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)LaunchParameters);
    WindowsDeleteString(v42);
    WindowsDeleteString(string);
    string = 0LL;
    v31 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 16LL))(v31);
    }
    return StringPropertyFromGameConfigStore;
  }
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.nShow = 1;
  pExecInfo.lpFile = WindowsGetStringRawBuffer(string, 0LL);
  v32 = v42;
  pExecInfo.lpParameters = WindowsGetStringRawBuffer(v42, 0LL);
  if ( ShellExecuteExW(&pExecInfo) )
  {
    WindowsDeleteString(v32);
    WindowsDeleteString(string);
    string = 0LL;
    v36 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v36 + 16LL))(v36);
    }
    return 0LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x40E,
                (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                v33);
  WindowsDeleteString(v32);
  WindowsDeleteString(string);
  string = 0LL;
  v35 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return LastError;
}
