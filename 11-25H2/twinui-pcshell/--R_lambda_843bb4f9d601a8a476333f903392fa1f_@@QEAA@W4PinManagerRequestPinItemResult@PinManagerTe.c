/*
 * XREFs of ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x1805BFDAC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18028F0B0 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180290300 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     ?SetStopResult@?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180295784 (-SetStopResult@-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C70DC (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1805C5F90 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 */

__int64 __fastcall _lambda_843bb4f9d601a8a476333f903392fa1f_::operator()(__int64 *a1, int a2, int a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rbp
  LPCWSTR *v8; // rax
  LPWSTR FileNameW; // rdi
  _OWORD *v10; // rax
  __int64 v11; // rbx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+50h] [rbp-28h] BYREF

  v3 = a1 + 2;
  v5 = (__int64)(a1 + 6);
  if ( (unsigned __int64)a1[5] > 7 )
    v3 = (_QWORD *)*v3;
  v8 = (LPCWSTR *)PinRequestContext::RequestorImagePath(*a1, &v13);
  FileNameW = PathFindFileNameW(*v8);
  v10 = PinRequestContext::RequestorBestAvailableAppId(*a1, &v14);
  v15 = 0LL;
  v11 = *(_QWORD *)v10;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    v5,
    &v15);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
    *(_QWORD *)(v5 + 272),
    a3,
    0LL);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
  return PinManagerTelemetry::PinManagerRequestPinItem::Stop(v5, v11, FileNameW, v3, a2);
}
