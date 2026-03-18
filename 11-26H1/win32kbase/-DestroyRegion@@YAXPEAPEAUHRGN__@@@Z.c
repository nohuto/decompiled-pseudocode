/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140080C68
 * Callers:
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x14001EE60 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  HRGN v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, -2147483646);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
