/*
 * XREFs of sub_18008C5BC @ 0x18008C5BC
 * Callers:
 *     sub_18008C0EC @ 0x18008C0EC (sub_18008C0EC.c)
 *     sub_18008D334 @ 0x18008D334 (sub_18008D334.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_18008C2CC @ 0x18008C2CC (sub_18008C2CC.c)
 *     sub_18008CD8C @ 0x18008CD8C (sub_18008CD8C.c)
 *     sub_18008CEF4 @ 0x18008CEF4 (sub_18008CEF4.c)
 *     sub_18008D2FC @ 0x18008D2FC (sub_18008D2FC.c)
 */

void __fastcall sub_18008C5BC(float *Src, float *a2, float *a3, __int64 a4, __int64 a5, void *a6, __int64 a7, char a8)
{
  float *v8; // rax
  __int64 v11; // r10
  __int64 v12; // r8
  __int128 v13; // xmm6

  if ( a2 != a3 )
  {
    v8 = a3;
    while ( Src != a2 )
    {
      if ( *a2 > *Src )
      {
        do
        {
          v11 = a5;
          v12 = (__int64)v8;
          v8 -= 4;
          --a5;
          if ( a2 == v8 )
          {
            v13 = *(_OWORD *)a2;
            memmove((char *)v8 - ((char *)a2 - (char *)Src) + 16, Src, (char *)a2 - (char *)Src);
            *(_OWORD *)Src = v13;
            return;
          }
        }
        while ( *v8 <= *(a2 - 4) );
        if ( a4 == 1 )
        {
          sub_18008D2FC(Src, a2, v12);
        }
        else if ( a4 > v11 || a4 > a7 )
        {
          if ( v11 > a7 )
            sub_18008C2CC(Src, a2, v12, a4, v11, a6, a7, a8);
          else
            sub_18008CEF4(Src, a2);
        }
        else
        {
          sub_18008CD8C(Src, a2, v12, a6);
        }
        return;
      }
      Src += 4;
      --a4;
    }
  }
}
