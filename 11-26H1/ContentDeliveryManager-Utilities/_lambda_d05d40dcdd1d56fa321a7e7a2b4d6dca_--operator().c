/*
 * XREFs of _lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator() @ 0x18006EB78
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::Run @ 0x1800700D0 (Windows--Internal--COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca___ea_1800700D0.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006CCA0 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18006CCA0.c)
 *     ??1ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006E340 (--1ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18006E3FC (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ?StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180070B94 (-StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180070EA0 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  const unsigned __int16 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  const unsigned __int16 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  const unsigned __int16 *v10; // rbx
  const char *v11; // r9
  __int64 result; // rax
  unsigned int v13; // [rsp+20h] [rbp-1D8h]
  wchar_t v14[16]; // [rsp+28h] [rbp-1D0h] BYREF
  wchar_t v15[16]; // [rsp+48h] [rbp-1B0h] BYREF
  wchar_t v16[20]; // [rsp+68h] [rbp-190h] BYREF
  _QWORD v17[42]; // [rsp+90h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v2 = *a1;
  std::wstring::wstring((__int64)v16);
  v3 = std::map<std::wstring,std::wstring>::operator[]((__int64 *)(v2 + 88), v16);
  v4 = (const unsigned __int16 *)v3;
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v4 = *(const unsigned __int16 **)v3;
  v5 = *a1;
  std::wstring::wstring((__int64)v15);
  v6 = std::map<std::wstring,std::wstring>::operator[]((__int64 *)(v5 + 88), v15);
  v7 = (const unsigned __int16 *)v6;
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v7 = *(const unsigned __int16 **)v6;
  v8 = *a1;
  std::wstring::wstring((__int64)v14);
  v9 = std::map<std::wstring,std::wstring>::operator[]((__int64 *)(v8 + 88), v14);
  v10 = (const unsigned __int16 *)v9;
  if ( *(_QWORD *)(v9 + 24) >= 8uLL )
    v10 = *(const unsigned __int16 **)v9;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"ActionRevertedActivity");
  v17[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)v17,
    v10,
    v7,
    v4);
  std::wstring::_Tidy(v14, 1, 0LL);
  std::wstring::_Tidy(v15, 1, 0LL);
  std::wstring::_Tidy(v16, 1, 0LL);
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 72) + 16LL))(*(_QWORD *)(*a1 + 72));
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::~ActionRevertedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)v17);
    result = 0LL;
  }
  catch ( ... )
  {
    v13 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x80,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v11);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::~ActionRevertedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *)v17);
    return v13;
  }
  return result;
}
