/*
 * XREFs of ?Release@CDDisplaySwapChainBuffer@@UEAAKXZ @ 0x18021FCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDDisplaySwapChainBuffer::Release(__int64 this)
{
  return CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease(this);
}
