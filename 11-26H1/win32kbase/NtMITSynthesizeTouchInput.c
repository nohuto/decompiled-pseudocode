/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1401E1820
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     SynthesizeMitTouchInput @ 0x140220114 (SynthesizeMitTouchInput.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(void *Src)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edi
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  void **v18; // [rsp+30h] [rbp-B78h] BYREF
  _BYTE Srca[1464]; // [rsp+38h] [rbp-B70h] BYREF
  _BYTE v20[1456]; // [rsp+5F0h] [rbp-5B8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v18, "MITSynthesizeTouchInput", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2, v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  v10 = 0;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( IsInputThread(v8, v7, v9) )
  {
    memset(Srca, 0, 0x5B0uLL);
    RtlCopyFromUser(Srca, Src, 0x5B0uLL);
    memmove(v20, Srca, 0x5B0uLL);
    if ( (unsigned __int8)SynthesizeMitTouchInput(v20) )
    {
      v10 = 1;
      goto LABEL_9;
    }
    v11 = 5023;
  }
  else
  {
    v11 = 5;
  }
  UserSetLastError(v11);
LABEL_9:
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v18,
    v16);
  return v10;
}
