/*
 * XREFs of NtTerminateProcess @ 0x140B812E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeForceResumeThread @ 0x140310AFC (KeForceResumeThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetProcessCreateTimeQuadPart @ 0x14047A0F0 (PsGetProcessCreateTimeQuadPart.c)
 *     PsGetProcessStartKey @ 0x14047D210 (PsGetProcessStartKey.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140618E90 (Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateProcess @ 0x14094A8D8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x140B01D40 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS v5; // ebx
  __int64 Process; // rdi
  char PreviousMode; // r15
  NTSTATUS result; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  struct _KPROCESS *v13; // r14
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  Object = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    IsEnabledDeviceUsageNoInline = Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline();
    v13 = (struct _KPROCESS *)Object;
    if ( IsEnabledDeviceUsageNoInline && (*((_DWORD *)Object + 383) & 1) != 0 && !*((_QWORD *)Object + 200) )
    {
      if ( PreviousMode )
      {
        v5 = -1073741790;
      }
      else if ( Object == (PVOID)Process )
      {
        v5 = -1073741637;
      }
      else
      {
        PsTerminateMinimalProcess((PRKPROCESS)Object, ExitStatus, v11, v12);
      }
      ObfDereferenceObjectWithTag(v13, 0x65547350u);
      return v5;
    }
    if ( !PreviousMode && (*(_BYTE *)(Process + 368) & 1) == 0 )
      LOBYTE(v5) = 1;
    v14 = *((_DWORD *)Object + 116);
    ProcessStartKey = PsGetProcessStartKey((__int64)Object);
    Object = (PVOID)PsGetProcessCreateTimeQuadPart(v13);
    --CurrentThread->KernelApcDisable;
    v5 = PspTerminateProcess(v13, (__int64)CurrentThread, ExitStatus, v5);
    ObfDereferenceObjectWithTag(v13, 0x65547350u);
    if ( v13 == (struct _KPROCESS *)Process )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(Process + 368) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread, v15, v16);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        PspExitThread(ExitStatus);
        JUMPOUT(0x140B81555LL);
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(v14, v5, ProcessStartKey, Object);
    }
  }
  else
  {
    if ( PreviousMode != 1 && (*(_BYTE *)(Process + 368) & 1) == 0 || (*(_DWORD *)(Process + 1532) & 1) != 0 )
      return -1073741637;
    PspLockProcessExclusive((__int64)CurrentThread->ApcState.Process, (__int64)CurrentThread, v2, v3);
    _m_prefetchw((const void *)(Process + 500));
    v17 = *(_DWORD *)(Process + 500);
    do
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 500), v17 | 0x40000000, v17);
    }
    while ( v18 != v17 );
    if ( (v17 & 0x40000008) != 0 )
    {
      PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
      PspTerminateThreadByPointer((__int64)CurrentThread, ExitStatus, 1);
      return 0;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 1364) == 259 )
      *(_DWORD *)(Process + 1364) = ExitStatus;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 456));
    KeAbPostRelease(Process + 456);
    v5 = PspTerminateAllThreads((PRKPROCESS)Process, (__int64)CurrentThread, ExitStatus, 0);
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v15);
  return v5;
}
