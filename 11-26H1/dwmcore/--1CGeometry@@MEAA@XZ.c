/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x1800E98A8
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18019F83C (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ @ 0x1801AD09C (--1-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1801B0D10 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x1801B1170 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??1CPathGeometry@@MEAA@XZ @ 0x1801B643C (--1CPathGeometry@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801B8CAC (--1CProxyGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CShapePtr::~CShapePtr((CShapePtr *)(this + 13));
  CShapePtr::~CShapePtr((CShapePtr *)(this + 11));
  CResource::~CResource((CResource *)this);
}
