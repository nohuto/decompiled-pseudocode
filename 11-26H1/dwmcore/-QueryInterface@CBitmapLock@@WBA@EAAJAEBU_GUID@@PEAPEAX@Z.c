/*
 * XREFs of ?QueryInterface@CBitmapLock@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180225260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWarpLockSubresource::QueryInterface((CWarpLockSubresource *)(a1 - 16), a2, a3);
}
