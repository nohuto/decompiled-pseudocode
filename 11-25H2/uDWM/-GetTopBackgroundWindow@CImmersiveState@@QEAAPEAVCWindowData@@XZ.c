/*
 * XREFs of ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18009A2B8
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CImmersiveState::GetTopBackgroundWindow(CImmersiveState *this)
{
  return (struct CWindowData *)*((_QWORD *)this + 6);
}
