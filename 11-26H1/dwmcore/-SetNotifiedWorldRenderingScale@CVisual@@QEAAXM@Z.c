/*
 * XREFs of ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x180178440
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetNotifiedWorldRenderingScale(CVisual *this, float a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rcx
  float Buf1; // [rsp+38h] [rbp+10h] BYREF

  Buf1 = a2;
  v3 = memcmp_0(&Buf1, &`CVisual::SetNotifiedWorldRenderingScale'::`2'::sc_defaultValue, 4uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v3 )
    CSparseStorage::SetData(v4, 8, 4u, &Buf1);
  else
    *((_DWORD *)*v4 + 1) &= ~0x1000000u;
}
