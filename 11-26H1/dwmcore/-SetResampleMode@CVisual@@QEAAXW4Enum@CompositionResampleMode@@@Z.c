/*
 * XREFs of ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800570F4
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18021D0BC (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetResampleMode(__int64 a1, int a2)
{
  int v3; // eax
  struct CSparseStorage::AllocatedStorage **v4; // rcx
  int Buf1; // [rsp+38h] [rbp+10h] BYREF

  Buf1 = a2;
  v3 = memcmp_0(&Buf1, &`CVisual::SetResampleMode'::`2'::sc_defaultValue, 4uLL);
  v4 = (struct CSparseStorage::AllocatedStorage **)(a1 + 216);
  if ( v3 )
    CSparseStorage::SetData(v4, 7u, 4u, &Buf1);
  else
    *((_DWORD *)*v4 + 1) &= ~0x2000000u;
}
