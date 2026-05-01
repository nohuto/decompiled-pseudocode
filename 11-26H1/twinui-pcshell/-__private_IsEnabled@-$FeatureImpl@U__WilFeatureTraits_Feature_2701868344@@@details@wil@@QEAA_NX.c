/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAA_NXZ @ 0x1804B7634
 * Callers:
 *     ??1CImpWorkerWndProc@@MEAA@XZ @ 0x1804B6F74 (--1CImpWorkerWndProc@@MEAA@XZ.c)
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B707C (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z @ 0x1804B7164 (-CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z.c)
 *     ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B74A0 (-ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804B7670 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804B7264 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804B74E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2701868344>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2701868344>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2701868344>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
