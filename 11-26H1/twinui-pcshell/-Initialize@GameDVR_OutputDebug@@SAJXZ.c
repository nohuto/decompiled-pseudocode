/*
 * XREFs of ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800C6B18
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1800C62AC (-RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18008984C (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180109D54 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z @ 0x180185534 (-FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z.c)
 *     ?EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z @ 0x1803157F4 (-EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z.c)
 */

__int64 GameDVR_OutputDebug::Initialize(void)
{
  LSTATUS ValueW; // eax
  bool v1; // sf
  LSTATUS v2; // eax
  bool v3; // sf
  void *v4; // rcx
  HRESULT v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int pvData; // [rsp+70h] [rbp+20h] BYREF
  HSTRING pcbData; // [rsp+78h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+88h] [rbp+38h] BYREF

  pv = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  pvData = 0;
  EnterCriticalSection(&GameDVR_OutputDebug::s_csLock);
  v18 = &GameDVR_OutputDebug::s_csLock;
  if ( !WindowsIsStringEmpty(GameDVR_OutputDebug::s_TraceOutputFilePath) )
    goto LABEL_2;
  v6 = SHGetKnownFolderPath(&FOLDERID_LocalAppData, 0x8000u, 0LL, (PWSTR *)&pv);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 54LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamedvrtraceprovider.cpp",
      (const char *)v8);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
    Windows::Internal::String::~String((Windows::Internal::String *)&v12);
    Windows::Internal::String::~String((Windows::Internal::String *)&v13);
    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
    return (unsigned int)v7;
  }
  if ( !pv )
  {
    v7 = -2147467261;
    goto LABEL_18;
  }
  v7 = Windows::Internal::String::_InitializeHelper(
         &GameDVR_OutputDebug::s_TraceOutputFilePath,
         (const unsigned __int16 *)pv);
  if ( v7 < 0 )
  {
LABEL_18:
    v8 = (unsigned int)v7;
    v9 = 56LL;
    goto LABEL_19;
  }
  pcbData = 0LL;
  v10 = WindowsConcatString(GameDVR_OutputDebug::s_TraceOutputFilePath, string2, &pcbData);
  v11 = Windows::Internal::String::FreeAndAssignOnSuccess(v10, pcbData, &GameDVR_OutputDebug::s_TraceOutputFilePath);
  v7 = v11;
  if ( v11 < 0 )
  {
    v8 = (unsigned int)v11;
    v9 = 57LL;
    goto LABEL_19;
  }
LABEL_2:
  LODWORD(pcbData) = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR\\Debug",
             L"TraceOn",
             0x10u,
             0LL,
             &pvData,
             (LPDWORD)&pcbData);
  v1 = ValueW < 0;
  if ( ValueW > 0 )
    v1 = 1;
  if ( !v1 )
    GameDVR_OutputDebug::EnsureTraceFileOpen(pvData != 0);
  LODWORD(pcbData) = 4;
  v2 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR\\Debug",
         L"DebugOutputOn",
         0x10u,
         0LL,
         &pvData,
         (LPDWORD)&pcbData);
  v3 = v2 < 0;
  if ( v2 > 0 )
    v3 = 1;
  if ( !v3 )
    GameDVR_OutputDebug::s_fOutputToDebugger = pvData != 0;
  LeaveCriticalSection(&GameDVR_OutputDebug::s_csLock);
  v4 = pv;
  pv = 0LL;
  CoTaskMemFree(v4);
  return 0LL;
}
