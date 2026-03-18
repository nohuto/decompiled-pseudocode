/*
 * XREFs of ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40
 * Callers:
 *     ?Clear@CLastWokenThread@@QEAAXXZ @ 0x1400CCAE4 (-Clear@CLastWokenThread@@QEAAXXZ.c)
 *     ?_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z @ 0x1400CE7C0 (-_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z.c)
 *     ?_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z @ 0x1400CFBFC (-_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1400CFD9C (-OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?OnDaemonTimer@LastWokenThread@@YAXXZ @ 0x1400D12C0 (-OnDaemonTimer@LastWokenThread@@YAXXZ.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14010AFBC (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401C93F0 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401D47B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401D49C4 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 */

__int64 __fastcall ForegroundBoost::SetForegroundPriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // rcx

  IsEnabledDeviceUsageNoInline = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
  v7 = *(_QWORD *)(a1 + 456);
  if ( IsEnabledDeviceUsageNoInline )
    return ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority(v7, a2, a3);
  else
    return ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old(v7, a1, a2, a3);
}
