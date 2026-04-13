/*
 * XREFs of ??$?0V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@?$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@QEAA@$$QEAV_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Z @ 0x18002382C
 * Callers:
 *     ??$MakeAsyncOperation@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@W4SVUpgradeEligibilityState@ContentManagement@@VComTaskPoolHandler@23@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Z @ 0x18002636C (--$MakeAsyncOperation@V-$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Intern.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180021C08 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *(_QWORD *)(a1 + 8) = *a2;
  *(_QWORD *)a1 = &Windows::Internal::COperationLambdaVar<0,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::`vftable';
  *(_DWORD *)(a1 + 16) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 24),
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *(_DWORD *)(a1 + 16) = 0;
  return a1;
}
