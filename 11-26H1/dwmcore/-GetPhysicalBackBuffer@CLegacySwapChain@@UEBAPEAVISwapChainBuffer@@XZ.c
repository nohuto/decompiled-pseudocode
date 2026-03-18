/*
 * XREFs of ?GetPhysicalBackBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x18018EBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CLegacySwapChain::GetPhysicalBackBuffer(CLegacySwapChain *this)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = *((_QWORD *)this + 44);
  v2 = *((unsigned int *)this + 119);
  if ( v2 >= (*((_QWORD *)this + 45) - v1) >> 3 )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v1 + 8 * v2);
}
