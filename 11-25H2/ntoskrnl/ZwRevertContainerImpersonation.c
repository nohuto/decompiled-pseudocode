/*
 * XREFs of ZwRevertContainerImpersonation @ 0x14069E2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwRevertContainerImpersonation(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
