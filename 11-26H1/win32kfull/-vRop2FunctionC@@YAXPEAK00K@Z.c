/*
 * XREFs of ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1401F4480
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vRop2FunctionC(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  memmove(a1, a3, 4LL * a4);
}
