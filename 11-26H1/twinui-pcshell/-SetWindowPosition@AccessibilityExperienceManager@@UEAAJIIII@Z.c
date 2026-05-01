/*
 * XREFs of ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x18048DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@666@Z @ 0x18000A148 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U3@U-$__ea_18000A148.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___ @ 0x18048AE38 (CreationThreadDispatcher--RunAsync__lambda_fa553258777e9fe890f937adf5270d38___.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x18048EBB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibilityExperienceManager::SetWindowPosition(
        AccessibilityExperienceManager *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  char *v5; // rdi
  __int64 v7; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v17; // [rsp+78h] [rbp-39h] BYREF
  __int64 v18; // [rsp+80h] [rbp-31h] BYREF
  char *v19; // [rsp+90h] [rbp-21h] BYREF
  int v20; // [rsp+98h] [rbp-19h]
  int v21; // [rsp+9Ch] [rbp-15h]
  int v22; // [rsp+A0h] [rbp-11h]
  unsigned int v23; // [rsp+A4h] [rbp-Dh]
  _DWORD v24[4]; // [rsp+B0h] [rbp-1h] BYREF

  v5 = (char *)this - 144;
  v24[0] = a2;
  v7 = *((_QWORD *)this + 29);
  v24[1] = a4;
  v24[2] = a3;
  v24[3] = a5;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 64LL))(v7, v24);
    v11 = *((_QWORD *)this + 18);
    v19 = v5;
    v20 = a2;
    v21 = a3;
    v22 = a4;
    v23 = a5;
    CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___(v11, (volatile int *)&v19);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
  {
    v13 = GazeUITraceLogging::Provider(v12);
    if ( *(_DWORD *)v13 > 5u )
    {
      v17 = "AccessibilityExperienceManager::SetWindowPosition - Triggered";
      v18 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        (__int64)&unk_18081138F,
        v14,
        v15,
        (__int64)&v18,
        &v17);
    }
  }
  return 0LL;
}
