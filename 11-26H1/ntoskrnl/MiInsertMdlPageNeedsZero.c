/*
 * XREFs of MiInsertMdlPageNeedsZero @ 0x1403CE638
 * Callers:
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 */

unsigned __int64 __fastcall MiInsertMdlPageNeedsZero(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edx
  __int64 v7; // rdi
  unsigned __int64 result; // rax

  v6 = a1[9] % a1[6];
  ++a1[9];
  v7 = 34 * (v6 + 4LL);
  if ( !*(_QWORD *)&a1[v7 + 32] )
    ++a1[10];
  MiSimpleInsertPage(&a1[v7 + 28], (a2 + 0x220000000000LL) / 48, 6LL);
  *(_QWORD *)&a1[v7 + 26] += a3;
  result = ((unsigned __int64)*(unsigned int *)(a2 + 32) >> 22) & 3;
  *(_QWORD *)&a1[2 * result + 12] += a3;
  return result;
}
