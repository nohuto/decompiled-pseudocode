/*
 * XREFs of ?AddRef@CRunnableTask@@WBA@EAAKXZ @ 0x1805DC900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::AddRef(__int64 a1)
{
  return CRunnableTask::AddRef((CRunnableTask *)(a1 - 16));
}
