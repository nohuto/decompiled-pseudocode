/*
 * XREFs of ?v_DelegatingQueryService@CImmersiveShellComponentWithSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18023C3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CImmersiveShellComponentWithSite::v_DelegatingQueryService(
        IUnknown **this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  return IUnknown_QueryService(*(this - 1), a2, a3, a4);
}
