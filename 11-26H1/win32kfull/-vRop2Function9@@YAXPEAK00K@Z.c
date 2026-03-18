/*
 * XREFs of ?vRop2Function9@@YAXPEAK00K@Z @ 0x1401F6C20
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vRop2Function9(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  int v4; // eax
  unsigned int v5; // eax

  for ( ; a4; --a4 )
  {
    v4 = *a3++;
    v5 = *a2++ ^ v4;
    *a1++ = ~v5;
  }
}
