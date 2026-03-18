/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x14013734C
 * Callers:
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 * Callees:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((struct HOBJ__ *)v2, 0x80000002, 0, 0);
    GrepDeleteDC(*a1, 0x400000u);
    *a1 = 0LL;
  }
}
