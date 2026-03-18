/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x1801D1EA4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ @ 0x180251730 (-_Destroy@-$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

FastRegion::CRegion **__fastcall CRegion::`scalar deleting destructor'(FastRegion::CRegion **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
