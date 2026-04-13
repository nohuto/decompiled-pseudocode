/*
 * XREFs of _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x18004BEE8
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_ @ 0x18004C914 (Windows--Internal--COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows--Inte.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180055C50 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510____::_1_::dtor$2 @ 0x1800BA85D (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_cdeb3b86346b203bd3e87afb.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$7 @ 0x1800BAFDC (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$7.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002A370 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800452F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_(__int64 a1)
{
  __int64 v2; // rcx
  volatile int *v3; // rdx
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Windows::Internal::String::~String((HSTRING *)(a1 + 72));
  Windows::Internal::String::~String((HSTRING *)(a1 + 56));
  Windows::Internal::String::~String((HSTRING *)(a1 + 40));
  Windows::Internal::String::~String((HSTRING *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(
      v4,
      v3);
  }
}
