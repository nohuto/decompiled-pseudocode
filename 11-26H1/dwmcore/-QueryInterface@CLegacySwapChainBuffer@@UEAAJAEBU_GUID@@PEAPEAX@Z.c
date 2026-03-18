/*
 * XREFs of ?QueryInterface@CLegacySwapChainBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacySwapChainBuffer::QueryInterface(__int64 this, _QWORD *a2, _QWORD *a3)
{
  return CMILCOMBaseT<ISwapChainBuffer,ISwapChainBuffer,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
