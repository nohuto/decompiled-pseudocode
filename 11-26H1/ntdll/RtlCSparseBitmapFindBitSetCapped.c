/*
 * XREFs of RtlCSparseBitmapFindBitSetCapped @ 0x1800706FC
 * Callers:
 *     RtlSparseArrayElementAllocated @ 0x1800706A0 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlSparseArrayElementFindCapped @ 0x18012038C (RtlSparseArrayElementFindCapped.c)
 * Callees:
 *     RtlLengthCurrentClearRunForwardEx @ 0x180122CA0 (RtlLengthCurrentClearRunForwardEx.c)
 *     RtlLengthCurrentClearRunBackwardEx @ 0x180141320 (RtlLengthCurrentClearRunBackwardEx.c)
 */

__int64 __fastcall RtlCSparseBitmapFindBitSetCapped(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  const signed __int64 **v6; // r8
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  const signed __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _OWORD v20[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (const signed __int64 **)a1;
  v20[0] = 0LL;
  while ( a3 )
  {
    v7 = a2 & 0x7FFF;
    v8 = a3;
    v9 = v7 + a3;
    if ( a3 < 0 )
    {
      v8 = ~v7;
      if ( v9 >= 0 )
        v8 = a3;
    }
    else if ( v9 > 0x8000 )
    {
      v8 = 0x8000 - v7;
    }
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    {
      if ( _bittest64(*v6, a2 >> 15) )
      {
        v10 = 1LL;
        if ( v8 > 1 )
          v10 = v8;
        v11 = (const signed __int64 *)((((__int64)a2 / 0x8000) << 12) + *(_QWORD *)(a1 + 8));
        *(_QWORD *)&v20[0] = v10 + v7;
        *((_QWORD *)&v20[0] + 1) = v11;
        if ( _bittest64(v11, v7) )
        {
          v12 = 0LL;
        }
        else
        {
          v13 = a2 & 0x7FFF;
          if ( v8 <= 0 )
            v12 = -RtlLengthCurrentClearRunBackwardEx(v20, v13, -v8);
          else
            v12 = RtlLengthCurrentClearRunForwardEx(v20, v13, -1LL);
        }
        v14 = -v12;
        if ( v12 > 0 )
          v14 = v12;
        v15 = -v8;
        if ( v8 > 0 )
          v15 = v8;
        if ( v14 < v15 )
          return v7 + v12 + (((__int64)a2 / 0x8000) << 15);
        v6 = (const signed __int64 **)a1;
      }
    }
    else
    {
      v18 = a2 & 0x3FFFFFFF;
      v8 = a3;
      v19 = v18 + a3;
      if ( a3 < 0 )
      {
        v8 = ~v18;
        if ( v19 >= 0 )
          v8 = a3;
      }
      else if ( v19 > 0x40000000 )
      {
        v8 = 0x40000000 - v18;
      }
    }
    a2 += v8;
    a3 -= v8;
  }
  return -1LL;
}
