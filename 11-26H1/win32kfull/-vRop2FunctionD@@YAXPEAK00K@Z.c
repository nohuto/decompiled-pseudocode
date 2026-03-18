/*
 * XREFs of ?vRop2FunctionD@@YAXPEAK00K@Z @ 0x140344070
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vRop2FunctionD(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  int v5; // r8d
  int v6; // eax

  for ( ; a4; --a4 )
  {
    v5 = *a2++;
    v6 = *a3++;
    *a1++ = v6 | ~v5;
  }
}
