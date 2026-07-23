/*
 * XREFs of CmpTryAcquireKcbIXLocks @ 0x1408B75D4
 * Callers:
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpPrepareForSubtreeInvalidationWorker @ 0x1408B5FCC (CmpPrepareForSubtreeInvalidationWorker.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x1408B7648 (CmpTryAcquireIXLockWithRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireKcbIXLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  int v9; // ecx
  __int64 result; // rax

  v6 = CmpTryAcquireIXLockWithRollbackPacket(a1 + 248, a2, a4);
  LOBYTE(v7) = 1;
  v8 = v6;
  v9 = CmpTryAcquireIXLockWithRollbackPacket(a1 + 264, v7, a4);
  result = 3221226029LL;
  if ( v8 >= 0 )
  {
    if ( v9 >= 0 )
      return 0LL;
    goto LABEL_6;
  }
  if ( v8 != -1073741267 )
    return (unsigned int)v8;
  if ( v9 < 0 )
  {
LABEL_6:
    if ( v9 != -1073741267 )
      return (unsigned int)v9;
  }
  return result;
}
