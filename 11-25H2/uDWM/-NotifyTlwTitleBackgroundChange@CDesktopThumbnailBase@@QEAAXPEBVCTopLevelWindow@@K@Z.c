/*
 * XREFs of ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800AE778
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x18004BDF8 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18007C1FC (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow *a2)
{
  int Index; // eax
  __int64 v3; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2);
  if ( Index >= 0 )
    CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(*(CTopLevelWindow **)(*(_QWORD *)(v3 + 200)
                                                                                   + 16LL * (unsigned int)Index
                                                                                   + 8));
}
