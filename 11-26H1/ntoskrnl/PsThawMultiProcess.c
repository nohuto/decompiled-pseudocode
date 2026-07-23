/*
 * XREFs of PsThawMultiProcess @ 0x1405130EC
 * Callers:
 *     NtChangeProcessState @ 0x1407F71F0 (NtChangeProcessState.c)
 *     PspDeleteProcessStateChange @ 0x1407F86C0 (PspDeleteProcessStateChange.c)
 *     DbgkpResumeProcess @ 0x1409CEF0C (DbgkpResumeProcess.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 * Callees:
 *     KeThawMultiProcess @ 0x140310998 (KeThawMultiProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     PspResumeProcessVirtualTimers @ 0x14061A0F4 (PspResumeProcessVirtualTimers.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     PspWow64GetSharedInformation @ 0x1409E6F34 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1409E6F4C (PsWow64GetProcessNtdllType.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF3F18 (EtwTiLogSuspendResumeProcess.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x140B00A5C (PspPostFreezeOperationWorkEnqueue.c)
 *     EtwTraceFreezeThawProcess @ 0x140B13690 (EtwTraceFreezeThawProcess.c)
 *     VslUpdateFreezeTimeBias @ 0x140B26194 (VslUpdateFreezeTimeBias.c)
 */

__int64 __fastcall PsThawMultiProcess(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r15
  __int64 ULong64FromUser; // rax
  unsigned int ProcessNtdllType; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // ebx

  v4 = a3;
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    v8 = 0LL;
    PspLockProcessExclusive(a1, (__int64)CurrentThread, a3, a4);
    if ( *(_QWORD *)(a1 + 1584) )
    {
      v8 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 1584);
      *(_QWORD *)(a1 + 1584) = 0LL;
      *(_QWORD *)(a1 + 1680) += v8;
    }
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v8);
    }
    else if ( (*(_DWORD *)(a1 + 500) & 0x40000008) == 0 )
    {
      ULong64FromUser = RtlReadULong64FromUser(stru_140FC11F0.KernelShadowStackInitial);
      RtlWriteULong64ToUser(stru_140FC11F0.KernelShadowStackInitial, ULong64FromUser + v8);
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        v11 = *(_QWORD *)(PspWow64GetSharedInformation(ProcessNtdllType) + 64);
        v12 = RtlReadULong64FromUser(v11);
        RtlWriteULong64ToUser(v11, v12 + v8);
      }
    }
    PspResumeProcessVirtualTimers(a1);
  }
  result = KeThawMultiProcess(a1, a2, v4);
  v14 = result;
  if ( (_DWORD)result == v4 && (*(_DWORD *)(a1 + 1532) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( a2 )
  {
    if ( (unsigned __int8)Win32kAsyncProcessFreezeThawSupportIsActive() && (*(_DWORD *)(a1 + 500) & 8) == 0 )
      PspPostFreezeOperationWorkEnqueue(a1);
    result = DWORD2(PerfGlobalGroupMask);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v14 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
