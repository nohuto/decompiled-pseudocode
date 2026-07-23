/*
 * XREFs of ZwOpenPrivateNamespace @ 0x14072A620
 * Callers:
 *     DifZwOpenPrivateNamespaceWrapper @ 0x1406B0720 (DifZwOpenPrivateNamespaceWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
