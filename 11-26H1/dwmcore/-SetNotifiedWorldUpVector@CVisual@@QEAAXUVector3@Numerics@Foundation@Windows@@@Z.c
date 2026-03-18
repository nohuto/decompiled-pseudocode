/*
 * XREFs of ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x18017849C
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetNotifiedWorldUpVector(__int64 a1, const void *a2)
{
  int v4; // eax
  struct CSparseStorage::AllocatedStorage **v5; // rcx

  v4 = memcmp_0(a2, &`CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue, 0xCuLL);
  v5 = (struct CSparseStorage::AllocatedStorage **)(a1 + 216);
  if ( v4 )
    CSparseStorage::SetData(v5, 11, 0xCu, a2);
  else
    *((_DWORD *)*v5 + 1) &= ~0x200000u;
}
