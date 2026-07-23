/*
 * XREFs of PsForceCrashForInvalidAccess @ 0x140802B70
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x14070424C (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwCreateThreadEx @ 0x1407298E0 (ZwCreateThreadEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 *     DbgkQueueUserExceptionReport @ 0x14078D54C (DbgkQueueUserExceptionReport.c)
 *     KeRequestTerminationProcess @ 0x1407BCFA8 (KeRequestTerminationProcess.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PsForceCrashForInvalidAccess(PEPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v4; // ett
  HANDLE ProcessId; // rax
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID ObjectAttributes[7]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v9[8]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v10; // [rsp+C8h] [rbp-40h]

  ThreadHandle = 0LL;
  memset(&ObjectAttributes[1], 0, 44);
  memset_0(v9, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CurrentThread->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    do
    {
      v4 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v4 != DirectoryTableBase );
    if ( (DirectoryTableBase & 0x4000000) == 0 )
    {
      if ( (IoThreadToProcess(CurrentThread)[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
      {
        ProcessId = PsGetProcessId(Process);
        DbgkWerCaptureLiveKernelDump(
          (unsigned int)L"MemoryManager",
          26,
          5504,
          -1073739994,
          (__int64)ProcessId,
          0LL,
          0LL,
          0LL,
          0);
      }
      else
      {
        v9[0] = -1073739994;
        v9[6] = 1;
        v10 = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport(CurrentThread, 0xEu, (__int64)v9);
      }
      PsFreezeProcess((__int64)Process, 0);
      LODWORD(ObjectAttributes[1]) = 48;
      ObjectAttributes[2] = 0LL;
      LODWORD(ObjectAttributes[4]) = 512;
      ObjectAttributes[3] = 0LL;
      *(_OWORD *)&ObjectAttributes[5] = 0LL;
      if ( ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             0LL,
             0LL,
             1u,
             0LL,
             0x1000uLL,
             0x1000uLL,
             0LL) < 0 )
      {
        PsTerminateProcess(Process, 3221227301LL);
      }
      else
      {
        ObjectAttributes[0] = 0LL;
        ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x72506D4Du, (__int64)ObjectAttributes, 0LL, 0LL);
        KeRequestTerminationProcess((__int64)ObjectAttributes[0], 3);
        ObCloseHandle(ThreadHandle, 0);
        ObfDereferenceObjectWithTag(ObjectAttributes[0], 0x72506D4Du);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
