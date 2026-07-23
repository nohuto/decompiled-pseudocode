/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x14043A570
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140A08068 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14043A640 (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiGetWsAndMakePageTablesNx(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  char v4; // di
  __int64 v5; // rdx
  unsigned __int64 v6; // r8

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v4 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3);
  MiLockPageTableInternal((signed __int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL, 0);
  MiPerformSafePdeWrite(p_Blink, 0xFFFFF6FB7DBEDF68uLL, MEMORY[0xFFFFF6FB7DBEDF68], 2LL);
  MiUnlockPageTableInternal((__int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL);
  LOBYTE(v5) = v4;
  MiUnlockWorkingSetShared((__int64)p_Blink, v5);
  return MiIssueFlushTbEntire((_KPROCESS *)1, (volatile _KAFFINITY_EX *)0xFFFFFFFFLL, v6);
}
