/*
 * XREFs of ?DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z @ 0x140207EF0
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x140207B60 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawBottomLogicallyLeftCorner(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r10d
  int v7; // r9d
  const WCHAR *v8; // r8
  int v9; // r10d
  const WCHAR *v10; // rdx
  __int64 v11; // r11
  _DWORD *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rdx
  int v15; // r10d
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rcx

  v4 = 5 * a4;
  v7 = -a2;
  if ( a3 )
  {
    v8 = (const WCHAR *)&unk_140364310;
    v9 = a2 * v4;
    do
    {
      v10 = v8;
      v11 = 5LL;
      v12 = &a1[v9 - 10];
      do
      {
        v13 = *(_DWORD *)v10;
        v10 -= 2;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v9 += v7;
      v8 += 10;
    }
    while ( (__int64)v8 < (__int64)L"T" );
  }
  else
  {
    v14 = &unk_140364300;
    v15 = a2 * (v4 - 1);
    do
    {
      v16 = *(_OWORD *)v14;
      v17 = v14[4];
      v14 += 5;
      v18 = v15;
      v15 += v7;
      *(_OWORD *)&a1[v18 + 5] = v16;
      a1[v18 + 9] = v17;
    }
    while ( (__int64)v14 < (__int64)&dword_140364364 );
  }
}
