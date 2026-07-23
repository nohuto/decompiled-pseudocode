/*
 * XREFs of TmPropagationFailed @ 0x140536B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPropagationFailed(PKRESOURCEMANAGER ResourceManager, ULONG RequestCookie, NTSTATUS Status)
{
  return __imp_TmPropagationFailed(ResourceManager, RequestCookie, Status);
}
