/*
 * XREFs of ?QueryInterface@CRunnableTask@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805DE2A0
 * Callers:
 *     ?QueryInterface@CRunnableTask@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805DE2C0 (-QueryInterface@CRunnableTask@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRunnableTask@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805DE2D0 (-QueryInterface@CRunnableTask@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRunnableTask@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805DE2E0 (-QueryInterface@CRunnableTask@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRunnableTask@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805DE2F0 (-QueryInterface@CRunnableTask@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CRunnableTask::QueryInterface(CRunnableTask *this, const struct _GUID *a2, void **a3)
{
  return QISearch(this, (LPCQITAB)&`CRunnableTask::QueryInterface'::`2'::qit, a2, a3);
}
