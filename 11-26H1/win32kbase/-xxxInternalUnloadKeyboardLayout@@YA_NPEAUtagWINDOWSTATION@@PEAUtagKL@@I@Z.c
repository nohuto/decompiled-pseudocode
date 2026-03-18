/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxFreeKeyboardLayouts @ 0x140186BE0 (xxxFreeKeyboardLayouts.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401E9E40 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HKLtoPKL @ 0x1400870A0 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x14011B534 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x14011C484 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxWindowEvent @ 0x14011CB00 (xxxWindowEvent.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAA@XZ @ 0x14016B7DC (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14016C394 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ @ 0x140189FA0 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ.c)
 *     ?UnloadKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x1401A15B8 (-UnloadKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x1401B58C4 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1401BEEF8 (ApiSetEditionNotifyShellLanguageHook.c)
 */

char __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, signed int a3)
{
  struct tagTHREADINFO *v6; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 UserSessionState; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  ULONG_PTR v25; // rax
  __int64 v26; // rdx
  struct tagKL *v27; // rdx
  int v28; // r8d
  __int64 v29; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v31[2]; // [rsp+40h] [rbp-28h] BYREF

  v6 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( a2 == *(struct tagKL **)(W32GetUserSessionState(v8, v7, v9) + 14264) && a3 >= 0 )
    return 0;
  BugCheckParameter3[0] = *((_QWORD *)v6 + 56);
  *((_QWORD *)v6 + 56) = BugCheckParameter3;
  BugCheckParameter3[1] = (ULONG_PTR)a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  InputTraceLogging::Keyboard::UnloadKeyboardLayout(a2);
  if ( a2 == *(struct tagKL **)(W32GetUserSessionState(v12, v11, v13) + 14232) )
  {
    UserSessionState = W32GetUserSessionState(v15, v14, v16);
    HMAssignmentUnlock((__int64 *)(UserSessionState + 14232));
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline()
    && a2 == *(struct tagKL **)(W32GetUserSessionState(v19, v18, v20) + 14240) )
  {
    v22 = W32GetUserSessionState(v21, v18, v20);
    HMAssignmentUnlock((__int64 *)(v22 + 14240));
  }
  HMMarkObjectDestroy(a2, v18, v20);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v6 + 59) == a2 )
  {
    v25 = HKLtoPKL((__int64)v6, 1LL);
    if ( v25 )
    {
      v31[0] = *((_QWORD *)v6 + 56);
      *((_QWORD *)v6 + 56) = v31;
      v31[1] = v25;
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      xxxInternalActivateKeyboardLayout((__int64)a1, v25, a3, 0LL);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v31, v26);
    }
  }
  if ( GetKbdLayoutListHead(a1, v23, v24) == a2 )
  {
    v27 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v27 && !LockKbdLayoutListHead(a1, v27, v28) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3164);
  }
  Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>(BugCheckParameter3, (__int64)v27);
  xxxWindowEvent(0x80000000LL, 0LL, 0, 0, 0);
  ApiSetEditionNotifyShellLanguageHook(v6, 0LL, 0LL);
  Win32HMThreadLockBase<tagKL,0,1>::~Win32HMThreadLockBase<tagKL,0,1>(BugCheckParameter3, v29);
  return 1;
}
