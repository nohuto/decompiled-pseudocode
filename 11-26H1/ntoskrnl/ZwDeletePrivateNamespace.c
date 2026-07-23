/*
 * XREFs of ZwDeletePrivateNamespace @ 0x140729B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
