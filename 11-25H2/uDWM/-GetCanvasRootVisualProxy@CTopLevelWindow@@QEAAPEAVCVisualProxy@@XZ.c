/*
 * XREFs of ?GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x18008AC9C
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800D054C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800E31F0 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualProxy *__fastcall CTopLevelWindow::GetCanvasRootVisualProxy(CTopLevelWindow *this)
{
  struct CVisualProxy *result; // rax

  result = (struct CVisualProxy *)*((_QWORD *)this + 31);
  if ( result )
    return (struct CVisualProxy *)*((_QWORD *)result + 2);
  return result;
}
