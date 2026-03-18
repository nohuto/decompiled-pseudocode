/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140137318
 * Callers:
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x140015E60 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject((struct HOBJ__ *)*a1);
    *a1 = 0LL;
  }
}
