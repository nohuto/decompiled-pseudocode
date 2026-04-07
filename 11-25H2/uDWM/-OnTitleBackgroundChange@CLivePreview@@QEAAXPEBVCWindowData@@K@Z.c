/*
 * XREFs of ?OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z @ 0x18007B838
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CLivePreview::OnTitleBackgroundChange(
        CLivePreview *this,
        const struct CWindowData *a2,
        unsigned int a3)
{
  __int64 i; // r9
  __int64 v4; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 80); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + 37);
    if ( *(const struct CWindowData **)(v4 + 48 * i + 8) == a2 )
    {
      CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(*(CTopLevelWindow **)(v4 + 48 * i), a3);
      return;
    }
  }
}
