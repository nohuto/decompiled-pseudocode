/*
 * XREFs of ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801B7D60
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1801B7C58 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetRelativeOffsetInternal(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  int v4; // eax
  struct CSparseStorage::AllocatedStorage **v5; // rcx

  v4 = memcmp_0(a2, &`CVisual::SetRelativeOffsetInternal'::`2'::sc_defaultValue, 0xCuLL);
  v5 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v4 )
    CSparseStorage::SetData(v5, 4, 0xCu, a2);
  else
    *((_DWORD *)*v5 + 1) &= ~0x10000000u;
}
