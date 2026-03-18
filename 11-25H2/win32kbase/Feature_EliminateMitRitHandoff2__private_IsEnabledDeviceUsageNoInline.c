/*
 * XREFs of Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8
 * Callers:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 *     NtUserInjectGenericHidInput @ 0x14011EB50 (NtUserInjectGenericHidInput.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x140135908 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     rimDereferenceDev @ 0x1401382E4 (rimDereferenceDev.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     ?Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ @ 0x1401673A4 (-Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ.c)
 *     EnterMitRitHazardCrit @ 0x1401674D0 (EnterMitRitHazardCrit.c)
 *     LeaveMitRitHazardCrit @ 0x1401677E0 (LeaveMitRitHazardCrit.c)
 *     NtMITActivateInputProcessing @ 0x14016E560 (NtMITActivateInputProcessing.c)
 *     NtUserInitializeGenericHidInjection @ 0x140171340 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     NtUserRegisterManipulationThread @ 0x140173100 (NtUserRegisterManipulationThread.c)
 *     rimFreeSpecificDevFinal @ 0x14017E314 (rimFreeSpecificDevFinal.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     InputExtensibilityCalloutGuard @ 0x14018A3A0 (InputExtensibilityCalloutGuard.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x14018C0E0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x14018C610 (-GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ.c)
 *     NtUserRemoveInjectionDevice @ 0x14019B810 (NtUserRemoveInjectionDevice.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401AC1CC (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BDD90 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BFA20 (NtUserSetFeatureReportResponse.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1401D65E4 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMRemoveInjectionDevice @ 0x1401DBD60 (RIMRemoveInjectionDevice.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140205ED0 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x14020D188 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ActivateKSTInputProcessingHelper @ 0x140218E00 (ActivateKSTInputProcessingHelper.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 *     CloseWin32InputRelatedObHandles @ 0x14021C31C (CloseWin32InputRelatedObHandles.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x1401A7110 (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 */

__int64 Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EliminateMitRitHandoff2__private_featureState & 0x10) != 0 )
    return Feature_EliminateMitRitHandoff2__private_featureState & 1;
  else
    return Feature_EliminateMitRitHandoff2__private_IsEnabledFallback(
             (unsigned int)Feature_EliminateMitRitHandoff2__private_featureState,
             3LL);
}
