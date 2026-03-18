/*
 * XREFs of RtlCopyBitMap @ 0x140492FF0
 * Callers:
 *     HvpGrowDirtyVectors @ 0x140492E10 (HvpGrowDirtyVectors.c)
 *     MiChangePagingFileMaximum @ 0x1406F88B0 (MiChangePagingFileMaximum.c)
 *     Xp10ExecuteHuffmanEncode @ 0x14080CCEC (Xp10ExecuteHuffmanEncode.c)
 *     VmRegisterFeatureBitmap @ 0x14081BCA0 (VmRegisterFeatureBitmap.c)
 *     PspQueryRateControlHistory @ 0x140A7F83C (PspQueryRateControlHistory.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x140493208 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned int v6; // r9d
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  int *v10; // r11
  int *v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  size_t v14; // rdi
  unsigned __int64 v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // rbp
  int v18; // esi
  int v19; // edi
  int v20; // r15d
  int v21; // esi
  unsigned __int64 v22; // r14
  int v23; // edi
  unsigned int v24; // r15d
  int v25; // r14d
  int v26; // r15d

  result = *a1;
  v6 = *(_DWORD *)a2 - a3;
  if ( (unsigned int)result <= v6 )
    v6 = *a1;
  v8 = v6;
  if ( v6 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v11 = (int *)(v9 + 4 * result);
    if ( v10 > v11 || (result = (unsigned __int64)&v10[((unsigned __int64)v6 - 1) >> 5], (unsigned __int64)v11 > result) )
    {
      v12 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v16 = a3 & 0x1F;
        v17 = 32 - v16;
        v18 = 1 << (32 - v16);
        v19 = 1 << v16;
        if ( v8 < 0x20 )
          goto LABEL_17;
        v20 = *v11;
        v21 = v18 - 1;
        v22 = v8 >> 5;
        v23 = v19 - 1;
        v8 += -32LL * (v8 >> 5);
        do
        {
          *v11++ = v20 & v23 | ((*v10 & v21) << v16);
          v24 = (*v10++ & (unsigned int)~v21) >> v17;
          result = *v11 & (unsigned int)-(1 << v16);
          v20 = result | v24;
          *v11 = v20;
          --v22;
        }
        while ( v22 );
        v19 = 1 << v16;
        v18 = 1 << (32 - v16);
        if ( v8 )
        {
LABEL_17:
          v25 = *v10;
          v26 = *v11;
          if ( v8 > v17 )
          {
            *v11 = v26 & (v19 - 1) | ((v25 & (v18 - 1)) << v16);
            result = v11[1] & ~((1 << (v8 + v16 - 32)) - 1) | ((*v10 & (unsigned int)(((1 << (v8 + v16 - 32)) - 1) << v17)) >> v17);
            v11[1] = result;
          }
          else
          {
            result = ((v25 & ((1 << v8) - 1)) << v16) | v26 & (unsigned int)~(((1 << v8) - 1) << v16);
            *v11 = result;
          }
        }
      }
      else
      {
        v13 = v6 & 7;
        v14 = (unsigned __int64)v6 >> 3;
        if ( v14 )
          result = (unsigned __int64)memmove((void *)(v12 + v9), *((const void **)a1 + 1), v14);
        if ( v13 )
        {
          v15 = v12 + *(_QWORD *)(a2 + 8);
          *(_BYTE *)(v15 + v14) &= ~((1 << v13) - 1);
          result = *((_QWORD *)a1 + 1);
          *(_BYTE *)(v15 + v14) |= (unsigned __int8)((1 << v13) - 1) & *(_BYTE *)(v14 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, a3, v6);
    }
  }
  return result;
}
