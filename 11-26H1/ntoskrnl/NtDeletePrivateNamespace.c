/*
 * XREFs of NtDeletePrivateNamespace @ 0x140A9A560
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A9A970 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x140A9AC7C (ObpRemoveNamespaceFromTable.c)
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  PVOID v3; // rbx
  NTSTATUS v4; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(NamespaceHandle, 0x10000u, ObpDirectoryObjectType, PreviousMode, &Object, &v6);
  if ( result >= 0 )
  {
    v3 = Object;
    if ( *((_QWORD *)Object + 40) )
    {
      v4 = ObpVerifyCreatorAccessCheck((char *)Object + 392);
      if ( v4 >= 0 )
        v4 = ObpRemoveNamespaceFromTable(v3);
    }
    else
    {
      v4 = -1073741816;
    }
    ObfDereferenceObject(v3);
    return v4;
  }
  return result;
}
