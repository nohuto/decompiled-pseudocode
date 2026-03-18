/*
 * XREFs of Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878
 * Callers:
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140166C10 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x140166E14 (-DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140168EE8 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InitializeProcessThreadGlobals@@YAJXZ @ 0x14017705C (-InitializeProcessThreadGlobals@@YAJXZ.c)
 *     ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A7DC0 (-DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 *     ?DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z @ 0x1401A80D0 (-DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z.c)
 *     ?DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A82C0 (-DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::operator() @ 0x1401B75B0 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--operator().c)
 * Callees:
 *     Feature_NTUserQoSSupportEx__private_IsEnabledFallback @ 0x1401A88B0 (Feature_NTUserQoSSupportEx__private_IsEnabledFallback.c)
 */

__int64 Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NTUserQoSSupportEx__private_featureState & 0x10) != 0 )
    return Feature_NTUserQoSSupportEx__private_featureState & 1;
  else
    return Feature_NTUserQoSSupportEx__private_IsEnabledFallback(
             (unsigned int)Feature_NTUserQoSSupportEx__private_featureState,
             3LL);
}
