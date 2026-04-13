/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800B7B6C
 * Callers:
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800B76C4 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B8198 (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095C54 (--4-$com_ptr_t@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Backgrou.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___ @ 0x1800B7268 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7.c)
 *     ??$query@UIBackgroundCondition@Background@ApplicationModel@Windows@@@?$com_ptr_t@UISystemCondition@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundCondition@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800B7614 (--$query@UIBackgroundCondition@Background@ApplicationModel@Windows@@@-$com_ptr_t@UISystemConditi.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800B84D0 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 *a6)
{
  std::_Ref_count_base *v10; // rcx
  _QWORD *v12; // rax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int ActivationFactory; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rax
  int v24; // eax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64, _QWORD); // rsi
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // rcx
  int v28; // eax
  __int64 *v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 *v34; // rax
  int v35; // eax
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, __int64, _QWORD); // rdi
  __int64 (__fastcall ***v38)(_QWORD, GUID *, _QWORD *); // rcx
  int v39; // eax
  __int64 *v40; // rax
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  std::_Ref_count_base *v44; // rcx
  int v45; // [rsp+20h] [rbp-69h]
  char v46; // [rsp+30h] [rbp-59h] BYREF
  __int64 *v47; // [rsp+38h] [rbp-51h] BYREF
  __int64 *v48; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v49)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-41h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp-39h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp-31h] BYREF
  __int64 *v52; // [rsp+60h] [rbp-29h] BYREF
  __int64 v53[2]; // [rsp+68h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-11h] BYREF
  __int64 v55; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  v53[1] = (__int64)a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v46 = 0;
  hstringHeader.Reserved.Reserved1 = &v46;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = &StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___((__int64)&hstringHeader);
  if ( v46 )
  {
    if ( (unsigned int)(a5 - 1) > 1 )
    {
      v10 = (std::_Ref_count_base *)a6[1];
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      return 0;
    }
    if ( a5 == 1 )
    {
      v12 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &hstringHeader,
              a6);
      CreativeFramework::CommonHelper::UnregisterTask(a1, v12);
    }
  }
  v48 = 0LL;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
    0x3Au,
    0x39u);
  v48 = 0LL;
  v47 = 0LL;
  v13 = RoActivateInstance(v55, &v47);
  if ( v13 < 0 )
    goto LABEL_12;
  v14 = memcmp_0(&GUID_0351550e_3e64_4572_a93a_84075a37c917, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL);
  v15 = (__int64)v47;
  if ( v14 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v47)(
            v47,
            &GUID_0351550e_3e64_4572_a93a_84075a37c917,
            &v48);
    (*(void (__fastcall **)(__int64 *))(*v47 + 16))(v47);
LABEL_12:
    v15 = (__int64)v48;
    goto LABEL_13;
  }
  v48 = v47;
LABEL_13:
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      130LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v13,
      v45);
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v15 + 80LL))(v15, a1);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      131LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v16,
      v45);
  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v48 + 48))(v48, a2);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      132LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v17,
      v45);
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v48 + 64))(v48, a3);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      133LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v18,
      v45);
  v52 = 0LL;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Background.SystemCondition",
    0x34u,
    0x33u);
  ActivationFactory = RoGetActivationFactory(v55, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v52);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      138LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v45);
  v49 = 0LL;
  v47 = 0LL;
  if ( (a4 & 9) != 0 )
  {
    v20 = *v52;
    v49 = 0LL;
    if ( (a4 & 4) != 0 || (v21 = 7LL, (a4 & 1) != 0) )
      v21 = 3LL;
    v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v20 + 48))(v52, v21, &v49);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        148LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v22,
        v45);
    v23 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v49,
            &StringRawBuffer);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      (__int64 *)&v47,
      v23);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
    v24 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v48 + 72))(v48, v47);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        150LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v24,
        v45);
  }
  if ( (a4 & 2) != 0 )
  {
    v25 = (__int64)v52;
    v26 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*v52 + 48);
    v27 = v49;
    v49 = 0LL;
    if ( v27 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v27)[2])(v27);
    v28 = v26(v25, 5LL, &v49);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        157LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v28,
        v45);
    v29 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v49,
            &StringRawBuffer);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      (__int64 *)&v47,
      v29);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
    v30 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v48 + 72))(v48, v47);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        159LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v30,
        v45);
  }
  if ( (a4 & 0x10) != 0 )
  {
    StringRawBuffer = 0LL;
    v55 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.ApplicationModel.Background.CSystemCondition",
      0x35u,
      0x34u);
    v31 = RoGetActivationFactory(v55, &GUID_6f989a99_770e_4539_840b_ec97284926d5, &StringRawBuffer);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        167LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v31,
        v45);
    v51 = 0LL;
    v32 = *(_QWORD *)StringRawBuffer;
    v51 = 0LL;
    v33 = (*(__int64 (__fastcall **)(PCWSTR, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v32 + 48))(
            StringRawBuffer,
            7LL,
            0LL,
            &v51);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        173LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v33,
        v45);
    v34 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v51,
            &hstringHeader);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      (__int64 *)&v47,
      v34);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&hstringHeader);
    v35 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v48 + 72))(v48, v47);
    if ( v35 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        175LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v35,
        v45);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v51);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
  }
  if ( (a4 & 0x20) == 0 )
  {
    v36 = (__int64)v52;
    v37 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*v52 + 48);
    v38 = v49;
    v49 = 0LL;
    if ( v38 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v38)[2])(v38);
    v39 = v37(v36, 8LL, &v49);
    if ( v39 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        183LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v39,
        v45);
    v40 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v49,
            &hstringHeader);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      (__int64 *)&v47,
      v40);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&hstringHeader);
    v41 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v48 + 72))(v48, v47);
    if ( v41 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        185LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v41,
        v45);
  }
  v53[0] = 0LL;
  v42 = *v48;
  v53[0] = 0LL;
  v43 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v42 + 96))(v48, v53);
  if ( v43 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      190LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v43,
      v45);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v53);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v47);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v49);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v52);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v48);
  v44 = (std::_Ref_count_base *)a6[1];
  if ( v44 )
    std::_Ref_count_base::_Decref(v44);
  return 1;
}
