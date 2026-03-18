/*
 * XREFs of ??1?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ @ 0x1801AD09C
 * Callers:
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1801AD050 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::~CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>(
        CGeometry *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 19) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  CGeometry::~CGeometry((struct CResource **)this);
}
