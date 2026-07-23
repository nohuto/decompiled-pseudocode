/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x18006E19C
 * Callers:
 *     RtlpHpSegSegmentFree @ 0x18006DAE4 (RtlpHpSegSegmentFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18006E0B8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18006E664 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x180070F48 (RtlpHpVaMgrRangeCleanup.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x1800682E0 (RtlpCSparseBitmapPageDecommit.c)
 */

void __fastcall RtlCSparseBitmapBitsClear(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  const signed __int64 **v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v13; // r9
  __int64 v14; // r10
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // r9
  BOOL v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx

  v6 = (const signed __int64 **)a1;
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
    v10 = a2 >> 15;
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    {
      if ( !_bittest64(*v6, v10) )
        goto LABEL_33;
      v11 = (v10 << 12) + *(_QWORD *)(a1 + 8);
      v12 = v8;
      v13 = (volatile signed __int32 *)(v11 + 4 * (v7 >> 5));
      v14 = a2 & 0x1F;
      if ( (unsigned __int64)(v14 + v8) > 0x20 )
      {
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v13, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v14));
          v12 = v8 - (32 - (unsigned int)(a2 & 0x1F));
          ++v13;
        }
        while ( v12 >= 0x20 )
        {
          *v13++ = 0;
          v12 -= 32LL;
        }
        if ( v12 )
        {
          v15 = -1 << v12;
          goto LABEL_12;
        }
      }
      else
      {
        if ( v8 == 32 )
        {
          *v13 = 0;
          goto LABEL_13;
        }
        v15 = ~(((1 << v8) - 1) << v14);
LABEL_12:
        _InterlockedAnd(v13, v15);
      }
LABEL_13:
      if ( v8 >= 512 )
      {
        v19 = 1;
      }
      else
      {
        v16 = a2 & 0x7E00;
        if ( 0x8000 - v16 < 0x200 )
          goto LABEL_21;
        v17 = (_QWORD *)(v11 + 8 * (v16 >> 6));
        v18 = (_QWORD *)(v11 + 8 * ((v16 + 511) >> 6));
        if ( v17 == v18 )
          goto LABEL_23;
        if ( *v17 )
        {
LABEL_21:
          v19 = 0;
        }
        else
        {
          for ( ++v17; v17 != v18; ++v17 )
          {
            if ( *v17 )
              goto LABEL_21;
          }
LABEL_23:
          v19 = *v17 == 0LL;
        }
      }
      if ( v19 )
        RtlpCSparseBitmapPageDecommit(a1, a2 >> 15, v8 == 0x8000);
      v6 = (const signed __int64 **)a1;
      goto LABEL_33;
    }
    v20 = a2 & 0x3FFFFFFF;
    v8 = a3;
    v21 = v20 + a3;
    if ( a3 < 0 )
    {
      v8 = ~v20;
      if ( v21 >= 0 )
        v8 = a3;
    }
    else if ( v21 > 0x40000000 )
    {
      v8 = 0x40000000 - v20;
    }
LABEL_33:
    a2 += v8;
    a3 -= v8;
  }
}
