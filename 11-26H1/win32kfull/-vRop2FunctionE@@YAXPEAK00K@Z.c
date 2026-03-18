/*
 * XREFs of ?vRop2FunctionE@@YAXPEAK00K@Z @ 0x140174050
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vRop2FunctionE(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // eax

  for ( ; a4; --a4 )
  {
    ++a1;
    v4 = *a2 | *a3++;
    *(a1 - 1) = v4;
    ++a2;
  }
}
