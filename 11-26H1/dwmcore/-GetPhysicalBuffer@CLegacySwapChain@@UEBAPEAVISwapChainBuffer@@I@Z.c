/*
 * XREFs of ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x180186E80
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802A67C0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CLegacySwapChain::GetPhysicalBuffer(CLegacySwapChain *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 44);
  if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 45) - v2) >> 3) )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v2 + 8LL * a2);
}
