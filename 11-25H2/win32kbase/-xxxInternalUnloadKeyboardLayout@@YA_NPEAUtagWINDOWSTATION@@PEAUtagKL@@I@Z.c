/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxFreeKeyboardLayouts @ 0x14014C3BC (xxxFreeKeyboardLayouts.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401C1180 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x14009EA20 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ @ 0x14009EC84 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009ECE8 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     HKLtoPKL @ 0x14009F540 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1400F3E98 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x140110498 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxWindowEvent @ 0x1401455A4 (xxxWindowEvent.c)
 *     ?UnloadKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x14015DDD8 (-UnloadKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x140196168 (ApiSetEditionNotifyShellLanguageHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x140213188 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, signed int a3)
{
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  struct tagKL *v21; // rdx
  _QWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-28h] BYREF

  v6 = PtiCurrent();
  if ( a2 == *(struct tagKL **)(W32GetUserSessionState(v8, v7) + 14272) && a3 >= 0 )
    return 0;
  v22[0] = *((_QWORD *)v6 + 57);
  *((_QWORD *)v6 + 57) = v22;
  v22[1] = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  InputTraceLogging::Keyboard::UnloadKeyboardLayout(a2);
  if ( a2 == *(struct tagKL **)(W32GetUserSessionState(v11, v10) + 14240) )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    HMAssignmentUnlock((__int64 *)(UserSessionState + 14240));
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline()
    && a2 == *(struct tagKL **)(W32GetUserSessionState(v16, v15) + 14248) )
  {
    v18 = W32GetUserSessionState(v17, v15);
    HMAssignmentUnlock((__int64 *)(v18 + 14248));
  }
  HMMarkObjectDestroy(a2, v15);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v6 + 60) == a2 )
  {
    v20 = HKLtoPKL((__int64)v6, 1LL);
    if ( v20 )
    {
      v23[0] = *((_QWORD *)v6 + 57);
      *((_QWORD *)v6 + 57) = v23;
      v23[1] = v20;
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      xxxInternalActivateKeyboardLayout((__int64)a1, v20, a3, 0LL);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>((ULONG_PTR)v23);
    }
  }
  if ( GetKbdLayoutListHead(a1, v19) == a2 )
  {
    v21 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v21 && !LockKbdLayoutListHead(a1, v21) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3164);
  }
  Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>(v22);
  xxxWindowEvent(0x80000000LL, 0LL, 0, 0, 0);
  ApiSetEditionNotifyShellLanguageHook((__int64)v6, 0LL, 0);
  Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v22);
  return 1;
}
