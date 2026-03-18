/*
 * XREFs of Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D5A60 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401B6FE8 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtMITSetInputDelegationMode @ 0x1401B9F60 (NtMITSetInputDelegationMode.c)
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x14021A1BC (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1402221FC (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 * Callees:
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x1401C6004 (Feature_ResponsiblePid__private_IsEnabledFallback.c)
 */

__int64 Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ResponsiblePid__private_featureState & 0x10) != 0 )
    return Feature_ResponsiblePid__private_featureState & 1;
  else
    return Feature_ResponsiblePid__private_IsEnabledFallback(
             (unsigned int)Feature_ResponsiblePid__private_featureState,
             3LL);
}
