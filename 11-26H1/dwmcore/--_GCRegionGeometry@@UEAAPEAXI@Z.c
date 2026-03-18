/*
 * XREFs of ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1801AD050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ @ 0x1801AD09C (--1-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CRegionGeometry *__fastcall CRegionGeometry::`scalar deleting destructor'(CRegionGeometry *this, char a2)
{
  CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::~CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 168LL);
    else
      operator delete(this);
  }
  return this;
}
