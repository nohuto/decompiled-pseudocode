/*
 * XREFs of ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18004FB50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18004FBE4 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 */

__int64 __fastcall CPathGeometry::GetShapeDataCore(
        const struct CPathData **this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // edi
  CPathSegmentsShape *v6; // rax
  CPathSegmentsShape *v7; // rsi

  v3 = 0;
  if ( this[17] )
  {
    v6 = (CPathSegmentsShape *)MIDL_user_allocate(0x18uLL);
    if ( v6 && (v7 = CPathSegmentsShape::CPathSegmentsShape(v6, this[17])) != 0LL )
    {
      CShapePtr::~CShapePtr(a3);
      *(_QWORD *)a3 = v7;
      *((_BYTE *)a3 + 8) = 1;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x35u, 0LL);
    }
  }
  return v3;
}
