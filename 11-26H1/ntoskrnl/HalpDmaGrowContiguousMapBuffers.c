/*
 * XREFs of HalpDmaGrowContiguousMapBuffers @ 0x140B62D30
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x1404EE5A0 (HalpGrowMapBufferWorker.c)
 *     HalpAllocateMapRegisters @ 0x140781460 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 *     MmFreePagesFromMdl @ 0x1403454A0 (MmFreePagesFromMdl.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1405153D0 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x140589054 (HalpDmaCommitContiguousMapBuffers.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaGrowContiguousMapBuffers(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // eax
  struct _MDL *v8; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  PHYSICAL_ADDRESS v11; // [rsp+68h] [rbp+20h] BYREF

  v2 = *(_BYTE *)(a1 + 153) == 0;
  v3 = 16;
  v4 = a2;
  BaseAddress = 0LL;
  if ( !v2 )
    v3 = a2;
  v11.QuadPart = 0LL;
  P = 0LL;
  while ( v4 )
  {
    v6 = v4;
    if ( v4 >= v3 )
      v6 = v3;
    v7 = HalpDmaAllocateContiguousMemory(a1, v6, &BaseAddress, &v11, &P);
    if ( v7 )
    {
      if ( !HalpDmaCommitContiguousMapBuffers(a1, (__int64)BaseAddress, v11.QuadPart, v7) )
      {
        v8 = (struct _MDL *)P;
        if ( P )
        {
          if ( BaseAddress )
            MmUnmapLockedPages(BaseAddress, (PMDL)P);
          MmFreePagesFromMdl(v8);
          ExFreePoolWithTag(v8, 0);
        }
        else
        {
          MmFreeContiguousMemory(BaseAddress);
        }
        return;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      v4 -= v6;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 153) || v3 <= 0x10 || v4 <= 0x10 )
        return;
      v3 = 16;
    }
  }
}
