/*
 * XREFs of ?vRop2FunctionD@@YAXPEAK00K@Z @ 0x140321770
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vRop2FunctionD(unsigned int *a1, char *a2, char *a3, int a4)
{
  signed __int64 v4; // rdx
  unsigned int v5; // eax

  if ( a4 )
  {
    v4 = a2 - a3;
    do
    {
      v5 = *(_DWORD *)a3 | ~*(_DWORD *)&a3[v4];
      a3 += 4;
      *a1++ = v5;
      --a4;
    }
    while ( a4 );
  }
}
