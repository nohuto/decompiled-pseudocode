/*
 * XREFs of ?GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800CFF94
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800D054C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualProxy *__fastcall CTopLevelWindow::GetCanvasClientTransformRootVisualProxy(CTopLevelWindow *this)
{
  struct CVisualProxy *result; // rax

  result = (struct CVisualProxy *)*((_QWORD *)this + 69);
  if ( result )
    return (struct CVisualProxy *)*((_QWORD *)result + 2);
  return result;
}
