/*
 * XREFs of ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x1801DE61C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

__int64 __fastcall CVisual::ProcessSetBlurredWallpaperSurfaceRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT *a3)
{
  int v4; // eax
  struct CSparseStorage::AllocatedStorage **v5; // rcx
  __int128 Buf1; // [rsp+20h] [rbp-18h] BYREF

  Buf1 = *(_OWORD *)((char *)a3 + 8);
  v4 = memcmp_0(&Buf1, &`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue, 0x10uLL);
  v5 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 216);
  if ( v4 )
    CSparseStorage::SetData(v5, 16, 0x10u, &Buf1);
  else
    *((_DWORD *)*v5 + 1) &= ~0x10000u;
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
