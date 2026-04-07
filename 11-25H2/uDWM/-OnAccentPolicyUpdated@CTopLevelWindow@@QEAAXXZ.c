/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019BBC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?OnAccentPolicyChanged@CWindowData@@QEAAXXZ @ 0x180080544 (-OnAccentPolicyChanged@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnAccentPolicyUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rax
  bool v2; // dl

  v1 = *((_QWORD *)this + 89);
  if ( !v1 || (v2 = 1, (*(_BYTE *)(v1 + 672) & 1) == 0) || (*(_BYTE *)(v1 + 676) & 1) != 0 )
    v2 = 0;
  CTopLevelWindow::UpdateAccent((CWindowBackgroundTreatmentVisual **)this, v2);
}
