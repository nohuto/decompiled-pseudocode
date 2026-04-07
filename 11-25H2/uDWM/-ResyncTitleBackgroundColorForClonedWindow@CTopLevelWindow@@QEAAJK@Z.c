/*
 * XREFs of ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18007C1FC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z @ 0x18007B838 (-OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800AE778 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  int v4; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 65) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 32LL))(*((_QWORD *)this + 66));
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 48LL))(*((_QWORD *)this + 65));
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1445u, 0LL);
  }
  return v1;
}
