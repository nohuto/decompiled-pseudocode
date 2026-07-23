/*
 * XREFs of RtlExtractBitMapEx @ 0x1404D0E80
 * Callers:
 *     RtlShiftLeftBitMapEx @ 0x14061BE30 (RtlShiftLeftBitMapEx.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall RtlExtractBitMapEx(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  __int64 v12; // r8
  unsigned __int64 *v13; // r9
  __int64 v14; // r11
  unsigned __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 *v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r8

  v4 = *(_QWORD *)a2;
  v7 = *a1 - a3;
  if ( a4 > v7 )
    a4 = *a1 - a3;
  if ( a4 <= v4 )
    v4 = a4;
  if ( v4 )
  {
    v8 = a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v13 = *(unsigned __int64 **)(a2 + 8);
      v14 = a3 & 0x3F;
      v15 = 64 - v14;
      v16 = 1LL << v14;
      v17 = (__int64 *)(a1[1] + 8 * (a3 >> 6));
      if ( v4 < 0x40 )
      {
        v19 = v4;
      }
      else
      {
        v18 = v4 >> 6;
        v19 = v4 - (v4 >> 6 << 6);
        do
        {
          v20 = ~(v16 - 1) & *v17++;
          v21 = v20 >> v14;
          *v13 = v21;
          v7 = v21 | (((v16 - 1) & *v17) << v15);
          *v13++ = v7;
          --v18;
        }
        while ( v18 );
        if ( !v19 )
          return v7;
      }
      v22 = *v17;
      v23 = *v13 & ~((1LL << v19) - 1);
      if ( v19 > v15 )
      {
        v7 = (v22 & (unsigned __int64)~(v16 - 1)) >> v14;
        *v13 = v23 | v7 | ((v17[1] & ((1LL << ((unsigned __int8)v19 + (unsigned __int8)v14 - 64)) - 1)) << v15);
      }
      else
      {
        v7 = v23 | ((v22 & (unsigned __int64)(((1LL << v19) - 1) << v14)) >> v14);
        *v13 = v7;
      }
      return v7;
    }
    v9 = v4;
    v10 = v4 & 7;
    v11 = v9 >> 3;
    if ( v11 )
      LOBYTE(v7) = (unsigned __int8)memmove(*(void **)(a2 + 8), (const void *)(v8 + a1[1]), v11);
    if ( v10 )
    {
      v12 = *(_QWORD *)(a2 + 8);
      LOBYTE(v7) = *(_BYTE *)(v12 + v11) & ~((1 << v10) - 1) | ((1 << v10) - 1) & *(_BYTE *)(v8 + a1[1] + v11);
      *(_BYTE *)(v12 + v11) = v7;
    }
  }
  return v7;
}
