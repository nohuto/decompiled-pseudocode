/*
 * XREFs of HalpDmaAllocateLocalContiguousPool @ 0x1407854E0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140786890 (HalpDmaAllocateChildAdapterV2.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MmFreePagesFromMdl @ 0x140347520 (MmFreePagesFromMdl.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1403592EC (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050EE40 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaReturnPageToSource @ 0x140534F0C (HalpDmaReturnPageToSource.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14058B724 (HalpDmaCommitContiguousMapBuffers.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateLocalContiguousPool(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int v4; // esi
  _RTL_BITMAP *v5; // rax
  _RTL_BITMAP *v6; // rbx
  char v8; // r15
  ULONG v9; // eax
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rbx
  __int64 v17; // r13
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // r12
  unsigned __int64 QuadPart; // r8
  __int64 v22; // rcx
  struct _MDL *v23; // rsi
  __int64 v24; // rcx
  __int64 ContiguousPagesFromContiguousPool; // rbx
  ULONG v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // r12
  unsigned __int64 v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rdx
  _QWORD *v33; // rbx
  unsigned __int64 v34; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  PHYSICAL_ADDRESS v36; // [rsp+38h] [rbp-10h]
  int v37; // [rsp+90h] [rbp+48h]
  ULONG v38; // [rsp+90h] [rbp+48h]
  ULONG NumberToClear; // [rsp+98h] [rbp+50h]
  PMDL MemoryDescriptorList; // [rsp+A0h] [rbp+58h] BYREF
  PHYSICAL_ADDRESS v41; // [rsp+A8h] [rbp+60h] BYREF

  BaseAddress = 0LL;
  v2 = a2;
  v41.QuadPart = 0LL;
  MemoryDescriptorList = 0LL;
  v4 = (a2 + 31) & 0xFFFFFFE0;
  v5 = (_RTL_BITMAP *)HalpMmAllocCtxAlloc(a1, ((unsigned __int64)v4 >> 3) + 16);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v5->SizeOfBitMap = v4;
  v5->Buffer = &v5[1].SizeOfBitMap;
  RtlSetAllBits(v5);
  *(_QWORD *)(a1 + 24) = v6;
  v8 = 1;
LABEL_4:
  v9 = HalpDmaAllocateContiguousMemory(a1, v2, &BaseAddress, &v41, &MemoryDescriptorList);
  v10 = v9;
  NumberToClear = v9;
  if ( !v9 )
    goto LABEL_18;
  v11 = *(_BYTE *)(a1 + 153) == 0;
  v12 = v9;
  v36 = v41;
  if ( v11 )
  {
    v12 = (unsigned __int64)v9 << 12;
    v13 = ((unsigned __int64)(v12 + v41.QuadPart - 1) >> 16) - ((unsigned __int64)v41.QuadPart >> 16);
  }
  else
  {
    v13 = 0;
  }
  v14 = HalpMmAllocCtxAlloc(v12, 24LL);
  v16 = BaseAddress;
  v17 = v14;
  if ( !v14 )
  {
LABEL_13:
    v23 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      if ( v16 )
        MmUnmapLockedPages(v16, MemoryDescriptorList);
      MmFreePagesFromMdl(v23);
      ExFreePoolWithTag(v23, 0);
    }
    else
    {
      MmFreeContiguousMemory(v16);
    }
LABEL_18:
    ContiguousPagesFromContiguousPool = HalpDmaAllocateContiguousPagesFromContiguousPool();
    if ( !ContiguousPagesFromContiguousPool )
      goto LABEL_19;
    v10 = NumberToClear;
    v26 = 0;
    v27 = 0LL;
    v28 = 0LL;
    v24 = 0LL;
    v29 = ContiguousPagesFromContiguousPool;
    while ( 1 )
    {
      v38 = v26;
      if ( v26 >= NumberToClear )
      {
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), 0, NumberToClear);
        goto LABEL_43;
      }
      if ( ContiguousPagesFromContiguousPool == v29 || v27 != ContiguousPagesFromContiguousPool - 72 )
      {
        v30 = (_QWORD *)HalpMmAllocCtxAlloc(v24, 24LL);
        v24 = (__int64)v30;
        if ( !v30 )
        {
          if ( v28 )
          {
            v32 = *(_QWORD **)(a1 + 48);
            if ( v32 )
            {
              do
              {
                v33 = (_QWORD *)*v32;
                HalpMmAllocCtxFree(v24, (__int64)v32);
                v32 = v33;
              }
              while ( v33 );
            }
          }
          if ( NumberToClear )
          {
            do
            {
              v34 = *(_QWORD *)(v29 + 8);
              HalpDmaReturnPageToSource(a1, v29, v31);
              v29 = v34;
              --v10;
            }
            while ( v10 );
          }
LABEL_19:
          if ( v2 <= 1 )
          {
            HalpMmAllocCtxFree(v24, *(_QWORD *)(a1 + 24));
            return 3221225626LL;
          }
          v2 >>= 1;
          goto LABEL_4;
        }
        if ( v28 )
          *v28 = v30;
        else
          *(_QWORD *)(a1 + 48) = v30;
        *v30 = 0LL;
        v28 = v30;
        v30[1] = 0LL;
        v30[2] = ContiguousPagesFromContiguousPool;
      }
      ++*(_DWORD *)(v24 + 8);
      v27 = ContiguousPagesFromContiguousPool;
      *(_QWORD *)(ContiguousPagesFromContiguousPool + 48) &= 0xFFFFFFFFFFFFFFF3uLL;
      ContiguousPagesFromContiguousPool = *(_QWORD *)(ContiguousPagesFromContiguousPool + 8);
      v26 = v38 + 1;
    }
  }
  v37 = v10 + v13;
  v18 = (void *)HalpMmAllocCtxAlloc(v15, 72LL * (unsigned int)(v10 + v13));
  v20 = v18;
  if ( !v18 )
  {
LABEL_12:
    HalpMmAllocCtxFree(v19, v17);
    goto LABEL_13;
  }
  *(_QWORD *)v17 = 0LL;
  *(_DWORD *)(v17 + 12) = 0;
  memset_0(v18, 0, 72 * v10);
  QuadPart = v36.QuadPart;
  *(_DWORD *)(v17 + 8) = v37;
  *(_QWORD *)(v17 + 16) = v20;
  *(_QWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a1 + 64) = v17;
  *(_DWORD *)(a1 + 72) = 0;
  if ( !HalpDmaCommitContiguousMapBuffers(a1, (__int64)v16, QuadPart, v10) )
  {
    HalpMmAllocCtxFree(v22, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
    goto LABEL_12;
  }
  if ( MemoryDescriptorList )
  {
    *(_QWORD *)(a1 + 328) = MemoryDescriptorList;
    *(_QWORD *)(a1 + 336) = v16;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = v16;
    v8 = 0;
  }
  *(_BYTE *)(a1 + 344) = v8;
LABEL_43:
  *(_DWORD *)(a1 + 232) = v10;
  return 0LL;
}
