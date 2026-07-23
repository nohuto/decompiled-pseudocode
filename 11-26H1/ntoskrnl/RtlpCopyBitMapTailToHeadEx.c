/*
 * XREFs of RtlpCopyBitMapTailToHeadEx @ 0x140443244
 * Callers:
 *     RtlCopyBitMapEx @ 0x140443150 (RtlCopyBitMapEx.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlpCopyBitMapTailToHeadEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rsi
  const void **v7; // rdi
  size_t v8; // r10
  int v9; // r9d
  char v10; // cl
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 *v15; // r8
  __int64 v16; // rbp
  char v17; // di
  __int64 *v18; // r8
  __int64 v19; // rdi
  char v20; // si
  __int64 v21; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = (_QWORD *)(a2 + 8);
  v6 = a3 >> 3;
  v7 = (const void **)(a1 + 8);
  if ( (a3 & 7) != 0 )
  {
    v10 = a4;
    v11 = a4 >> 6;
    v12 = a3 & 0x3F;
    v13 = v10 & 0x3F;
    v14 = (__int64 *)(*v5 + 8 * (v11 + (a3 >> 6)));
    result = (__int64)*v7;
    v15 = (__int64 *)((char *)*v7 + 8 * v11);
    if ( v13 )
    {
      v16 = *v15;
      v17 = 64 - v12;
      if ( v13 > 64 - v12 )
      {
        v14[1] = v14[1] & ~((1LL << ((unsigned __int8)v12 + (unsigned __int8)v13 - 64)) - 1) | ((v16 & (unsigned __int64)(((1LL << ((unsigned __int8)v12 + (unsigned __int8)v13 - 64)) - 1) << v17)) >> v17);
        result = *v14 & ((1LL << v12) - 1);
        *v14 = result | ((*v15 & ((1LL << v17) - 1)) << v12);
      }
      else
      {
        result = ((v16 & ((1LL << v13) - 1)) << v12) | *v14 & ~(((1LL << v13) - 1) << v12);
        *v14 = result;
      }
    }
    v18 = v15 - 1;
    if ( v11 )
    {
      v19 = *v14;
      v20 = 64 - v12;
      do
      {
        *v14-- = v19 & ~((1LL << v12) - 1) | ((~((1LL << v20) - 1) & (unsigned __int64)*v18) >> v20);
        v21 = *v18--;
        result = ((1LL << v12) - 1) & *v14;
        v19 = result | ((((1LL << v20) - 1) & v21) << v12);
        *v14 = v19;
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    v8 = a4 >> 3;
    v9 = a4 & 7;
    if ( v9 )
    {
      result = (__int64)*v7;
      *(_BYTE *)(v6 + *v5 + v8) = *(_BYTE *)(v6 + *v5 + v8) & ~((1 << v9) - 1) | ((1 << v9) - 1) & *((_BYTE *)*v7 + v8);
    }
    if ( v8 )
      return (__int64)memmove((void *)(v6 + *v5), *v7, v8);
  }
  return result;
}
