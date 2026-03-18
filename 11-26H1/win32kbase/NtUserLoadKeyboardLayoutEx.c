/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x14016CE40
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x14003B90C (ApiSetEditionGetProcessWindowStation.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x14011B590 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140156594 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        HKL a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  HKL KeyboardLayout; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  __int64 v25; // rdx
  char *ULong64FromUser; // r8
  ULONG64 v27; // rcx
  _OWORD *v28; // rcx
  _OWORD *v29; // rax
  __int64 v30; // rdx
  int ULongFromUser; // [rsp+70h] [rbp-6C8h]
  _BYTE v34[800]; // [rsp+A0h] [rbp-698h] BYREF
  _BYTE v35[800]; // [rsp+3C0h] [rbp-378h] BYREF
  unsigned __int16 v36[12]; // [rsp+6E0h] [rbp-58h] BYREF

  memset(v35, 0, 0x318uLL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v12, v11, v13);
  v15 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v15;
  KeyboardLayout = 0LL;
  if ( v15 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v16, v18);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_21;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation(v17);
  ULongFromUser = RtlReadULongFromUser(a6, v25);
  ULong64FromUser = (char *)RtlReadULong64FromUser(a6 + 8);
  if ( ((unsigned __int8)ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v27 = (ULONG64)&ULong64FromUser[(unsigned __int16)ULongFromUser + 2];
  if ( v27 <= (unsigned __int64)ULong64FromUser || v27 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)ULongFromUser > HIWORD(ULongFromUser) )
  {
    if ( (ULongFromUser & 1) == 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( (ULongFromUser & 1) != 0 )
  {
LABEL_18:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6525LL);
LABEL_19:
    ExRaiseAccessViolation();
  }
  if ( (int)RtlStringCchCopyNW(
              (char *)v36,
              9LL,
              ULong64FromUser,
              (unsigned __int64)(unsigned __int16)ULongFromUser >> 1) >= 0 )
  {
    if ( a4 )
    {
      memset(v34, 0, 0x318uLL);
      RtlCopyFromUser(v34, a4, 0x318uLL);
      v28 = v35;
      v29 = v34;
      v30 = 6LL;
      do
      {
        *v28 = *v29;
        v28[1] = v29[1];
        v28[2] = v29[2];
        v28[3] = v29[3];
        v28[4] = v29[4];
        v28[5] = v29[5];
        v28[6] = v29[6];
        v28 += 8;
        *(v28 - 1) = v29[7];
        v29 += 8;
        --v30;
      }
      while ( v30 );
      *v28 = *v29;
      *((_QWORD *)v28 + 2) = *((_QWORD *)v29 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v35,
                       v36,
                       a7,
                       a8);
  }
LABEL_21:
  UserSessionSwitchLeaveCritWithNonPaged(v21, v20, v22, v23);
  return KeyboardLayout;
}
