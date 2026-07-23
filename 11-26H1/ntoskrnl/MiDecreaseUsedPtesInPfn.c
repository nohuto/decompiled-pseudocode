/*
 * XREFs of MiDecreaseUsedPtesInPfn @ 0x1402EB080
 * Callers:
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MxClearStaleSecurePageMapping @ 0x140CFB550 (MxClearStaleSecurePageMapping.c)
 *     MxFreeEmptyBootPageTable @ 0x140CFCE24 (MxFreeEmptyBootPageTable.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtesInPfn(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // r9

  if ( (*(_DWORD *)(BugCheckParameter2 + 36) & 0x4000000) != 0 )
    v2 = *(_QWORD *)BugCheckParameter2 >> 36;
  else
    v2 = *(_QWORD *)(BugCheckParameter2 + 16) >> 17;
  v3 = v2 & 0x3FF;
  if ( v3 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v3, (unsigned int)BugCheckParameter4);
  v4 = v3 - (unsigned int)BugCheckParameter4;
  if ( (*(_DWORD *)(BugCheckParameter2 + 36) & 0x4000000) != 0 )
    *(_QWORD *)BugCheckParameter2 = ((unsigned __int64)(unsigned int)v4 << 36) ^ (*(_QWORD *)BugCheckParameter2 ^ ((unsigned __int64)(unsigned int)v4 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
  else
    *(_QWORD *)(BugCheckParameter2 + 16) = (v4 << 17) ^ (*(_QWORD *)(BugCheckParameter2 + 16) ^ (v4 << 17)) & 0xFFFFFFFFF801FFFFuLL;
  return (unsigned int)v4;
}
