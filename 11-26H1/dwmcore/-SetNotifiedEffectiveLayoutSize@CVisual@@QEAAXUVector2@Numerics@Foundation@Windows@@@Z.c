/*
 * XREFs of ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801784FC
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetNotifiedEffectiveLayoutSize(__int64 a1, __int64 a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rcx
  _QWORD Buf1[3]; // [rsp+20h] [rbp-18h] BYREF

  Buf1[0] = a2;
  v3 = memcmp_0(Buf1, &`CVisual::SetNotifiedEffectiveLayoutSize'::`2'::sc_defaultValue, 8uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)(a1 + 216);
  if ( v3 )
    CSparseStorage::SetData(v4, 9, 8u, Buf1);
  else
    *((_DWORD *)*v4 + 1) &= ~0x800000u;
}
