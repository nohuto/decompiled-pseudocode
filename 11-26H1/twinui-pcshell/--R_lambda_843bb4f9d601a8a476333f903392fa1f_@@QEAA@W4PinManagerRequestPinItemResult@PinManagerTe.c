/*
 * XREFs of ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x1805E40B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180283A8C (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C05B0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?SetStopResult@?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1805E8F04 (-SetStopResult@-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$A.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1805E9D9C (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 */

__int64 __fastcall _lambda_843bb4f9d601a8a476333f903392fa1f_::operator()(__int64 *a1, int a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rbp
  LPCWSTR *v8; // rax
  LPWSTR FileNameW; // rdi
  _OWORD *v10; // rax
  __int64 v11; // rbx
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+48h] [rbp-30h] BYREF

  v3 = a1 + 2;
  v5 = (__int64)(a1 + 6);
  if ( (unsigned __int64)a1[5] > 7 )
    v3 = (_QWORD *)*v3;
  v8 = (LPCWSTR *)PinRequestContext::RequestorImagePath(*a1, &v14);
  FileNameW = PathFindFileNameW(*v8);
  v10 = PinRequestContext::RequestorBestAvailableAppId(*a1, &v15);
  v13 = 0LL;
  v11 = *(_QWORD *)v10;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    v5,
    &v13);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
    *(_QWORD *)(v5 + 272),
    a3,
    0LL);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  return PinManagerTelemetry::PinManagerRequestPinItem::Stop(v5, v11, FileNameW, v3, a2);
}
