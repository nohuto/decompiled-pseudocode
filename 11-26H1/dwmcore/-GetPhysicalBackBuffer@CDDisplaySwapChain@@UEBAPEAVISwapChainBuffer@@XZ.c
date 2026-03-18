/*
 * XREFs of ?GetPhysicalBackBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x18019F270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CDDisplaySwapChain::GetPhysicalBackBuffer(CDDisplaySwapChain *this)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = *((_QWORD *)this + 55);
  v2 = *((unsigned int *)this + 125);
  if ( v2 >= (*((_QWORD *)this + 56) - v1) >> 3 )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v1 + 8 * v2);
}
