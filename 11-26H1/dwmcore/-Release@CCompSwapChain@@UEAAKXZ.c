/*
 * XREFs of ?Release@CCompSwapChain@@UEAAKXZ @ 0x18021F7A0
 * Callers:
 *     ?Release@CCompSwapChain@@W7EAAKXZ @ 0x1802A3E70 (-Release@CCompSwapChain@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompSwapChain::Release(__int64 this)
{
  return CMILRefCountBaseT<ISwapChain,CMilObjectDeleter>::InternalRelease(this);
}
