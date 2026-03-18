/*
 * XREFs of ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x18011021C
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801B32D0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetRelativeLayoutSizeInternal(CVisual *this, struct D2D_SIZE_F a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rcx
  _QWORD Buf1[3]; // [rsp+20h] [rbp-18h] BYREF

  Buf1[0] = a2;
  v3 = memcmp_0(Buf1, &`CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue, 8uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v3 )
    CSparseStorage::SetData(v4, 3u, 8u, Buf1);
  else
    *((_DWORD *)*v4 + 1) &= ~0x20000000u;
}
