/*
 * XREFs of ??$MakeAsyncOperation@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@W4SVUpgradeEligibilityState@ContentManagement@@VComTaskPoolHandler@23@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Z @ 0x18002636C
 * Callers:
 *     ?TryGetUpgradeEligibilityAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Z @ 0x18003C670 (-TryGetUpgradeEligibilityAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU-$IAsyncOperation@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?0V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@?$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@QEAA@$$QEAV_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Z @ 0x18002382C (--$-0V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@-$COperationLambdaVar@$0A@V_lambda_800e508e6e8.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@23@UINilDelegate@Internal@3@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@01@@Z @ 0x1800261D8 (--$MakeAsyncHelper@U-$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation<Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,enum ContentManagement::SVUpgradeEligibilityState,Windows::Internal::ComTaskPoolHandler,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax

  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v7 )
    v9 = Windows::Internal::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>(
           (__int64)v7,
           a4);
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Internal::INilDelegate,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<ContentManagement.SVUpgradeEligibilityState>",
           v8,
           v9);
}
