/*
 * XREFs of ?QueryInterface@CRunnableTask@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805DE2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CRunnableTask::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CRunnableTask::QueryInterface((CRunnableTask *)(a1 - 32), a2, a3);
}
