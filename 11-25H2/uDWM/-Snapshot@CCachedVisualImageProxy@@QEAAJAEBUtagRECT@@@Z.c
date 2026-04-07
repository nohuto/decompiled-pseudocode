/*
 * XREFs of ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x1800295A8
 * Callers:
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180023514 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z @ 0x18002773C (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180028E40 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180051944 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800AE364 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800C5B98 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImageProxy::Snapshot(CCachedVisualImageProxy *this, const struct tagRECT *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct tagRECT *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 512LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
