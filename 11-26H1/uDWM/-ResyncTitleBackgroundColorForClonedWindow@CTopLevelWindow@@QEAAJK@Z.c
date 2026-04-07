/*
 * XREFs of ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18008D430
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z @ 0x18006AC94 (-OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800ADE44 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(CTopLevelWindow *this)
{
  if ( *((_QWORD *)this + 63) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 32LL))(*((_QWORD *)this + 64));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 48LL))(*((_QWORD *)this + 63));
  }
  return 0LL;
}
