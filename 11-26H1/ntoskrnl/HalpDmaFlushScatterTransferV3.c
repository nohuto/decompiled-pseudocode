/*
 * XREFs of HalpDmaFlushScatterTransferV3 @ 0x140438E00
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14058E180 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaNextContiguousPiece @ 0x14035D8E4 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 */

void __fastcall HalpDmaFlushScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  __int64 v8; // r10
  int i; // ebp
  __int64 v14; // r8
  __int64 ContiguousPiece; // rdi
  unsigned __int64 v16; // rcx
  char v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  size_t v21; // [rsp+20h] [rbp-48h]

  v8 = 0LL;
  if ( (a3 || !*(_BYTE *)(a1 + 445)) && !a6 )
  {
    for ( i = a5; i; i -= ContiguousPiece )
    {
      if ( a3 )
        v14 = *(_QWORD *)(a3 + 56);
      else
        LODWORD(v14) = v8;
      ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, v14, a4, v8, i);
      v16 = a4 & 0xFFF;
      v8 = 0LL;
      if ( (HalpDmaCvmConfiguration
         || *(_QWORD *)(a1 + 144) < ContiguousPiece
                                  + v16
                                  + (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
                                  - 1)
        && *(_DWORD *)(a1 + 520) != 3
        || (v17 = *(_BYTE *)(a1 + 445)) == 0
        && ((v16 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v16 & v20) != 0)
         || ((unsigned int)v16 & (unsigned int)ContiguousPiece) != 0)
        || a3 && *(_BYTE *)(a3 + 64) != (_BYTE)v8 )
      {
        LODWORD(v21) = ContiguousPiece;
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD *)(a3 + 56), v21, v8, v8, a7);
        v8 = 0LL;
        v18 = *(_QWORD *)(a3 + 56);
        v19 = (ContiguousPiece + (a4 & 0xFFF) + 4095) >> 12;
        if ( (_DWORD)v19 )
        {
          v19 = (unsigned int)v19;
          do
          {
            v18 = *(_QWORD *)(v18 + 8);
            --v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(a3 + 56) = v18;
      }
      else if ( !v17 )
      {
        HalpDmaFlushBuffer(v16, a2, a4, ContiguousPiece, v8, a7);
        v8 = 0LL;
      }
      a4 += ContiguousPiece;
    }
    if ( a8 )
    {
      if ( !a3 )
      {
        *a8 = v8;
        return;
      }
      *a8 = *(_QWORD *)(a3 + 56);
    }
    else if ( !a3 )
    {
      return;
    }
    *(_QWORD *)(a3 + 56) = a3;
  }
}
