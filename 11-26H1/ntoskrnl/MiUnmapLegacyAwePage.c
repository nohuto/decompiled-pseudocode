/*
 * XREFs of MiUnmapLegacyAwePage @ 0x140702C2C
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiUpdateAwePageTable @ 0x140340414 (MiUpdateAwePageTable.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     MiDecrementAweMapCount @ 0x14048007C (MiDecrementAweMapCount.c)
 */

__int64 __fastcall MiUnmapLegacyAwePage(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 **a4)
{
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rdx

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v9 = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF8LL);
  v10 = (__int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiLockWorkingSetSharedAtDpc((__int64)p_Blink);
  MiLockPageTableInternal((signed __int64)p_Blink, (unsigned __int64)v10, 0);
  *(_QWORD *)v9 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  MiUpdateAwePageTable(v10, -1LL, -1);
  MiInsertTbFlushEntry(a3, (__int64)(v9 << 25) >> 16, 1LL, 0);
  MiUnlockPageTableInternal((__int64)p_Blink, (unsigned __int64)v10);
  LOBYTE(v11) = 17;
  MiUnlockWorkingSetShared((__int64)p_Blink, v11);
  MiDecrementAweMapCount(a1, a2, 2u, a4);
  return 0LL;
}
