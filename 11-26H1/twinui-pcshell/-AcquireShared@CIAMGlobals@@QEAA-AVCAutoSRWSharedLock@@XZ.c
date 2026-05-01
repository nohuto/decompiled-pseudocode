/*
 * XREFs of ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x18018E910
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180190B84 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x1802DFB80 (-GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1802E2290 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1802E2620 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1802E4100 (-QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z.c)
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1802F1BF0 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 *     ?IsApplicationWindowPresented@CImmersiveApp@@UEAAHXZ @ 0x1802FE2F0 (-IsApplicationWindowPresented@CImmersiveApp@@UEAAHXZ.c)
 *     ?IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z @ 0x1802FE520 (-IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z.c)
 *     ?ShouldShowBackButton@CImmersiveApp@@UEAAHXZ @ 0x180300270 (-ShouldShowBackButton@CImmersiveApp@@UEAAHXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CIAMGlobals::AcquireShared(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(v2);
  return a2;
}
