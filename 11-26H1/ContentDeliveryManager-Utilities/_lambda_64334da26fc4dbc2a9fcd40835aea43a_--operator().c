/*
 * XREFs of _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x18006E844
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows::Internal::CNoResult_::Run @ 0x180070050 (Windows--Internal--COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows--Inte.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006CD58 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006E314 (--1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA.c)
 *     ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18006E3FC (--A-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180070A2C (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180070F90 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator()(__int64 *a1)
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
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v17);
  v17[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v17,
    v10,
    v7,
    v4);
  std::wstring::_Tidy(v14, 1, 0LL);
  std::wstring::_Tidy(v15, 1, 0LL);
  std::wstring::_Tidy(v16, 1, 0LL);
  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 72) + 8LL))(*(_QWORD *)(*a1 + 72));
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v17);
    result = 0LL;
  }
  catch ( ... )
  {
    v13 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x69,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v11);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *)v17);
    return v13;
  }
  return result;
}
