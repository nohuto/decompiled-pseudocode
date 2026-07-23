/*
 * XREFs of ZwCreatePrivateNamespace @ 0x1407297A0
 * Callers:
 *     DifZwCreatePrivateNamespaceWrapper @ 0x1406A4780 (DifZwCreatePrivateNamespaceWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
