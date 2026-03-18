/*
 * XREFs of HMAssignmentLock @ 0x14009B8F0
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x14011B070 (xxxChangeForegroundKeyboardTable.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x14011B534 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x14011C5F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     ?LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z @ 0x140156AA0 (-LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x140173EB4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x140190850 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1401C506C (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140219A5C (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall HMAssignmentLock(__int64 **a1, int a2, int a3)
{
  __int64 *v4; // r14
  __int64 *v5; // rbx
  int v6; // esi
  __int64 UserSessionState; // rdi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v4 = a1[1];
  v5 = (__int64 *)**a1;
  **a1 = (__int64)v4;
  if ( !v5 || v5 != v4 )
  {
    if ( v4 )
    {
      v6 = (unsigned __int16)*(_DWORD *)v4;
      UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
      if ( (*(_BYTE *)(*(_QWORD *)(UserSessionState + 19920)
                     + (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 19928) * v6)
                     + 25LL) & 1) != 0 )
      {
        if ( a2 != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3545LL);
        UserSetLastError(87);
      }
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    }
    if ( v5 )
      return HMUnlockObject(v5);
  }
  return (__int64)v5;
}
