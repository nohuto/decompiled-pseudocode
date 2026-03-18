/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1401220D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D22F0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *UserSessionState; // rsi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  ULONG v13; // ecx
  __int64 *v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v15, "DownlevelTouchpad", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4);
  v8 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v7) = 1;
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v7);
  }
  v10 = v9;
  UserSessionState[3] = v9;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v10 )
      goto LABEL_9;
    *(_BYTE *)(v10 + 1708) = 1;
  }
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  v17 = 0LL;
  if ( !a1
    || HIWORD(a1)
    || (unsigned __int16)a1 == 1
    || (v16 = 0LL, RtlCopyFromUser(&v16, a2, 8uLL), v17 = v16, (unsigned int)v16 > 2) )
  {
    v13 = 87;
    goto LABEL_17;
  }
  v11 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v17);
  if ( v11 < 0 )
  {
    v13 = RtlNtStatusToDosError(v11);
LABEL_17:
    UserSetLastError(v13);
    goto LABEL_18;
  }
  v8 = 1;
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v15);
  return v8;
}
