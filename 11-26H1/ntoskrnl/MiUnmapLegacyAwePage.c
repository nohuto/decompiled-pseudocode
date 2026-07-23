/*
 * XREFs of MiUnmapLegacyAwePage @ 0x1407078FC
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiUpdateAwePageTable @ 0x140342494 (MiUpdateAwePageTable.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiDecrementAweMapCount @ 0x1404799BC (MiDecrementAweMapCount.c)
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
