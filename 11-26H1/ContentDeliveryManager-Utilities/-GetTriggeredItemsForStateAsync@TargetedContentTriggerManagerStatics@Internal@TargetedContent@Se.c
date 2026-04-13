/*
 * XREFs of ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007DC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002A370 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18002E774 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1800447B8 (-InternalAddRef@-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180045080 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_0f325790d88d3e0e1d8faff7704602cc___ @ 0x18007B21C (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc__0 @ 0x18007BA04 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--_lambda_0f325790d88d3e0e1d8faff7704602cc__0.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007BC30 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18007BC30.c)
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::__lambda_0f325790d88d3e0e1d8faff7704602cc_ @ 0x18007C33C (_lambda_0f325790d88d3e0e1d8faff7704602cc_--__lambda_0f325790d88d3e0e1d8faff7704602cc_.c)
 *     ??1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18007C704 (--1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18007D94C (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x18007F718 (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        __int64 *a5)
{
  __int64 v8; // rsi
  const wchar_t *StringRawBuffer; // rdi
  const wchar_t *v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // eax
  volatile int *v15; // rdx
  int v16; // edi
  volatile int *v17; // rdx
  volatile int *v18; // rdx
  HSTRING v19; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[12]; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v21; // [rsp+58h] [rbp-A8h] BYREF
  char v22; // [rsp+60h] [rbp-A0h]
  HSTRING v23; // [rsp+68h] [rbp-98h] BYREF
  char v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v26; // [rsp+80h] [rbp-80h]
  _QWORD v27[42]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[400]; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B8h] [rbp+2B8h]

  v19 = a2;
  *(_QWORD *)v20 = a3;
  *a5 = 0LL;
  Windows::Services::TargetedContent::Internal::GetCorrelationVector((char *)&v25, a4);
  v8 = v25;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v10 = WindowsGetStringRawBuffer(a2, 0LL);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"TriggerManagerGetTriggeredItemsForStateActivity");
  v27[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v27,
    v10,
    StringRawBuffer,
    (const char *)(v8 + 8));
  v21 = 0LL;
  v22 = 0;
  v11 = Windows::Internal::String::Initialize(&v21, &v19);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v11);
    Windows::Internal::String::~String(&v21);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::~TriggerManagerGetTriggeredItemsForStateActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v27);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    return v12;
  }
  v23 = 0LL;
  v24 = 0;
  v14 = Windows::Internal::String::Initialize(&v23, (HSTRING *)v20);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v14);
    Windows::Internal::String::~String(&v23);
    Windows::Internal::String::~String(&v21);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::~TriggerManagerGetTriggeredItemsForStateActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v27);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    return v12;
  }
  v19 = (HSTRING)(a1 - 40);
  Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::InternalAddRef(
    (__int64 *)&v19,
    v15);
  lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc__0(
    (__int64)v28,
    (volatile int *)(a1 - 40),
    (__int64 *)&v19,
    (__int64)&v21,
    (__int64)&v23,
    (__int64)v27,
    &v25);
  *(_DWORD *)v20 = 3;
  *(_QWORD *)&v20[4] = 130LL;
  v16 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_0f325790d88d3e0e1d8faff7704602cc___(
          (__int64)v20,
          a5);
  lambda_0f325790d88d3e0e1d8faff7704602cc_::__lambda_0f325790d88d3e0e1d8faff7704602cc_((__int64)v28);
  if ( v16 >= 0 )
  {
    if ( a1 != 40 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        a1 - 40,
        v17);
    Windows::Internal::String::~String(&v23);
    Windows::Internal::String::~String(&v21);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::~TriggerManagerGetTriggeredItemsForStateActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v27);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v16);
    if ( a1 != 40 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        a1 - 40,
        v18);
    Windows::Internal::String::~String(&v23);
    Windows::Internal::String::~String(&v21);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::~TriggerManagerGetTriggeredItemsForStateActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v27);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    return (unsigned int)v16;
  }
}
