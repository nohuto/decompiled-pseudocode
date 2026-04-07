/*
 * XREFs of ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x180057F68
 * Callers:
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800579B0 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CLivePreview::OnWindowTitleChange(CLivePreview *this, unsigned __int16 **a2)
{
  __int64 i; // r8
  __int64 v3; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 37);
    if ( *(unsigned __int16 ***)(v3 + 48 * i + 8) == a2 )
    {
      CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v3 + 48 * i), a2[2]);
      return;
    }
  }
}
