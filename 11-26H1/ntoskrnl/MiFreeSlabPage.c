/*
 * XREFs of MiFreeSlabPage @ 0x14036B368
 * Callers:
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // eax

  v4 = a2;
  *(_DWORD *)(a1 + 32) = (a3 << 16) ^ (*(_DWORD *)(a1 + 32) ^ (a3 << 16)) & 0xFFF8FFFF;
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v6 = MiPageToNode((a1 + 0x220000000000LL) / 48);
  return MiFreePageToSlabAllocator(232 * v4 + 56320LL * v6 + *(_QWORD *)(v5 + 16) + 14752LL, a1);
}
