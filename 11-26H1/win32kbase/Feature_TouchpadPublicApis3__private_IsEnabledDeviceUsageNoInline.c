/*
 * XREFs of Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401CD3E0
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140131C1C (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x140131C9C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     IsPointerDeviceAccessible @ 0x14016E3D0 (IsPointerDeviceAccessible.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1401730D8 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x140209818 (RIMIDEValidateInjectionQpcCount.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140218F28 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 * Callees:
 *     Feature_TouchpadPublicApis3__private_IsEnabledFallback @ 0x1401CD41C (Feature_TouchpadPublicApis3__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadPublicApis3__private_featureState & 0x10) != 0 )
    return Feature_TouchpadPublicApis3__private_featureState & 1;
  else
    return Feature_TouchpadPublicApis3__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadPublicApis3__private_featureState,
             3LL);
}
