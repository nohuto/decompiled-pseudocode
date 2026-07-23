/*
 * XREFs of MiUnlockFlushMdl @ 0x1403CB7C4
 * Callers:
 *     MiFlushComplete @ 0x1403CB1D0 (MiFlushComplete.c)
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x14031F6AC (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 */

void __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, unsigned int *a3)
{
  KIRQL v6; // al
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rbx

  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    MiRetardMdl(MemoryDescriptorList);
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(MemoryDescriptorList, a3);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v8 = (_QWORD *)(a2 + 80);
  v9 = *(_QWORD *)(a2 + 80);
  v10 = 0LL;
  if ( v9 )
  {
    do
    {
      v7 = *(_QWORD *)v9;
      if ( (*(_DWORD *)(v9 + 8) & 8) != 0 )
      {
        *(_QWORD *)v9 = v10;
        v10 = (_QWORD *)v9;
        *v8 = v7;
      }
      else
      {
        v8 = (_QWORD *)v9;
      }
      v9 = v7;
    }
    while ( v7 );
  }
  if ( v6 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72), v6);
  if ( v10 )
    MiReleaseControlAreaWaiters(v10, v9, v7);
}
