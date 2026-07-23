/*
 * XREFs of MmCreateMdl @ 0x140398B10
 * Callers:
 *     DifMmCreateMdlWrapper @ 0x14066A160 (DifMmCreateMdlWrapper.c)
 *     MiPfAllocateMdls @ 0x140A5B9E0 (MiPfAllocateMdls.c)
 *     MiLockKernelScpSection @ 0x140D010A8 (MiLockKernelScpSection.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

PMDL __stdcall MmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  PMDL PoolMm; // r9
  __int16 v6; // bx
  __int64 v7; // r9
  PMDL result; // rax

  PoolMm = MemoryDescriptorList;
  if ( Length > 0xFFFFFFFF )
    return 0LL;
  v6 = (__int16)Base;
  if ( !MemoryDescriptorList )
  {
    v7 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v7) = v7 | 0x80000000;
    PoolMm = (PMDL)ExAllocatePoolMm(
                     64LL,
                     8 * ((Length + ((unsigned __int16)Base & 0xFFF) + 4095LL) >> 12) + 48,
                     1818520909LL,
                     v7);
    if ( !PoolMm )
      return 0LL;
  }
  PoolMm->Next = 0LL;
  PoolMm->MdlFlags = 0;
  PoolMm->ByteCount = Length;
  result = PoolMm;
  PoolMm->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
  PoolMm->Size = 8 * (((Length + (v6 & 0xFFF) + 4095LL) >> 12) + 6);
  PoolMm->ByteOffset = v6 & 0xFFF;
  return result;
}
