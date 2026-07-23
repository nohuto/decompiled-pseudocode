/*
 * XREFs of HalpDmaMapScatterTransferV3 @ 0x1404396C4
 * Callers:
 *     HalpMapTransferV3 @ 0x140438870 (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaNextContiguousPiece @ 0x14035D8E4 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 */

void __fastcall HalpDmaMapScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int *a5,
        char a6,
        char a7,
        unsigned __int64 *a8)
{
  unsigned int ContiguousPiece; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  _QWORD *v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  bool v21; // zf
  size_t v22; // [rsp+20h] [rbp-38h]
  char v23; // [rsp+28h] [rbp-30h]
  char v24; // [rsp+30h] [rbp-28h]
  char v25; // [rsp+38h] [rbp-20h]

  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, a3, a4, a6, *a5);
  v14 = ContiguousPiece;
  *a5 = ContiguousPiece;
  if ( !ContiguousPiece )
    return;
  v15 = a4 & 0xFFF;
  v16 = v15 + (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
  if ( a3 )
  {
    if ( (HalpDmaCvmConfiguration || (v13 = v16 + ContiguousPiece - 1LL, *(_QWORD *)(a1 + 144) < v13))
      && *(_DWORD *)(a1 + 520) != 3
      || !*(_BYTE *)(a1 + 445)
      && !a6
      && ((v13 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v13 & v16) != 0)
       || ((unsigned int)v13 & (unsigned int)v14) != 0)
      || *(_BYTE *)(a3 + 64) )
    {
      v17 = *(_QWORD **)(a3 + 56);
      *a8 = v15 + *v17;
      if ( a6 )
      {
        v25 = a7;
        v24 = 0;
        v23 = a6;
      }
      else
      {
        if ( *(_BYTE *)(a1 + 445) )
        {
LABEL_10:
          v18 = *(_QWORD *)(a3 + 56);
          v19 = (v14 + v15 + 4095) >> 12;
          if ( (_DWORD)v19 )
          {
            v20 = (unsigned int)v19;
            do
            {
              v18 = *(_QWORD *)(v18 + 8);
              --v20;
            }
            while ( v20 );
          }
          *(_QWORD *)(a3 + 56) = v18;
          return;
        }
        v25 = a7;
        v24 = 1;
        v23 = 0;
      }
      LODWORD(v22) = v14;
      HalpDmaSyncMapBuffers(a1, a2, a4, (__int64)v17, v22, v23, v24, v25);
      goto LABEL_10;
    }
  }
  v21 = *(_BYTE *)(a1 + 445) == 0;
  *a8 = v16;
  if ( v21 )
    HalpDmaFlushBuffer(v13, a2, a4, v14, a6, a7);
}
