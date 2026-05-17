/*
 * XREFs of RtlCopyBitMap @ 0x180140A00
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x1801520FC (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x1801090A0 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  int *v9; // r11
  int *v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  size_t v14; // rdi
  unsigned __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // rbp
  int v18; // esi
  int v19; // edi
  int v20; // r15d
  int v21; // esi
  unsigned __int64 v22; // r14
  int v23; // edi
  unsigned int v24; // r15d
  int v25; // r14d

  result = *(_DWORD *)a2 - a3;
  if ( *a1 <= (unsigned int)result )
    result = *a1;
  v7 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v10 = (int *)(v8 + 4 * result);
    if ( v9 > v10 || (result = (unsigned __int64)&v9[(v7 - 1) >> 5], (unsigned __int64)v10 > result) )
    {
      v11 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v16 = a3 & 0x1F;
        v17 = 32 - v16;
        v18 = 1 << (32 - v16);
        v19 = 1 << v16;
        if ( v7 < 0x20 )
          goto LABEL_16;
        v20 = *v10;
        v21 = v18 - 1;
        v22 = v7 >> 5;
        v23 = v19 - 1;
        v7 += -32LL * (v7 >> 5);
        do
        {
          *v10++ = v20 & v23 | ((*v9 & v21) << v16);
          v24 = (*v9++ & (unsigned int)~v21) >> v17;
          result = *v10 & (unsigned int)-(1 << v16);
          v20 = result | v24;
          *v10 = v20;
          --v22;
        }
        while ( v22 );
        v19 = 1 << v16;
        v18 = 1 << (32 - v16);
        if ( v7 )
        {
LABEL_16:
          v25 = *v9;
          if ( v7 > v17 )
          {
            *v10 = *v10 & (v19 - 1) | ((v25 & (v18 - 1)) << v16);
            result = v10[1] & ~((1 << (v7 + v16 - 32)) - 1) | ((*v9 & (unsigned int)(((1 << (v7 + v16 - 32)) - 1) << v17)) >> v17);
            v10[1] = result;
          }
          else
          {
            result = ((v25 & ((1 << v7) - 1)) << v16) | *v10 & (unsigned int)~(((1 << v7) - 1) << v16);
            *v10 = result;
          }
        }
      }
      else
      {
        v12 = v7;
        v13 = v7 & 7;
        v14 = v12 >> 3;
        if ( v14 )
          result = (unsigned __int64)memmove((void *)(v11 + v8), *((const void **)a1 + 1), v14);
        if ( v13 )
        {
          v15 = v11 + *(_QWORD *)(a2 + 8);
          *(_BYTE *)(v15 + v14) &= ~((1 << v13) - 1);
          result = *((_QWORD *)a1 + 1);
          *(_BYTE *)(v15 + v14) |= (unsigned __int8)((1 << v13) - 1) & *(_BYTE *)(v14 + result);
        }
      }
    }
    else
    {
      return (unsigned __int64)RtlpCopyBitMapTailToHead((__int64)a1, a2, a3, v7);
    }
  }
  return result;
}
