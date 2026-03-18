/*
 * XREFs of Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1400744BC
 * Callers:
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BD9C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BDD0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C390 (-ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C3E0 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1401F7D40 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetYieldPercentage @ 0x1401F86A0 (DxgkGetYieldPercentage.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403FF3C8 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 * Callees:
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback @ 0x1400744F8 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback.c)
 */

__int64 Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnumAdaptersPerfImprovement__private_featureState & 0x10) != 0 )
    return Feature_EnumAdaptersPerfImprovement__private_featureState & 1;
  else
    return Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback(
             (unsigned int)Feature_EnumAdaptersPerfImprovement__private_featureState,
             3LL);
}
