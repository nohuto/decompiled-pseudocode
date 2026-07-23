/*
 * XREFs of RtlCopyBitMapEx @ 0x140443150
 * Callers:
 *     MiResizeAweBitMap @ 0x14087F5D8 (MiResizeAweBitMap.c)
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     MiSelectRelocationStartHint @ 0x140AEFE00 (MiSelectRelocationStartHint.c)
 * Callees:
 *     RtlpCopyBitMapTailToHeadEx @ 0x140443244 (RtlpCopyBitMapTailToHeadEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMapEx(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 *v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  size_t v13; // r14
  _BYTE *v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  __int64 *v18; // r11
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // r9
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // r15

  result = *a1;
  v6 = *a2 - a3;
  if ( *a1 <= v6 )
    v6 = *a1;
  if ( v6 )
  {
    v7 = a2[1];
    v8 = (__int64 *)a1[1];
    result = a3 >> 6;
    v9 = v7 + 8 * (a3 >> 6);
    if ( (unsigned __int64)v8 <= v9 )
    {
      result = (unsigned __int64)&v8[(v6 - 1) >> 6];
      if ( v9 <= result )
        return RtlpCopyBitMapTailToHeadEx(a1, a2, a3, v6);
    }
    v10 = a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v15 = a3 & 0x3F;
      v16 = 64 - v15;
      v17 = 1LL << (64 - ((unsigned __int8)a3 & 0x3Fu));
      v18 = (__int64 *)(v7 + 8 * (a3 >> 6));
      v19 = 1LL << (a3 & 0x3F);
      if ( v6 < 0x40 )
      {
        v23 = v6;
      }
      else
      {
        v20 = *v18;
        v21 = v17 - 1;
        v22 = v6 >> 6;
        v23 = v6 - (v6 >> 6 << 6);
        do
        {
          *v18++ = v20 & (v19 - 1) | ((v21 & *v8) << v15);
          v24 = *v8++ & ~v21;
          result = *v18 & ~(v19 - 1);
          v20 = result | (v24 >> v16);
          *v18 = v20;
          --v22;
        }
        while ( v22 );
        if ( !v23 )
          return result;
      }
      v25 = *v8;
      v26 = *v18;
      if ( v23 > v16 )
      {
        *v18 = v26 & (v19 - 1) | ((v25 & (v17 - 1)) << v15);
        result = v18[1] & ~((1LL << ((unsigned __int8)v23 + (unsigned __int8)v15 - 64)) - 1) | ((*v8 & (unsigned __int64)(((1LL << ((unsigned __int8)v23 + (unsigned __int8)v15 - 64)) - 1) << v16)) >> v16);
        v18[1] = result;
      }
      else
      {
        result = ((v25 & ((1LL << v23) - 1)) << v15) | v26 & ~(((1LL << v23) - 1) << v15);
        *v18 = result;
      }
      return result;
    }
    v11 = v6;
    v12 = v6 & 7;
    v13 = v11 >> 3;
    if ( v13 )
      result = (unsigned __int64)memmove((void *)(v7 + v10), v8, v13);
    if ( v12 )
    {
      v14 = (_BYTE *)(v13 + v10 + a2[1]);
      *v14 &= ~((1 << v12) - 1);
      result = a1[1];
      *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
    }
  }
  return result;
}
