/*
 * XREFs of ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550
 * Callers:
 *     ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x18000FDD8 (-OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800593B0 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800593E0 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800739C4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ @ 0x18008D408 (-OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ @ 0x18008D96C (-OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800C95A0 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800C9ED8 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800C9F50 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800595A8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::SetDirtyFlags(CVisual *a1, int a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  CTopLevelWindow *v6; // rcx

  v2 = *((_QWORD *)a1 + 44);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 34) )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5 )
      {
        v6 = *(CTopLevelWindow **)(v5 + 440);
        if ( v6 )
          CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v6);
      }
    }
  }
  CVisual::SetDirtyFlags(a1, a2);
}
