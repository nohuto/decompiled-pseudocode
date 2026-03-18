/*
 * XREFs of ?AddRef@CSwapChainRealization@@UEAAKXZ @ 0x1802AC9F0
 * Callers:
 *     ?AddRef@CSwapChainRealization@@W7EAAKXZ @ 0x1802ACA00 (-AddRef@CSwapChainRealization@@W7EAAKXZ.c)
 *     ?AddRef@CSwapChainRealization@@WBA@EAAKXZ @ 0x1802ACA10 (-AddRef@CSwapChainRealization@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainRealization::AddRef(CSwapChainRealization *this)
{
  return CMILRefCountImpl::AddReference((CSwapChainRealization *)((char *)this + 24));
}
