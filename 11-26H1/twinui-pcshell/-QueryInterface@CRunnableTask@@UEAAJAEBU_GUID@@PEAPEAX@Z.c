/*
 * XREFs of ?QueryInterface@CRunnableTask@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180602D90
 * Callers:
 *     ?QueryInterface@CRunnableTask@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180602DB0 (-QueryInterface@CRunnableTask@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRunnableTask@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180602DC0 (-QueryInterface@CRunnableTask@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRunnableTask@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180602DD0 (-QueryInterface@CRunnableTask@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRunnableTask@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180602DE0 (-QueryInterface@CRunnableTask@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CRunnableTask::QueryInterface(CRunnableTask *this, const struct _GUID *a2, void **a3)
{
  return QISearch(this, (LPCQITAB)&`CRunnableTask::QueryInterface'::`2'::qit, a2, a3);
}
