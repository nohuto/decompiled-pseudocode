/*
 * XREFs of ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001A2B4
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180019FB0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x1800194B8 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@$$BY0A@VCDrawListBitmap@@U?$default_delete@$$BY0A@VCDrawListBitmap@@@std@@@std@@QEAA@XZ @ 0x18001B2C0 (--1-$unique_ptr@$$BY0A@VCDrawListBitmap@@U-$default_delete@$$BY0A@VCDrawListBitmap@@@std@@@std@@.c)
 *     ??R?$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z @ 0x1801B31E4 (--R-$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(
        CPrimitiveGroupDrawListGenerator *this)
{
  void **v2; // rcx
  void **v3; // rcx

  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable';
  v2 = (void **)*((_QWORD *)this + 2);
  if ( v2 )
    CPrimitiveBuffer::`scalar deleting destructor'(v2);
  v3 = (void **)*((_QWORD *)this + 3);
  if ( v3 )
    CPrimitiveBuffer::`scalar deleting destructor'(v3);
  if ( *((_QWORD *)this + 12) )
    std::default_delete<CRegion>::operator()();
  std::unique_ptr<CDrawListBitmap [0]>::~unique_ptr<CDrawListBitmap [0]>((char *)this + 88);
  std::unique_ptr<CDrawListBitmap [0]>::~unique_ptr<CDrawListBitmap [0]>((char *)this + 80);
}
