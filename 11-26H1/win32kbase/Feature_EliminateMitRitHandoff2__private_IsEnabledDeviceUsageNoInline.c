/*
 * XREFs of Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x14005E0A4 (RIMIDEAdoptOrphanedRimDevs.c)
 *     NtUserInjectGenericHidInput @ 0x14005F280 (NtUserInjectGenericHidInput.c)
 *     ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x14005FAD0 (-GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14010BAD8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     rimDereferenceDev @ 0x14013217C (rimDereferenceDev.c)
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1401B83E0 (NtUserRemoveInjectionDevice.c)
 *     rimFreeSpecificDevFinal @ 0x1401BB4C0 (rimFreeSpecificDevFinal.c)
 *     EnterMitRitHazardCrit @ 0x1401C4E90 (EnterMitRitHazardCrit.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401C4F24 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     LeaveMitRitHazardCrit @ 0x1401C4FA0 (LeaveMitRitHazardCrit.c)
 *     InputExtensibilityCalloutGuard @ 0x1401C6240 (InputExtensibilityCalloutGuard.c)
 *     NtMITActivateInputProcessing @ 0x1401E09C0 (NtMITActivateInputProcessing.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     NtUserRegisterManipulationThread @ 0x1401E8180 (NtUserRegisterManipulationThread.c)
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 *     RIMRemoveInjectionDevice @ 0x1402023F0 (RIMRemoveInjectionDevice.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1402198D0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ActivateKSTInputProcessingHelper @ 0x14021DCD0 (ActivateKSTInputProcessingHelper.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 *     CloseWin32InputRelatedObHandles @ 0x14021FF40 (CloseWin32InputRelatedObHandles.c)
 *     InitCreateUserCrit @ 0x1402F1D28 (InitCreateUserCrit.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x1401CAB78 (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
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
