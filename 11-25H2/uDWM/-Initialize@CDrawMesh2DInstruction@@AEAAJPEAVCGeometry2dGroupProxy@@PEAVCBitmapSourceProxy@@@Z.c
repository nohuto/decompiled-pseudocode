/*
 * XREFs of ?Initialize@CDrawMesh2DInstruction@@AEAAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@@Z @ 0x18002F7A0
 * Callers:
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x18002F678 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CDrawMesh2DInstruction::Initialize(
        CDrawMesh2DInstruction *this,
        struct CGeometry2dGroupProxy *a2,
        struct CBitmapSourceProxy *a3)
{
  CBaseObject *v5; // rcx
  CBaseObject *v7; // rcx

  v5 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v5 )
    CBaseObject::Release(v5);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  v7 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v7 )
    CBaseObject::Release(v7);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    CMILRefCountBase::AddRef(a3);
  return 0LL;
}
