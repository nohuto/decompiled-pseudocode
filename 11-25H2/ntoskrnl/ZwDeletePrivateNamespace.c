/*
 * XREFs of ZwDeletePrivateNamespace @ 0x14069CD00
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
