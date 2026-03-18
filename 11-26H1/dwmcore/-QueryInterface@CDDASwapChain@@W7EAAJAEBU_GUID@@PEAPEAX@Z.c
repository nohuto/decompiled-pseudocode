/*
 * XREFs of ?QueryInterface@CDDASwapChain@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A3E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  return CCompSwapChain::QueryInterface(a1 - 8, a2, a3);
}
