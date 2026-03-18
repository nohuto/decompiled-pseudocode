/*
 * XREFs of ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801974C0
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801973A0 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetWorldRenderingScaleOverride(CVisual *this, float a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rcx
  float Buf1; // [rsp+38h] [rbp+10h] BYREF

  Buf1 = a2;
  v3 = memcmp_0(&Buf1, &`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue, 4uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v3 )
    CSparseStorage::SetData(v4, 14, 4u, &Buf1);
  else
    *((_DWORD *)*v4 + 1) &= ~0x40000u;
}
