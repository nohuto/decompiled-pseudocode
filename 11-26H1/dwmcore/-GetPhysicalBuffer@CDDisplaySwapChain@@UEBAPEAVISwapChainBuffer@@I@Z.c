/*
 * XREFs of ?GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x1801965F0
 * Callers:
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x180035018 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CDDisplaySwapChain::GetPhysicalBuffer(CDDisplaySwapChain *this, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 55);
  if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 56) - v2) >> 3) )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v2 + 8LL * a2);
}
