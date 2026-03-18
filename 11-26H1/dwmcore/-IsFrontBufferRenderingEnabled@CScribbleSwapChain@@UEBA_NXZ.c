/*
 * XREFs of ?IsFrontBufferRenderingEnabled@CScribbleSwapChain@@UEBA_NXZ @ 0x18021FFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CScribbleSwapChain::IsFrontBufferRenderingEnabled(CScribbleSwapChain *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 21) || *((_DWORD *)this + 4) == 2 )
    return 1;
  return result;
}
