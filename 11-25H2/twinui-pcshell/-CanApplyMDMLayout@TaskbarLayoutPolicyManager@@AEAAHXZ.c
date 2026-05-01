/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18016B184
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18016AD40 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031EA3C (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060BF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4.c)
 *     wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&_ @ 0x1800A5A14 (wil--details--RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__-_.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyMDMLayout(
        TaskbarLayoutPolicyManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v7; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  TaskbarLayoutPolicyManager *v9; // [rsp+50h] [rbp+8h] BYREF

  v6[2] = 0LL;
  v6[0] = retaddr;
  v6[1] = "pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp";
  v7 = 292;
  v9 = this;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MdmSupportForEdu>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037____(v4, (__int64)v6, (__int64)&v9);
}
