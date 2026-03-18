/*
 * XREFs of HalpDmaInitializeMasterAdapter @ 0x140CB0C78
 * Callers:
 *     HalpDmaInit @ 0x140CB0700 (HalpDmaInit.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     MmMapIoSpaceEx @ 0x140363DC0 (MmMapIoSpaceEx.c)
 *     RtlSetAllBits @ 0x1403F4780 (RtlSetAllBits.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x140589054 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140CB04FC (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140CB06D8 (HalpDmaFreeTranslationBuffer.c)
 */

__int64 __fastcall HalpDmaInitializeMasterAdapter(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 TranslationBuffer; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx

  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_DWORD *)(a1 + 16) = 1634550856;
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  *(_BYTE *)(a1 + 153) = a7;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 152) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  v10 = (a6 + 31) & 0xFFFFFFE0;
  v12 = HalpMmAllocCtxAlloc(a1, v10 >> 3);
  if ( v12 )
  {
    v13 = HalpMmAllocCtxAlloc(v11, 16LL);
    *(_QWORD *)(a1 + 24) = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = v10;
      *(_QWORD *)(v13 + 8) = v12;
      RtlSetAllBits(*(PRTL_BITMAP *)(a1 + 24));
      if ( !a3 )
        return 0LL;
      TranslationBuffer = HalpDmaAllocateTranslationBuffer(v15, a1 + 64);
      *(_QWORD *)(a1 + 48) = TranslationBuffer;
      if ( TranslationBuffer )
      {
        v17 = MmMapIoSpaceEx(a2, a3, 4u);
        v18 = v17;
        if ( !v17 )
        {
LABEL_8:
          HalpDmaFreeTranslationBuffer(*(_QWORD *)(a1 + 48));
          goto LABEL_9;
        }
        if ( !HalpDmaCommitContiguousMapBuffers(a1, v17, a2, (a3 >> 12) + ((a3 & 0xFFF) != 0)) )
        {
          MiUnmapContiguousMemory(v18, a3, 1);
          goto LABEL_8;
        }
        *(_DWORD *)(a1 + 212) = a3 >> 13;
        return 0LL;
      }
    }
LABEL_9:
    HalpMmAllocCtxFree(v14, v12);
  }
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
    HalpMmAllocCtxFree(v11, v19);
  return 3221225626LL;
}
