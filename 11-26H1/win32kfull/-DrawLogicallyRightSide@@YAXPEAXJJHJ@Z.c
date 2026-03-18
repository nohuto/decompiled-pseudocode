/*
 * XREFs of ?DrawLogicallyRightSide@@YAXPEAXJJHJ@Z @ 0x140207E30
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x140207B60 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawLogicallyRightSide(char *a1, int a2, int a3, int a4, int a5)
{
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r10
  char *v11; // rax
  char *v12; // r8
  char *v13; // r9
  __int64 i; // rcx
  int v15; // eax

  v7 = 5 * a5;
  v8 = a3 - 5 * a5;
  if ( v8 > 10 )
  {
    v9 = (unsigned int)(v8 - 10);
    v10 = 4LL * -a2;
    if ( a4 )
    {
      v12 = &a1[4 * a2 * (a3 - 11) - 20 + 4 * v7];
      do
      {
        v13 = v12;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v15 = *(_DWORD *)((char *)&xmmword_1403642E8 + i);
          *(_DWORD *)v13 = v15;
          v13 += 4;
        }
        v12 += v10;
        --v9;
      }
      while ( v9 );
    }
    else
    {
      v11 = &a1[4 * (a2 * (a3 - 10) - (__int64)v7)];
      do
      {
        *(_OWORD *)v11 = xmmword_1403642E8;
        *((_DWORD *)v11 + 4) = 50331648;
        v11 += v10;
        --v9;
      }
      while ( v9 );
    }
  }
}
