/*
 * XREFs of MiCopyTopLevelMappings @ 0x140344208
 * Callers:
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1404C9084 (MiCreateNewProcessTopLevelMappings.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiCopyPtes @ 0x14034433C (MiCopyPtes.c)
 *     MiShadowTopLevelPxes @ 0x140344360 (MiShadowTopLevelPxes.c)
 */

__int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 result; // rax

  ValidPte = MiMakeValidPte(0LL, a2, -1879048188);
  v5 = (unsigned __int64)qword_140E37DB0 >> 39;
  v6 = ValidPte;
  v7 = MiMapPageInHyperSpaceWorker(a2, 0LL, 0x80000000);
  MiCopyPtes(v7 + 2048, 0xFFFFF6FB7DBED800uLL, (unsigned int)(v5 & 0x1FF) - 255);
  MiShadowTopLevelPxes(a1, v8, 256LL);
  v9 = (((unsigned __int64)qword_140E2DFD0 >> 39) & 0x1FF) + 1;
  MiCopyPtes(v7 + 8 * v9, 8 * v9 - 0x90482413000LL, (unsigned int)(512 - v9));
  *(_QWORD *)(v7 + 3944) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)(v7 + 3944) = v6 & 0xFFFFFFFFFFFFFEFFuLL;
  result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return result;
}
