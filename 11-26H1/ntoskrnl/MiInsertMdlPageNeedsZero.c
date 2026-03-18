/*
 * XREFs of MiInsertMdlPageNeedsZero @ 0x1403C472C
 * Callers:
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406EE130 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406EE640 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140B617F8 (MiFindLargePageMemory.c)
 * Callees:
 *     MiSimpleInsertPage @ 0x1403C5100 (MiSimpleInsertPage.c)
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
