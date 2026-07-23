/*
 * XREFs of MiCaptureSparsePages @ 0x140880010
 * Callers:
 *     MiDeleteSparseRange @ 0x1408807B0 (MiDeleteSparseRange.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiInitializePageChainHead @ 0x140441DC0 (MiInitializePageChainHead.c)
 */

__int64 __fastcall MiCaptureSparsePages(unsigned __int64 *BugCheckParameter4, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 i; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 ContainingPageTable; // r8

  MiInitializePageChainHead((__int64)a3);
  result = MiMakeValidPte((unsigned __int64)BugCheckParameter4, (__int64)qword_140E36180[0], 1);
  for ( i = result; a2; --a2 )
  {
    v8 = *BugCheckParameter4;
    ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)BugCheckParameter4);
    if ( v8 != i )
      MiInsertPageChainHead(a3, (__int64 *)(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
    result = MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 4LL);
    ++BugCheckParameter4;
  }
  return result;
}
