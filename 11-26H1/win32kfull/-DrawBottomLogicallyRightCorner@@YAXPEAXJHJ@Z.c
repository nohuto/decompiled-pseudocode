/*
 * XREFs of ?DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z @ 0x140207CC4
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x140207B60 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawBottomLogicallyRightCorner(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r10d
  __int64 v6; // rdi
  int v7; // r9d
  int *v9; // r8
  int v10; // r10d
  int *v11; // rdx
  __int64 v12; // r11
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rdx
  int v16; // r10d
  __int128 v17; // xmm0
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx

  v4 = 5 * a4;
  v6 = 5 * a4;
  v7 = -a2;
  if ( a3 )
  {
    v9 = (int *)&unk_140364290;
    v10 = a2 * (v4 - 1);
    do
    {
      v11 = v9;
      v12 = 5LL;
      v13 = &a1[v6 - 5 + v10];
      do
      {
        v14 = *v11--;
        *v13++ = v14;
        --v12;
      }
      while ( v12 );
      v10 += v7;
      v9 += 5;
    }
    while ( (__int64)v9 < (__int64)((int *)&xmmword_1403642E8 + 3) );
  }
  else
  {
    v15 = &unk_140364280;
    v16 = a2 * v4;
    do
    {
      v17 = *(_OWORD *)v15;
      v18 = v15[4];
      v15 += 5;
      v19 = v16;
      v16 += v7;
      v20 = v19 - v6;
      *(_OWORD *)&a1[v20] = v17;
      a1[v20 + 4] = v18;
    }
    while ( (__int64)v15 < (__int64)&dword_1403642E4 );
  }
}
