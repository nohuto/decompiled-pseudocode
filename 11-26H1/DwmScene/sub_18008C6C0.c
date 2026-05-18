/*
 * XREFs of sub_18008C6C0 @ 0x18008C6C0
 * Callers:
 *     sub_18008C1DC @ 0x18008C1DC (sub_18008C1DC.c)
 *     sub_18008D42C @ 0x18008D42C (sub_18008D42C.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_18008C444 @ 0x18008C444 (sub_18008C444.c)
 *     sub_18008CE40 @ 0x18008CE40 (sub_18008CE40.c)
 *     sub_18008CFCC @ 0x18008CFCC (sub_18008CFCC.c)
 *     sub_18008D2FC @ 0x18008D2FC (sub_18008D2FC.c)
 */

void __fastcall sub_18008C6C0(float *Src, float *a2, float *a3, __int64 a4, __int64 a5, void *a6, __int64 a7, char a8)
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
      if ( *Src > *a2 )
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
        while ( *(a2 - 4) <= *v8 );
        if ( a4 == 1 )
        {
          sub_18008D2FC(Src, a2, v12);
        }
        else if ( a4 > v11 || a4 > a7 )
        {
          if ( v11 > a7 )
            sub_18008C444(Src, a2, v12, a4, v11, a6, a7, a8);
          else
            sub_18008CFCC(Src, a2);
        }
        else
        {
          sub_18008CE40(Src, a2, v12, a6);
        }
        return;
      }
      Src += 4;
      --a4;
    }
  }
}
