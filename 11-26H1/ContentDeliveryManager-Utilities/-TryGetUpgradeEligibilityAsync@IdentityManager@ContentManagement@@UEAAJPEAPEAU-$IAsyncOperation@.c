/*
 * XREFs of ?TryGetUpgradeEligibilityAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Z @ 0x18003C670
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ??$MakeAsyncOperation@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@W4SVUpgradeEligibilityState@ContentManagement@@VComTaskPoolHandler@23@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@@Z @ 0x18002636C (--$MakeAsyncOperation@V-$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Intern.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::IdentityManager::TryGetUpgradeEligibilityAsync(__int64 a1, _QWORD *a2)
{
  _lambda_62158d46a05af21ae3d227fe228597be_ *v2; // rax
  __int64 *v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+24h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = _lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
         (_lambda_62158d46a05af21ae3d227fe228597be_ *)&v10,
         (struct CreativeFramework::Actions::PinWebsiteToTaskbarService *)(a1 - 48));
  v7 = 3;
  v8 = 130LL;
  v4 = Windows::Internal::MakeAsyncOperation<Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,enum ContentManagement::SVUpgradeEligibilityState,Windows::Internal::ComTaskPoolHandler,_lambda_800e508e6e8d5695e8e6024fa20f4fcf_>(
         (__int64)&v7,
         v3,
         (__int64)v3,
         v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x282,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
