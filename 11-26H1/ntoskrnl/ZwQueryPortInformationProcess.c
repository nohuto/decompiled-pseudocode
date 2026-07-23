/*
 * XREFs of ZwQueryPortInformationProcess @ 0x14072AC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwQueryPortInformationProcess(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
