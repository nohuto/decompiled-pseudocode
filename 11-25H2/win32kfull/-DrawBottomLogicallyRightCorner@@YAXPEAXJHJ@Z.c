/*
 * XREFs of ?DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z @ 0x140226C20
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1402CA158 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawBottomLogicallyRightCorner(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r10d
  __int64 v6; // rdi
  int v8; // r8d
  const WCHAR *v9; // r9
  const WCHAR *v10; // rdx
  __int64 v11; // r10
  _DWORD *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rdx
  int v15; // r10d
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx

  v4 = 5 * a4;
  v6 = 5 * a4;
  if ( a3 )
  {
    v8 = a2 * (v4 - 1);
    v9 = (const WCHAR *)&unk_140359A20;
    do
    {
      v10 = v9;
      v11 = 5LL;
      v12 = &a1[v6 - 5 + v8];
      do
      {
        v13 = *(_DWORD *)v10;
        v10 -= 2;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v8 -= a2;
      v9 += 10;
    }
    while ( (__int64)v9 < (__int64)L"els" );
  }
  else
  {
    v14 = &unk_140359A10;
    v15 = a2 * v4;
    do
    {
      v16 = *(_OWORD *)v14;
      v17 = v14[4];
      v14 += 5;
      v18 = v15;
      v15 -= a2;
      v19 = v18 - v6;
      *(_OWORD *)&a1[v19] = v16;
      a1[v19 + 4] = v17;
    }
    while ( (__int64)v14 < (__int64)&dword_140359A74 );
  }
}
