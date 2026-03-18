/*
 * XREFs of ?SetFrontBufferRenderingOnNextFrame@CScribbleSwapChain@@UEAAX_N@Z @ 0x18029B0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScribbleSwapChain::SetFrontBufferRenderingOnNextFrame(CScribbleSwapChain *this, char a2)
{
  *((_BYTE *)this + 20) = a2;
}
