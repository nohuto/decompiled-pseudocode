/*
 * XREFs of PsForceCrashForInvalidAccess @ 0x1407FD140
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x1406FF57C (MiKernelWriteToExecutableMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwCreateThreadEx @ 0x140724D10 (ZwCreateThreadEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 *     DbgkQueueUserExceptionReport @ 0x14078AA1C (DbgkQueueUserExceptionReport.c)
 *     KeRequestTerminationProcess @ 0x1407B9F48 (KeRequestTerminationProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B41E00 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PsForceCrashForInvalidAccess(PEPROCESS Process)
{
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v6; // ett
  HANDLE ProcessId; // rax
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object_8[2]; // [rsp+78h] [rbp-90h]
  __int128 v12; // [rsp+88h] [rbp-80h]
  __int128 v13; // [rsp+98h] [rbp-70h]
  _DWORD v14[8]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v15; // [rsp+C8h] [rbp-40h]

  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  Handle = 0LL;
  *(_OWORD *)Object_8 = 0LL;
  v12 = 0LL;
  memset_0(v14, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CurrentThread->ApcStateIndex == 1 || (CurrentThread->MiscFlags & 0x400) != 0 )
  {
    _m_prefetchw(&Process[1].DirectoryTableBase);
    DirectoryTableBase = Process[1].DirectoryTableBase;
    v4 = 0x4000000LL;
    do
    {
      v6 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase | 0x4000000,
                             DirectoryTableBase);
    }
    while ( v6 != DirectoryTableBase );
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
        v14[0] = -1073739994;
        v14[6] = 1;
        v15 = PsGetProcessId(Process);
        DbgkQueueUserExceptionReport(CurrentThread, 0xEu, (__int64)v14);
      }
      PsFreezeProcess((__int64)Process, 0);
      LODWORD(Object_8[0]) = 48;
      Object_8[1] = 0LL;
      DWORD2(v12) = 512;
      *(_QWORD *)&v12 = 0LL;
      v13 = 0LL;
      if ( (int)ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL) < 0 )
      {
        PsTerminateProcess(Process, 3221227301LL);
      }
      else
      {
        Object = 0LL;
        ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x72506D4Du, (__int64)&Object, 0LL, 0LL);
        KeRequestTerminationProcess((__int64)Object, 3);
        ObCloseHandle(Handle, 0);
        ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
      }
    }
  }
  else
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 2);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v4, v2);
}
