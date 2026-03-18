/*
 * XREFs of ?DrawBottomSide@@YAXPEAXJHJ@Z @ 0x140207D80
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x140207B60 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawBottomSide(char *a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // r11d
  int v6; // r9d
  __int64 v8; // r10
  __int64 v9; // rbx
  __int128 *v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // r10
  __int128 *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdi
  int v18; // eax

  v4 = 5 * a4;
  v5 = -a2;
  v6 = a2 * (5 * a4 - 1);
  if ( a3 )
  {
    v8 = v4;
    v9 = a2 - 10;
    v10 = &xmmword_1403642E8;
    do
    {
      if ( v8 < v9 )
      {
        v11 = v9 - v8;
        v12 = &a1[4 * v8 + 4 * v6];
        v13 = *(_DWORD *)v10;
        while ( v11 )
        {
          *(_DWORD *)v12 = v13;
          v12 += 4;
          --v11;
        }
      }
      v6 += v5;
      v10 = (__int128 *)((char *)v10 + 4);
    }
    while ( (__int64)v10 < (__int64)&unk_1403642FC );
  }
  else
  {
    v14 = a2 - v4;
    v15 = &xmmword_1403642E8;
    do
    {
      if ( v14 > 10 )
      {
        v16 = v14 - 10;
        v17 = &a1[4 * v6 + 40];
        v18 = *(_DWORD *)v15;
        while ( v16 )
        {
          *(_DWORD *)v17 = v18;
          v17 += 4;
          --v16;
        }
      }
      v6 += v5;
      v15 = (__int128 *)((char *)v15 + 4);
    }
    while ( (__int64)v15 < (__int64)&unk_1403642FC );
  }
}
