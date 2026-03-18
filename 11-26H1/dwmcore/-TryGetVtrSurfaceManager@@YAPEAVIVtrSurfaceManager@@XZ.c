/*
 * XREFs of ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18012EBFC
 * Callers:
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004AB04 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1800F66D8 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x18012C11C (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18012DA04 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BATCHFENCE@@@Z @ 0x18021C474 (-Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     <none>
 */

struct IVtrSurfaceManager *TryGetVtrSurfaceManager(void)
{
  __int64 v0; // rcx

  v0 = *(_QWORD *)(*((_QWORD *)g_pComposition + 708) + 24LL);
  if ( v0 )
    return (struct IVtrSurfaceManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 48LL))(v0);
  else
    return 0LL;
}
