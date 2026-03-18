/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x1402C4100
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x1403FEB60 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1402C22BC (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x1402C4230 (FsRtlCheckNoSharedConflict.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  _QWORD *LockInformation; // rdi
  LONGLONG QuadPart; // rax
  _RTL_SPLAY_LINKS *v9; // rbx
  KSPIN_LOCK *v10; // rsi
  _RTL_SPLAY_LINKS *v11; // r14
  unsigned __int64 v12; // rbp
  _RTL_SPLAY_LINKS *v14; // r15
  _RTL_SPLAY_LINKS *v15; // rdi
  __int64 v16; // rax
  BOOLEAN v17; // bl
  char v18; // al
  _RTL_SPLAY_LINKS *v19[2]; // [rsp+30h] [rbp-38h] BYREF
  _RTL_SPLAY_LINKS *v20; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[4] && !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v9 = (_RTL_SPLAY_LINKS *)StartingByte->QuadPart;
  v10 = LockInformation + 3;
  v19[0] = v9;
  v11 = (_RTL_SPLAY_LINKS *)((char *)v9 + QuadPart - 1);
  v20 = v11;
  v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( (unsigned __int64)v11 < *LockInformation )
  {
    KxReleaseSpinLock(LockInformation + 3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
    return 1;
  }
  v14 = (_RTL_SPLAY_LINKS *)FileObject;
  v15 = (_RTL_SPLAY_LINKS *)ProcessId;
  v16 = *((_QWORD *)FileObject + 15);
  if ( v16
    && (unsigned __int64)v9 >= *(_QWORD *)v16
    && (unsigned __int64)v11 <= *(_QWORD *)(v16 + 40)
    && *(_DWORD *)(v16 + 20) == Key
    && *(PVOID *)(v16 + 32) == ProcessId
    && *(_BYTE *)(v16 + 16) )
  {
    v17 = 1;
  }
  else
  {
    v18 = FsRtlCheckNoSharedConflict(v10, v19, &v20);
    if ( v18 == 1 )
      v18 = FsRtlCheckNoExclusiveConflict((__int64)v10, v19, &v20, Key, v14, v15);
    v17 = v18;
  }
  KeReleaseSpinLock(v10, v12);
  return v17;
}
