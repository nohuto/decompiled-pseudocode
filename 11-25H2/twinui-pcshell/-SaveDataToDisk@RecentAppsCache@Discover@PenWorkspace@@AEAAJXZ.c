/*
 * XREFs of ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18002BF2C
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800A49F8 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18002C3B4 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800A3288 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  struct Windows::Data::Json::IJsonObject *v4; // rbx
  __int64 (__fastcall *v5)(struct Windows::Data::Json::IJsonObject *, GUID *, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  HANDLE FileW; // rbx
  __int64 v11; // rsi
  PCWSTR StringRawBuffer; // rax
  void *v13; // rdi
  const WCHAR *v14; // rax
  __int64 v15; // rcx
  struct Windows::Data::Json::IJsonObject *v16; // rcx
  struct Windows::Data::Json::IJsonObject *v18; // rcx
  __int64 v19; // rdx
  const char *v20; // r9
  const char *v21; // r9
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  int dwCreationDispositiona; // [rsp+20h] [rbp-E0h]
  int dwCreationDispositionb; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v28; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Dst[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR FileName[264]; // [rsp+280h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B8h] [rbp+3B8h]

  v26 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v26);
  v2 = PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(this, &v26);
  LastError = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E7,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v2,
      dwCreationDisposition);
    v18 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return LastError;
  }
  v27 = 0LL;
  v4 = v26;
  v5 = **(__int64 (__fastcall ***)(struct Windows::Data::Json::IJsonObject *, GUID *, __int64 *))v26;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v27);
  v6 = v5(v4, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v27);
  LastError = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EA,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v6,
      dwCreationDisposition);
LABEL_35:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v26);
    return LastError;
  }
  string = 0LL;
  v7 = v27;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = v8(v7, &string);
  LastError = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2ED,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v9,
      dwCreationDisposition);
LABEL_25:
    WindowsDeleteString(string);
LABEL_34:
    string = 0LL;
    goto LABEL_35;
  }
  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace", Dst, 0x104u) )
  {
    v19 = 752LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL,
      dwCreationDisposition);
    WindowsDeleteString(string);
    LastError = -2147467259;
    goto LABEL_34;
  }
  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", FileName, 0x104u) )
  {
    v19 = 755LL;
    goto LABEL_28;
  }
  if ( GetFileAttributesW(Dst) == -1 && !CreateDirectoryW(Dst, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2F9,
                  (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  v20);
    goto LABEL_25;
  }
  FileW = CreateFileW(FileName, 0x40000000u, 2u, 0LL, 2u, 0x8000080u, 0LL);
  v28 = FileW;
  v11 = -1LL;
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FD,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80070490LL,
      dwCreationDispositiona);
LABEL_24:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v28);
    goto LABEL_25;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  do
    ++v11;
  while ( StringRawBuffer[v11] );
  v13 = CoTaskMemAlloc((unsigned int)v11);
  v29[0] = v13;
  v14 = WindowsGetStringRawBuffer(string, 0LL);
  if ( WideCharToMultiByte(0xFDE9u, 0, v14, v11, (LPSTR)v13, v11, 0LL, 0LL) )
  {
    if ( WriteFile(FileW, v13, v11, 0LL, 0LL) )
    {
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(v29);
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v28);
      WindowsDeleteString(string);
      LastError = 0;
      goto LABEL_34;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x303,
                  (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  v21);
    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(v29);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x301,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)0x80004005LL,
    dwCreationDispositionb);
  CoTaskMemFree(v13);
  if ( FileW )
    CloseHandle(FileW);
  WindowsDeleteString(string);
  string = 0LL;
  v15 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 2147500037LL;
}
