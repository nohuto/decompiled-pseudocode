/*
 * XREFs of HMAssignmentLock @ 0x1400F4780
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1400F3E98 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3EF0 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44B8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z @ 0x1400F4680 (-LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     rimDispatchCompleteFrames @ 0x1401342F4 (rimDispatchCompleteFrames.c)
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1401A6AE0 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F7170 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140212D78 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140215254 (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int *__fastcall HMAssignmentLock(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rdi
  int *v4; // rbx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = **(int ***)a1;
  **(_QWORD **)a1 = v3;
  if ( !v4 || v4 != (int *)v3 )
  {
    if ( v3 )
    {
      if ( (*(_BYTE *)(HMPheFromObjectWorker((int *)v3, a2) + 25) & 1) != 0 )
      {
        if ( v2 != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3524LL);
        UserSetLastError(87);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    }
    if ( v4 )
      return HMUnlockObject(v4, a2);
  }
  return v4;
}
