/*
 * XREFs of ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18008DDA8
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x18002DD10 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CImmersiveState::GetTopBackgroundWindow(CImmersiveState *this)
{
  return (struct CWindowData *)*((_QWORD *)this + 6);
}
