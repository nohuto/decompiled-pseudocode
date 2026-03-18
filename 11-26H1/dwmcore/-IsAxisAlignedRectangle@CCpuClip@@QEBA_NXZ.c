/*
 * XREFs of ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800130B0
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180012DC0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCpuClip::IsAxisAlignedRectangle(__int64 **this)
{
  __int64 **v2; // rcx
  __int64 *v3; // rcx
  char v4; // bl
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 2;
  if ( *v2 )
    return CShapePtr::IsAxisAlignedRectangle(v2);
  v3 = *this;
  v4 = 1;
  if ( *this )
  {
    v5 = *v3;
    v7 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, int *))(v5 + 64))(v3, &v7) || v7 != 1 )
      return 0;
  }
  if ( !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(this + 4)) )
    return 0;
  return v4;
}
