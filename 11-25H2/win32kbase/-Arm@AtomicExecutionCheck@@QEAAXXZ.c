/*
 * XREFs of ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40
 * Callers:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400395B0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     NtUserRegisterTouchPadCapable @ 0x14015C7F0 (NtUserRegisterTouchPadCapable.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018F9E8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140195480 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x1401A66A0 (-FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z.c)
 *     ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x1401A6E30 (-SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z @ 0x1401AC9F8 (-AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AD2C4 (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD4F4 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD64C (-Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x140204600 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021F290 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x14021F4D4 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall AtomicExecutionCheck::Arm(AtomicExecutionCheck *this, __int64 a2)
{
  __int64 CurrentThreadWin32Thread; // rax

  if ( !*(_BYTE *)this )
  {
    if ( !*(_QWORD *)W32GetUserSessionState(this, a2) || !(unsigned int)GET_USERCRIT_DISPOSITION() )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    *((_QWORD *)this + 1) = CurrentThreadWin32Thread;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
    *(_BYTE *)this = 1;
  }
}
