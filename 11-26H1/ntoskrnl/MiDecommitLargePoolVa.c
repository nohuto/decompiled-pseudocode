/*
 * XREFs of MiDecommitLargePoolVa @ 0x1403CD620
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1403653A0 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140501C70 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiDecommitLargePoolVa(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v7; // rsi
  unsigned int v8; // edi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 result; // rax

  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  v7 = (*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL;
  v8 = 0;
  *(_QWORD *)(48 * v7 - 0x220000000000LL) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 2LL);
  MiRewritePteWithLockBit((signed __int64)&unk_140E375C0, 0, a2, *(__int64 *)&CLFS_LSN_NULL_EXT);
  MiDecreaseUsedPtes(v10, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (_KPROCESS *)1);
  MiInsertLargeTbFlushEntry(a4, 1, a2);
  MiFlushTbList(a4);
  v11 = MiPageSizes;
  do
  {
    if ( *v11 == a3 )
      break;
    ++v8;
    ++v11;
  }
  while ( v8 < 3 );
  result = MiFreeLargePageMemory(v7);
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.Timer.Dpc, -a3);
  return result;
}
