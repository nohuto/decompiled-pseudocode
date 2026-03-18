/*
 * XREFs of Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x140065200 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D4BC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007EE6C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     NtMITSetInputDelegationMode @ 0x14016E740 (NtMITSetInputDelegationMode.c)
 *     NtUserCheckProcessSession @ 0x14016ECA0 (NtUserCheckProcessSession.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140214564 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x14021E9D0 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 * Callees:
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x1401AA380 (Feature_ResponsiblePid__private_IsEnabledFallback.c)
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
