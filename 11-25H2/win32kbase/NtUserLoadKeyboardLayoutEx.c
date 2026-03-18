/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1401BEF40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140048E08 (ApiSetEditionGetProcessWindowStation.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x14011C890 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011DBB8 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  ULONG64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *UserSessionState; // rsi
  HKL KeyboardLayout; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  struct tagWINDOWSTATION *ProcessWindowStation; // rsi
  int v21; // ecx
  char *v22; // r8
  ULONG64 v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int64 v26; // rdx
  _BYTE v29[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v30[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v31[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v11 = a6;
  memset(v30, 0, 0x318uLL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v13, v12);
  KeyboardLayout = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v16 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v16 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v17 = v16;
  UserSessionState[3] = v16;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v17 )
      goto LABEL_9;
    *(_BYTE *)(v17 + 1708) = 1;
  }
  if ( v17 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v18);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_29;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  if ( a6 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v21 = *(_DWORD *)v11;
  v22 = *(char **)(v11 + 8);
  if ( ((unsigned __int8)v22 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v23 = (ULONG64)&v22[(unsigned __int16)v21 + 2];
  if ( v23 <= (unsigned __int64)v22 || v23 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v21 > (unsigned __int16)HIWORD(*(_DWORD *)v11) )
  {
    if ( (v21 & 1) == 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( (v21 & 1) != 0 )
  {
LABEL_26:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6387);
LABEL_27:
    ExRaiseAccessViolation();
  }
  if ( (int)RtlStringCchCopyNW((char *)v31, 9LL, v22, (unsigned __int64)(unsigned __int16)v21 >> 1) >= 0 )
  {
    if ( a4 )
    {
      memset(v29, 0, sizeof(v29));
      RtlCopyFromUser(v29, a4, 0x318uLL);
      v24 = v30;
      v25 = v29;
      v26 = 6LL;
      do
      {
        *v24 = *v25;
        v24[1] = v25[1];
        v24[2] = v25[2];
        v24[3] = v25[3];
        v24[4] = v25[4];
        v24[5] = v25[5];
        v24[6] = v25[6];
        v24 += 8;
        *(v24 - 1) = v25[7];
        v25 += 8;
        --v26;
      }
      while ( v26 );
      *v24 = *v25;
      *((_QWORD *)v24 + 2) = *((_QWORD *)v25 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v30,
                       v31,
                       a7,
                       a8);
  }
LABEL_29:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v19);
  return KeyboardLayout;
}
