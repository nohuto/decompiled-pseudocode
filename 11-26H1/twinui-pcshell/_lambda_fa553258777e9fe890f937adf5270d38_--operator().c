/*
 * XREFs of _lambda_fa553258777e9fe890f937adf5270d38_::operator() @ 0x18048C44C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_fcce8a0719a78a787cd0802763ff3759___::Invoke @ 0x18048D0D0 (CAsyncCallbackWithLambda__lambda_fcce8a0719a78a787cd0802763ff3759___--Invoke.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@666@Z @ 0x18000A308 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_18000A308.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x18000A4C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x18048EBB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_fa553258777e9fe890f937adf5270d38_::operator()(unsigned int *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // r15
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v11; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v13[8]; // [rsp+70h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 408LL);
  v3 = a1 + 2;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)v2 + 56LL))(
      v2,
      (unsigned int)*v3,
      a1[3],
      a1[4],
      a1[5]);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
    {
      v4 = GazeUITraceLogging::Provider();
      if ( *(_DWORD *)v4 > 5u )
      {
        v11 = "AccessibilityExperienceManager::SetWindowPosition";
        v12 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v4,
          (__int64)&unk_1808112E8,
          v5,
          v6,
          (__int64)&v12,
          &v11);
      }
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
  {
    v7 = GazeUITraceLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      LODWORD(v11) = *v3;
      v12 = (__int64)"AccessibilityExperienceManager::SetWindowPosition - Handled";
      v13[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        (__int64)&unk_180811337,
        v8,
        v9,
        (__int64)v13,
        &v12);
    }
  }
  return 0LL;
}
