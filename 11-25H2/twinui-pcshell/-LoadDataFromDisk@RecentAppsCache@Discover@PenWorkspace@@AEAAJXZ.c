/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800A45F4
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800A49F8 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180026AA8 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18002B0D8 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800A3288 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1803E2828 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(RTL_SRWLOCK *this)
{
  unsigned int LastError; // ebx
  char *FileW; // rax
  char *v4; // rbx
  DWORD FileSize; // eax
  __int64 v6; // rsi
  SIZE_T v7; // r14
  void *v8; // rax
  void *v9; // rdi
  size_t v10; // rax
  const char *v11; // r9
  void *v12; // rsi
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HSTRING v16; // r14
  int ActivationFactory; // eax
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64, struct Windows::Data::Json::IJsonObject **, __int64 *); // rdi
  int v24; // eax
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  struct Windows::Data::Json::IJsonObject *v27; // [rsp+58h] [rbp-B0h] BYREF
  void *v28; // [rsp+60h] [rbp-A8h] BYREF
  void *v29; // [rsp+68h] [rbp-A0h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+70h] [rbp-98h] BYREF
  char *v31; // [rsp+78h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  HSTRING string; // [rsp+98h] [rbp-70h] BYREF
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
    return LastError;
  }
  FileW = (char *)CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
  v4 = FileW;
  v31 = FileW;
  if ( FileW == (char *)-1LL )
  {
    LastError = -2147023728;
LABEL_28:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v31);
    return LastError;
  }
  FileSize = GetFileSize(FileW, 0LL);
  v6 = FileSize;
  v7 = FileSize + 1;
  v8 = CoTaskMemAlloc(v7);
  v9 = v8;
  v28 = v8;
  if ( !v8 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_27;
  }
  v10 = CTCoAllocPolicy::_CoTaskMemSize(v8);
  memset_0(v9, 0, v10);
  NumberOfBytesRead[0] = 0;
  if ( !ReadFile(v4, v9, v6, NumberOfBytesRead, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x222,
                  (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  v11);
LABEL_27:
    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v28);
    goto LABEL_28;
  }
  *((_BYTE *)v9 + v6) = 0;
  v12 = CoTaskMemAlloc(2 * v7);
  v29 = v12;
  if ( !MultiByteToWideChar(0xFDE9u, 0, (LPCCH)v9, -1, (LPWSTR)v12, v7) )
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x227,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
LABEL_10:
    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v29);
    goto LABEL_27;
  }
  v26 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    __debugbreak();
  }
  v16 = string;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v26);
  ActivationFactory = RoGetActivationFactory(v16, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v26);
  v18 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v27 = 0LL;
    LOBYTE(v25) = 0;
    v21 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v29) + 24);
    string = 0LL;
    v22 = v26;
    v23 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v26 + 56LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v27);
    v24 = v23(v22, v21, &v27, &v25);
    LastError = v24;
    if ( v24 >= 0 )
    {
      if ( !(_BYTE)v25 )
      {
        PenWorkspaceBrokerTelemetry::FailedToParseJsonString();
        if ( !(_BYTE)v25 )
        {
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v27);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v26);
          CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v29);
          CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v28);
          LastError = -2147467259;
          goto LABEL_28;
        }
      }
      LastError = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22F,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v24);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v27);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v26);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22A,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)ActivationFactory);
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  CoTaskMemFree(v12);
  CoTaskMemFree(v9);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  return v18;
}
