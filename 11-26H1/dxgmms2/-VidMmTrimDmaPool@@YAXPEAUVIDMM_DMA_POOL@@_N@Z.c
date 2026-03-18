/*
 * XREFs of ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x1400A4288
 * Callers:
 *     VidMmTrimDmaPoolToMinimum @ 0x1400A4AC0 (VidMmTrimDmaPoolToMinimum.c)
 *     VidMmGetNextBuffersContractedSize @ 0x140118F10 (VidMmGetNextBuffersContractedSize.c)
 * Callees:
 *     WaitDmaBufferNotBusy @ 0x1400EB03C (WaitDmaBufferNotBusy.c)
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     NeedToBeTrimmed @ 0x140118F8C (NeedToBeTrimmed.c)
 */

void __fastcall VidMmTrimDmaPool(struct VIDMM_DMA_POOL *a1, char a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r8
  struct VIDMM_DMA_POOL *v6; // rdi
  struct VIDMM_DMA_POOL *v7; // rsi
  struct VIDMM_DMA_POOL *v8; // rax
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  WdLogSingleEntry1(4LL, *((_QWORD *)a1 + 1));
  WdLogGlobalForLineNumber = 2945;
  v6 = (struct VIDMM_DMA_POOL *)*((_QWORD *)a1 + 11);
  while ( (a2 || (unsigned __int8)NeedToBeTrimmed(a1)) && v6 != (struct VIDMM_DMA_POOL *)((char *)a1 + 88) )
  {
    v7 = v6;
    v8 = v6;
    v6 = *(struct VIDMM_DMA_POOL **)v6;
    if ( v4 >= 2 || *((_BYTE *)v8 + 25) )
    {
      v9 = 0;
      LOBYTE(v5) = 1;
      WaitDmaBufferNotBusy(a1, v7, v5, &v9);
      if ( v9 )
      {
        WdLogSingleEntry2(4LL, v7, a1);
        WdLogGlobalForLineNumber = 2983;
        return;
      }
      RemoveDmaBufferFromPool(a1, v7);
    }
    else
    {
      ++v4;
    }
  }
}
