/*
 * XREFs of MiAllocateModWriterEntry @ 0x140398980
 * Callers:
 *     MiMappedPageWriter @ 0x140490470 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1404AF940 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x1402D7C50 (MiChargeForWriteInProgressPage.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void *__fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  void *PoolMm; // rbx
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v5) = v5 | 0x80000000;
  PoolMm = (void *)ExAllocatePoolMm(64LL, 8 * a2 + 152, 1700228429LL, v5);
  if ( PoolMm )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0, v7, v8) )
      return PoolMm;
    ExFreePoolWithTag(PoolMm, 0);
  }
  return 0LL;
}
