/*
 * XREFs of ?QueryInterface@CWarpLockSubresource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801ABF60
 * Callers:
 *     ?QueryInterface@CBitmapLock@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180225260 (-QueryInterface@CBitmapLock@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CWarpLockSubresource::QueryInterface(CWarpLockSubresource *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapLock,IBitmapLock,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
