/*
 * XREFs of NtUserDownlevelTouchpad @ 0x140161B60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x140157984 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, void *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // edi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // ecx
  __int64 v18; // rdx
  void **v20[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v20, "DownlevelTouchpad", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4, v6);
  v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v8;
  v11 = 0;
  if ( v8 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !a1
    || HIWORD(a1)
    || (unsigned __int16)a1 == 1
    || (v21 = 0LL, RtlCopyFromUser(&v21, a2, 8uLL), v22 = v21, (unsigned int)v21 > 2) )
  {
    v17 = 87;
    goto LABEL_11;
  }
  v12 = CPTPProcessor::xxxDownlevelInput((unsigned __int16)a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v22);
  if ( v12 < 0 )
  {
    v17 = RtlNtStatusToDosError(v12);
LABEL_11:
    UserSetLastError(v17);
    goto LABEL_12;
  }
  v11 = 1;
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged(v14, v13, v15, v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v20,
    v18);
  return v11;
}
