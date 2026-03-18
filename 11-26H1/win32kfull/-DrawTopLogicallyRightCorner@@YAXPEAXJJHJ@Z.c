/*
 * XREFs of ?DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z @ 0x140207BF8
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x140207B60 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawTopLogicallyRightCorner(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  __int64 v6; // rsi
  int v7; // r10d
  int v8; // edx
  int *v9; // r8
  int *v10; // r9
  __int64 v11; // r11
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // r8
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx

  v6 = 5 * a5;
  v7 = -a2;
  if ( a4 )
  {
    v8 = a2 * (a3 - 6);
    v9 = (int *)&unk_140364220;
    do
    {
      v10 = v9;
      v11 = 5LL;
      v12 = &a1[v6 - 5 + v8];
      do
      {
        v13 = *v10--;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v8 += v7;
      v9 += 5;
    }
    while ( (__int64)v9 < (__int64)dword_140364284 );
  }
  else
  {
    v14 = a2 * (a3 - 5);
    v15 = &unk_140364210;
    do
    {
      v16 = *(_OWORD *)v15;
      v17 = v15[4];
      v15 += 5;
      v18 = v14;
      v14 += v7;
      v19 = v18 - v6;
      *(_OWORD *)&a1[v19] = v16;
      a1[v19 + 4] = v17;
    }
    while ( (__int64)v15 < (__int64)dword_140364274 );
  }
}
