/*
 * XREFs of ?GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800CB54C
 * Callers:
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800CBA4C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualProxy *__fastcall CTopLevelWindow::GetCanvasClientTransformRootVisualProxy(CTopLevelWindow *this)
{
  struct CVisualProxy *result; // rax

  result = (struct CVisualProxy *)*((_QWORD *)this + 67);
  if ( result )
    return (struct CVisualProxy *)*((_QWORD *)result + 2);
  return result;
}
