/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180055C50
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180055F60 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002A370 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18002E774 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180033C00 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800452F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180047C34 (Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Found_ea_180047C34.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x180048104 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_cdeb3b86346b203bd3e87afbc.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0 @ 0x180049FB0 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x18004BEE8 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--__lambda_cdeb3b86346b203bd3e87afbcbd1e510_.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x1800523A8 (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180053EA0 (-InternalAddRef@-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        HSTRING a6,
        __int64 a7,
        int a8,
        __int64 *a9)
{
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  ContentManagement *StringRawBuffer; // rax
  struct ContentManagement::ICreativeEventReportedCache **v17; // r8
  int EventCacheIfNeeded; // eax
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // esi
  volatile int *v26; // rdx
  HSTRING string; // [rsp+50h] [rbp-B0h] BYREF
  char v29; // [rsp+58h] [rbp-A8h]
  HSTRING v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+68h] [rbp-98h]
  HSTRING v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  int v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A4h] [rbp-5Ch]
  HSTRING v38; // [rsp+B0h] [rbp-50h] BYREF
  char v39; // [rsp+B8h] [rbp-48h]
  HSTRING v40; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v41[128]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  int v43; // [rsp+178h] [rbp+78h] BYREF
  __int64 v44; // [rsp+180h] [rbp+80h] BYREF

  v43 = a2;
  v38 = 0LL;
  v39 = 0;
  v32 = a3;
  v11 = Windows::Internal::String::Initialize(&v38, &v32);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_23;
  }
  string = 0LL;
  v29 = 0;
  v32 = a4;
  v13 = Windows::Internal::String::Initialize(&string, &v32);
  v12 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
LABEL_5:
    Windows::Internal::String::~String(&string);
    goto LABEL_23;
  }
  v30 = 0LL;
  v31 = 0;
  if ( a5 )
  {
    v32 = a5;
    v14 = Windows::Internal::String::Initialize(&v30, &v32);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v14);
LABEL_9:
      Windows::Internal::String::~String(&v30);
      goto LABEL_5;
    }
  }
  v32 = 0LL;
  v33 = 0;
  if ( a6 )
  {
    v40 = a6;
    v15 = Windows::Internal::String::Initialize(&v32, &v40);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v15);
LABEL_13:
      Windows::Internal::String::~String(&v32);
      goto LABEL_9;
    }
  }
  v44 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
  StringRawBuffer = (ContentManagement *)WindowsGetStringRawBuffer(string, 0LL);
  EventCacheIfNeeded = ContentManagement::GetEventCacheIfNeeded(StringRawBuffer, (unsigned __int16 *)&v44, v17);
  v12 = EventCacheIfNeeded;
  if ( EventCacheIfNeeded < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)EventCacheIfNeeded);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
    goto LABEL_13;
  }
  v19 = a7;
  v34 = a7;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v34);
  v20 = a1 - 48;
  v35 = a1 - 48;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(&v35);
  v21 = lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0(
          (__int64)v41,
          a1 - 48,
          &v35,
          (__int64)&v43,
          (__int64)&v38,
          (__int64)&string,
          (__int64)&v30,
          (__int64)&v32,
          &v34,
          &v44);
  v36 = 3;
  v37 = 130LL;
  v22 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___(v21);
  v25 = Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
          a9,
          (__int64)&v36,
          v23,
          v24,
          (void (__fastcall ***)(_QWORD, __int64))v22);
  lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_((__int64)v41);
  if ( v25 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v25);
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(
      v20,
      v26);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
  Windows::Internal::String::~String(&v32);
  Windows::Internal::String::~String(&v30);
  Windows::Internal::String::~String(&string);
  v12 = v25;
LABEL_23:
  Windows::Internal::String::~String(&v38);
  return v12;
}
