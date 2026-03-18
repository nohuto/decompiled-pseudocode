/*
 * XREFs of ?GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ @ 0x18012C884
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18012C310 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct CSurfaceManager *GetSurfaceManager(void)
{
  struct CSurfaceManager *result; // rax

  result = 0LL;
  if ( g_pComposition )
    return (struct CSurfaceManager *)*((_QWORD *)g_pComposition + 78);
  return result;
}
