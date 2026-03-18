/*
 * XREFs of HalpDmaGrowScatterMapBuffers @ 0x140B30E5C
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x1404EE5A0 (HalpGrowMapBufferWorker.c)
 *     HalpAllocateMapRegisters @ 0x140781460 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1403454A0 (MmFreePagesFromMdl.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x1403549F4 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140B30EDC (HalpDmaAllocateScatterMemory.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaGrowScatterMapBuffers(__int64 a1, __int64 a2)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = (struct _MDL *)HalpDmaAllocateScatterMemory(a1, a2, &BaseAddress);
  v4 = v3;
  if ( v3 )
  {
    if ( !HalpDmaCommitScatterMapBuffers(a1, (__int64)BaseAddress, 0LL, 0, v3) )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, v4);
      MmFreePagesFromMdl(v4);
    }
    ExFreePoolWithTag(v4, 0);
  }
}
