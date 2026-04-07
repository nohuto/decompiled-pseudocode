/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@MEAAXVDirtyFlags@@@Z @ 0x180087E20
 * Callers:
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800148E0 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x180087D98 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 * Callees:
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800595A8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::SetDirtyFlags(__int64 a1, int a2)
{
  __int64 v4; // rax
  CTopLevelWindow *v5; // rcx

  if ( *(_BYTE *)(a1 + 256) )
  {
    v4 = *(_QWORD *)(a1 + 216);
    if ( v4 )
    {
      v5 = *(CTopLevelWindow **)(v4 + 440);
      if ( v5 )
        CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v5);
    }
  }
  CVisual::SetDirtyFlags((CVisual *)a1, a2);
}
