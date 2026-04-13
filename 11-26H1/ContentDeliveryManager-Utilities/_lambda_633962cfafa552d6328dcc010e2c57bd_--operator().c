/*
 * XREFs of _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800B76C4
 * Callers:
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B8390 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095C54 (--4-$com_ptr_t@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Backgrou.c)
 *     ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x1800B74CC (--$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ??$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@?$com_ptr_t@UIAlarmTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800B766C (--$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@-$com_ptr_t@UIAlarmTrigger@Ba.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800B7B6C (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_633962cfafa552d6328dcc010e2c57bd_::operator()(__int64 a1)
{
  int ActivationFactory; // eax
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, _QWORD); // r11
  __int64 v4; // r8
  int v5; // eax
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-39h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp-9h] BYREF
  __int128 v12; // [rsp+58h] [rbp-1h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+70h] [rbp+17h] BYREF
  __int64 v15; // [rsp+78h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+27h] BYREF
  __int64 v17; // [rsp+98h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v15 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Background.CustomSystemTrigger",
    0x38u,
    0x37u);
  ActivationFactory = RoGetActivationFactory(v17, &GUID_b20a4480_3ae6_4f5d_acab_19f8a325299e, &v15);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      228LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v10);
  v11 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v15 + 48LL);
  v11 = 0LL;
  v12 = 0LL;
  LODWORD(v12) = 2;
  v13 = 295000LL;
  BYTE4(v12) = (**(_BYTE **)(a1 + 24) & 8) != 0;
  v4 = **(unsigned int **)(a1 + 8);
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v12;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 295000LL;
  v5 = v3(v15, **(_QWORD **)a1, v4, **(_QWORD **)(a1 + 16));
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      228LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5,
      0);
  v14 = 0LL;
  v6 = wil::com_ptr_t<Windows::ApplicationModel::Background::IAlarmTrigger,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundTrigger>(
         &v11,
         &v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
    &v14,
    v6);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v12);
  v7 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v12,
         *(__int64 **)(a1 + 64));
  if ( (unsigned __int8)CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
                          **(_QWORD **)(a1 + 32),
                          **(_QWORD **)(a1 + 40),
                          v14,
                          **(_DWORD **)(a1 + 48),
                          **(_BYTE **)(a1 + 56) != 0,
                          (__int64)v7) )
  {
    v8 = **(_QWORD **)(a1 + 64);
    *(_QWORD *)&v12 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 32), 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
      (const wchar_t **)&v12,
      (const wchar_t *)(v8 + 8));
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v11);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v15);
  return 0LL;
}
