/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x140309FB0
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1403FA050 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14030CF7C (FsRtlCheckNoExclusiveConflict.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v12; // rdx
  PVOID *LastLock; // rcx
  PVOID v14; // rax
  BOOLEAN v16; // al
  KSPIN_LOCK *v17; // rcx
  BOOLEAN v18; // bl
  unsigned __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation || !Length->QuadPart )
    return 1;
  v10 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( !LockInformation[5] )
  {
LABEL_10:
    KxReleaseSpinLock(LockInformation + 3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
    return 1;
  }
  QuadPart = StartingByte->QuadPart;
  v19 = QuadPart;
  v12 = Length->QuadPart + QuadPart - 1;
  v20 = v12;
  if ( v12 < *LockInformation )
  {
    KeReleaseSpinLock(LockInformation + 3, v10);
    return 1;
  }
  LastLock = (PVOID *)FileObject->LastLock;
  if ( LastLock
    && QuadPart >= (unsigned __int64)*LastLock
    && v12 <= (unsigned __int64)LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key )
  {
    v14 = ProcessId;
    if ( LastLock[4] == ProcessId )
      goto LABEL_10;
  }
  else
  {
    v14 = ProcessId;
  }
  v16 = FsRtlCheckNoExclusiveConflict(
          (int)LockInformation + 24,
          (unsigned int)&v19,
          (unsigned int)&v20,
          Key,
          (__int64)FileObject,
          (__int64)v14);
  v17 = LockInformation + 3;
  v18 = v16;
  KeReleaseSpinLock(v17, v10);
  return v18;
}
