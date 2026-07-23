/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x14048D044
 * Callers:
 *     RtlCopyBitMap @ 0x14048CE30 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r14
  const void **v6; // rbx
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned int *v11; // r11
  void *result; // rax
  int *v13; // r9
  int v14; // ebp
  char v15; // bl
  int *v16; // r9
  unsigned int v17; // ebx
  int v18; // ebx
  size_t v19; // r11

  v4 = (_QWORD *)(a2 + 8);
  v5 = (unsigned __int64)a3 >> 3;
  v6 = (const void **)(a1 + 8);
  v7 = a3;
  if ( (a3 & 7) != 0 )
  {
    v8 = (unsigned __int64)a4 >> 5;
    v9 = a3 & 0x1F;
    v10 = a4 & 0x1F;
    v11 = (unsigned int *)(*v4 + 4 * (v8 + (v7 >> 5)));
    result = (void *)*v6;
    v13 = (int *)((char *)*v6 + 4 * v8);
    if ( v10 )
    {
      v14 = *v13;
      v15 = 32 - v9;
      if ( v10 > 32 - v9 )
      {
        v11[1] = v11[1] & ~((1 << (v9 + v10 - 32)) - 1) | ((v14 & (unsigned int)(((1 << (v9 + v10 - 32)) - 1) << v15)) >> v15);
        result = (void *)(*v11 & ((1 << v9) - 1));
        *v11 = (unsigned int)result | ((*v13 & ((1 << v15) - 1)) << v9);
      }
      else
      {
        result = (void *)(((v14 & ((1 << v10) - 1)) << v9) | *v11 & ~(((1 << v10) - 1) << v9));
        *v11 = (unsigned int)result;
      }
    }
    v16 = v13 - 1;
    if ( v8 )
    {
      v17 = *v11;
      do
      {
        *v11-- = v17 & -(1 << v9) | ((~((1 << (32 - v9)) - 1) & (unsigned int)*v16) >> (32 - v9));
        v18 = *v16--;
        result = (void *)(((1 << v9) - 1) & *v11);
        v17 = (unsigned int)result | ((((1 << (32 - v9)) - 1) & v18) << v9);
        *v11 = v17;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v19 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
    {
      result = (void *)*v6;
      *(_BYTE *)(v5 + v19 + *v4) = *(_BYTE *)(v5 + v19 + *v4) & ~((1 << (a4 & 7)) - 1) | ((1 << (a4 & 7)) - 1) & *((_BYTE *)*v6 + v19);
    }
    if ( v19 )
      return memmove((void *)(v5 + *v4), *v6, v19);
  }
  return result;
}
