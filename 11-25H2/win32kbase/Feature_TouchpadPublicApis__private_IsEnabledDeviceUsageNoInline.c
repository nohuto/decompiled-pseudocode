/*
 * XREFs of Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D23B8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140127CEC (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x140127D6C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     IsPointerDeviceAccessible @ 0x140167190 (IsPointerDeviceAccessible.c)
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 *     ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x14018BB90 (-QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1401EA73C (RIMIDEValidateInjectionQpcCount.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140211630 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x140211DDC (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 * Callees:
 *     Feature_TouchpadPublicApis__private_IsEnabledFallback @ 0x1401A98C4 (Feature_TouchpadPublicApis__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadPublicApis__private_featureState & 0x10) != 0 )
    return Feature_TouchpadPublicApis__private_featureState & 1;
  else
    return Feature_TouchpadPublicApis__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadPublicApis__private_featureState,
             3LL);
}
