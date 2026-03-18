/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401948E0
 * Callers:
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 * Callees:
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     GreSetDCOwnerEx @ 0x140081F10 (GreSetDCOwnerEx.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((struct HOBJ__ *)v2, 0x80000002, 0, 0);
    GrepDeleteDC(*a1, 0x400000);
    *a1 = 0LL;
  }
}
