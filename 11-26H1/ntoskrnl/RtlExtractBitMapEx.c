/*
 * XREFs of RtlExtractBitMapEx @ 0x1404D76B0
 * Callers:
 *     RtlShiftLeftBitMapEx @ 0x140618DE0 (RtlShiftLeftBitMapEx.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

unsigned __int64 __fastcall RtlExtractBitMapEx(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  unsigned __int64 *v12; // r9
  __int64 v13; // r11
  unsigned __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 *v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r8

  v4 = *(_QWORD *)a2;
  result = *a1 - a3;
  if ( a4 > result )
    a4 = *a1 - a3;
  if ( a4 <= v4 )
    v4 = a4;
  if ( v4 )
  {
    v8 = a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v12 = *(unsigned __int64 **)(a2 + 8);
      v13 = a3 & 0x3F;
      v14 = 64 - v13;
      v15 = 1LL << v13;
      v16 = (__int64 *)(a1[1] + 8 * (a3 >> 6));
      if ( v4 < 0x40 )
      {
        v18 = v4;
      }
      else
      {
        v17 = v4 >> 6;
        v18 = v4 - (v4 >> 6 << 6);
        do
        {
          v19 = ~(v15 - 1) & *v16++;
          v20 = v19 >> v13;
          *v12 = v20;
          result = v20 | (((v15 - 1) & *v16) << v14);
          *v12++ = result;
          --v17;
        }
        while ( v17 );
        if ( !v18 )
          return result;
      }
      v21 = *v16;
      v22 = *v12 & ~((1LL << v18) - 1);
      if ( v18 > v14 )
      {
        result = (v21 & (unsigned __int64)~(v15 - 1)) >> v13;
        *v12 = v22 | result | ((v16[1] & ((1LL << ((unsigned __int8)v18 + (unsigned __int8)v13 - 64)) - 1)) << v14);
      }
      else
      {
        result = v22 | ((v21 & (unsigned __int64)(((1LL << v18) - 1) << v13)) >> v13);
        *v12 = result;
      }
      return result;
    }
    v9 = v4;
    v10 = v4 & 7;
    v11 = v9 >> 3;
    if ( v11 )
      result = (unsigned __int64)memmove(*(void **)(a2 + 8), (const void *)(v8 + a1[1]), v11);
    if ( v10 )
    {
      result = a1[1];
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v11) = *(_BYTE *)(*(_QWORD *)(a2 + 8) + v11) & ~((1 << v10) - 1) | ((1 << v10) - 1) & *(_BYTE *)(v8 + v11 + result);
    }
  }
  return result;
}
