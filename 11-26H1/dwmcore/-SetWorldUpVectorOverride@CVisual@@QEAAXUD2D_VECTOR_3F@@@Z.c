/*
 * XREFs of ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18019751C
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801973A0 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetWorldUpVectorOverride(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  int v4; // eax
  struct CSparseStorage::AllocatedStorage **v5; // rcx

  v4 = memcmp_0(a2, &`CVisual::SetWorldUpVectorOverride'::`2'::sc_defaultValue, 0xCuLL);
  v5 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v4 )
    CSparseStorage::SetData(v5, 15, 0xCu, a2);
  else
    *((_DWORD *)*v5 + 1) &= ~0x20000u;
}
