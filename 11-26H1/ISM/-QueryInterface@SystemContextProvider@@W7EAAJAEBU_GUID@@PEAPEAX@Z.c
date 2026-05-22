/*
 * XREFs of ?QueryInterface@SystemContextProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010C490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall SystemContextProvider::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return SystemContextProvider::QueryInterface((SystemContextProvider *)(a1 - 8), a2, a3);
}
