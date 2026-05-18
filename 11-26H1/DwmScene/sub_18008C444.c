/*
 * XREFs of sub_18008C444 @ 0x18008C444
 * Callers:
 *     sub_18008C6C0 @ 0x18008C6C0 (sub_18008C6C0.c)
 * Callees:
 *     sub_18008C1DC @ 0x18008C1DC (sub_18008C1DC.c)
 */

__int64 __fastcall sub_18008C444(
        float *Src,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // r8
  float *v13; // r10
  unsigned __int64 v14; // rcx
  float *v16; // r9
  float *v17; // rdx
  unsigned __int64 v18; // rcx

  if ( a4 > a5 )
  {
    v16 = Src;
    v17 = (float *)&a2[16 * (a5 >> 1)];
    v18 = (a2 - (_BYTE *)Src) >> 4;
    while ( (__int64)v18 > 0 )
    {
      if ( v16[4 * (v18 >> 1)] <= *v17 )
      {
        v16 += 4 * (v18 >> 1) + 4;
        v18 += -1LL - (v18 >> 1);
      }
      else
      {
        v18 >>= 1;
      }
    }
    return sub_18008C1DC(
             Src,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v16,
             (__int64)&a2[16 * (a5 >> 1)],
             ((char *)v16 - (char *)Src) >> 4,
             a5 >> 1);
  }
  else
  {
    v12 = (__int64)a2;
    v13 = &Src[4 * (a4 >> 1)];
    v14 = (a3 - (__int64)a2) >> 4;
    while ( (__int64)v14 > 0 )
    {
      if ( *v13 <= *(float *)(v12 + 16 * (v14 >> 1)) )
      {
        v14 >>= 1;
      }
      else
      {
        v12 += 16 * (v14 >> 1) + 16;
        v14 += -1LL - (v14 >> 1);
      }
    }
    return sub_18008C1DC(Src, a2, a3, a4, a5, a6, a7, a8, v13, v12, a4 >> 1, (v12 - (__int64)a2) >> 4);
  }
}
