/*
 * XREFs of ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x14006CFE8 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x14007F318 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     DestroyThreadsObjects @ 0x1400D0690 (DestroyThreadsObjects.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HandleInputDestDestruction @ 0x1400D0AC8 (HandleInputDestDestruction.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1400D0B3C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1400D1194 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x140116BE0 (-SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x14013A1DC (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1401A4FDC (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     PostEvent @ 0x14021BE38 (PostEvent.c)
 *     PostThreadEvent @ 0x14021BF58 (PostThreadEvent.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x140222A38 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x140222C88 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(AtomicExecutionCheck *a1, int a2, int a3)
{
  *(_BYTE *)a1 = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  AtomicExecutionCheck::Arm(a1, a2, a3);
  return a1;
}
