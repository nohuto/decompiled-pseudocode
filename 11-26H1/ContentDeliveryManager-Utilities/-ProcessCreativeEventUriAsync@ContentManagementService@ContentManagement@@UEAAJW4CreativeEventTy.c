/*
 * XREFs of ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180055F60
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800219DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180021C08 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180055C50 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800722E8 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventUriAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        __int64 a4,
        int a5,
        __int64 *a6)
{
  const WCHAR *StringRawBuffer; // rax
  int v10; // eax
  unsigned int v11; // ebx
  const WCHAR *v13; // r14
  const char *i; // rax
  unsigned __int64 v15; // rbx
  const WCHAR *v16; // rsi
  unsigned __int64 v17; // rdi
  HSTRING v18; // r15
  unsigned __int64 v19; // rdi
  HSTRING v20; // r14
  const WCHAR *v21; // rsi
  unsigned __int64 v22; // rdi
  HSTRING v23; // rsi
  const WCHAR *v24; // rdi
  int v25; // eax
  HSTRING string; // [rsp+68h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v29; // [rsp+88h] [rbp-78h] BYREF
  HSTRING_HEADER v30; // [rsp+90h] [rbp-70h] BYREF
  HSTRING v31; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER v32; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING v33; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v34; // [rsp+D0h] [rbp-30h] BYREF
  PCWSTR sourceString[3]; // [rsp+F0h] [rbp-10h] BYREF
  PCWSTR v36; // [rsp+108h] [rbp+8h]
  PCWSTR v37; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  `eh vector constructor iterator'(
    sourceString,
    0x18uLL,
    17,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v10 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
          (CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *)sourceString,
          StringRawBuffer);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v10);
    `eh vector destructor iterator'(
      sourceString,
      0x18uLL,
      17,
      (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
    return v11;
  }
  v13 = v37;
  for ( i = (const char *)&`CreativeFramework::LaunchCreativeHelpers::MapCreativeEventTypeToUriParamType'::`2'::c_mapCreativeEventTypeToUriParamType;
        ;
        i += 8 )
  {
    v15 = -1LL;
    if ( i == "onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp" )
      break;
    if ( *(_DWORD *)i == a2 )
    {
      if ( *((_DWORD *)i + 1) != -1 )
      {
        v16 = sourceString[3 * *((int *)i + 1)];
        goto LABEL_11;
      }
      break;
    }
  }
  v16 = 0LL;
LABEL_11:
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    if ( v17 > 0xFFFFFFFF )
    {
      LODWORD(v17) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(v16, v17, &hstringHeader, &string);
    v18 = string;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v13 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v13[v19] );
    if ( v19 > 0xFFFFFFFF )
    {
      LODWORD(v19) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(v13, v19, &v30, &v29);
    v20 = v29;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = v36;
  v22 = -1LL;
  do
    ++v22;
  while ( v36[v22] );
  if ( v22 > 0xFFFFFFFF )
  {
    LODWORD(v22) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v21, v22, &v32, &v31);
  v23 = v31;
  v24 = sourceString[0];
  do
    ++v15;
  while ( sourceString[0][v15] );
  if ( v15 > 0xFFFFFFFF )
  {
    LODWORD(v15) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v24, v15, &v34, &v33);
  v25 = ContentManagement::ContentManagementService::ProcessCreativeEventAsync(a1, a2, v33, v23, v20, v18, a4, a5, a6);
  v11 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v25);
    `eh vector destructor iterator'(
      sourceString,
      0x18uLL,
      17,
      (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
    return v11;
  }
  `eh vector destructor iterator'(
    sourceString,
    0x18uLL,
    17,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
  return 0LL;
}
