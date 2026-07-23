/*
 * XREFs of HalpDmaAllocateNewTranslationBuffer @ 0x140358724
 * Callers:
 *     HalpDmaGetTranslationEntries @ 0x1403584D8 (HalpDmaGetTranslationEntries.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140358E20 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035B01C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x14035B200 (HalpDmaReturnPageToOwner.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 */

__int64 __fastcall HalpDmaAllocateNewTranslationBuffer(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // r9d
  char v8; // r12
  _QWORD *v9; // rbp
  unsigned int v10; // r15d
  _QWORD *v11; // r13
  __int64 v13; // rbp
  unsigned int v14; // ebx
  __int64 v15; // rax
  _QWORD *ScatterPagesFromScatterPool; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  int v24; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp+18h]

  v2 = *(_BYTE *)(a1 + 152) == 0;
  v4 = a1;
  v24 = 0;
  if ( v2 )
    v4 = *(_QWORD *)(a1 + 160);
  v6 = HalpMmAllocCtxAlloc(a1, 24LL);
  if ( v6 )
  {
    v8 = 1;
    v13 = 72 * a2;
    if ( 72 * a2 >= 0x1000 )
      v14 = (72 * a2 + 4095) & 0xFFFFF000;
    else
      v14 = 4096;
    v15 = HalpMmAllocCtxAlloc(v5, v14);
    if ( v15 || (v14 = 72 * a2, (unsigned int)v13 < 0x1000) && (v15 = HalpMmAllocCtxAlloc(v5, v13)) != 0 )
    {
      *(_QWORD *)(v6 + 16) = v15;
      *(_QWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = v14 / 0x48;
      return v6;
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  v25 = 0LL;
  v10 = 0;
  v11 = 0LL;
  while ( a2 )
  {
    LOBYTE(v7) = 1;
    ScatterPagesFromScatterPool = (_QWORD *)HalpDmaAllocateScatterPagesFromScatterPool(v5, v4, 1, v7, 0, (__int64)&v24);
    if ( !ScatterPagesFromScatterPool )
    {
      LOBYTE(v7) = 1;
      ScatterPagesFromScatterPool = (_QWORD *)HalpDmaAllocateScatterPagesFromContiguousPool(
                                                v5,
                                                v4,
                                                1,
                                                v7,
                                                0,
                                                (__int64)&v24);
      if ( !ScatterPagesFromScatterPool )
      {
LABEL_34:
        if ( v10 )
        {
          v21 = v10;
          do
          {
            v22 = v9[6];
            if ( (v22 & 0x10) != 0 )
            {
              MiUnmapContiguousMemory(v22 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 1);
              v9[6] &= 0xFEF;
            }
            v23 = (_QWORD *)v9[1];
            HalpDmaReturnPageToOwner(0LL, v4, v9);
            v9 = v23;
            --v21;
          }
          while ( v21 );
        }
        if ( v8 )
          HalpMmAllocCtxFree(v5, v6);
        return 0LL;
      }
    }
    if ( v9 )
      v25[1] = ScatterPagesFromScatterPool;
    else
      v9 = ScatterPagesFromScatterPool;
    v17 = ScatterPagesFromScatterPool[6];
    ++v10;
    v25 = ScatterPagesFromScatterPool;
    v18 = v17 & 0xFFFFFFFFFFFFF000uLL;
    if ( !v18 )
    {
      v19 = MmMapIoSpaceEx(*ScatterPagesFromScatterPool, 4096LL, 4LL);
      v18 = v19;
      if ( !v19 )
        goto LABEL_34;
      ScatterPagesFromScatterPool[6] |= 0x10uLL;
      v5 = v19 | ScatterPagesFromScatterPool[6] & 0xFFF;
      ScatterPagesFromScatterPool[6] = v5;
    }
    if ( v10 == 1 && v8 )
    {
      *(_QWORD *)v6 = 0LL;
      v11 = (_QWORD *)v6;
      *(_QWORD *)(v6 + 16) = v18;
      *(_DWORD *)(v6 + 8) = 56;
    }
    else
    {
      if ( v6 )
        *v11 = v18;
      else
        v6 = v18;
      *(_QWORD *)v18 = 0LL;
      *(_QWORD *)(v18 + 16) = v18 + 24;
      v11 = (_QWORD *)v18;
      *(_DWORD *)(v18 + 8) = 56;
    }
    v20 = a2;
    a2 -= 56;
    if ( v20 <= 0x38 )
      a2 = 0;
  }
  return v6;
}
