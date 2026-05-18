/*
 * XREFs of sub_18008C2CC @ 0x18008C2CC
 * Callers:
 *     sub_18008C5BC @ 0x18008C5BC (sub_18008C5BC.c)
 * Callees:
 *     sub_18008C0EC @ 0x18008C0EC (sub_18008C0EC.c)
 */

__int64 __fastcall sub_18008C2CC(
        float *Src,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v11; // r8
  float *v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  float *v16; // r9

  if ( a4 > a5 )
  {
    v15 = (a2 - (_BYTE *)Src) >> 4;
    v16 = Src;
    while ( (__int64)v15 > 0 )
    {
      if ( *(float *)&a2[16 * (a5 >> 1)] <= v16[4 * (v15 >> 1)] )
      {
        v16 += 4 * (v15 >> 1) + 4;
        v15 += -1LL - (v15 >> 1);
      }
      else
      {
        v15 >>= 1;
      }
    }
    return sub_18008C0EC(
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
    v11 = (__int64)a2;
    v12 = &Src[4 * (a4 >> 1)];
    v13 = (a3 - (__int64)a2) >> 4;
    while ( (__int64)v13 > 0 )
    {
      if ( *(float *)(v11 + 16 * (v13 >> 1)) <= *v12 )
      {
        v13 >>= 1;
      }
      else
      {
        v11 += 16 * (v13 >> 1) + 16;
        v13 += -1LL - (v13 >> 1);
      }
    }
    return sub_18008C0EC(Src, a2, a3, a4, a5, a6, a7, a8, v12, v11, a4 >> 1, (v11 - (__int64)a2) >> 4);
  }
}
