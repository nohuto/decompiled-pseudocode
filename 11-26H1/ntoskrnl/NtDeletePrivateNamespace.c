/*
 * XREFs of NtDeletePrivateNamespace @ 0x140A963E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A967F0 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x140A96AFC (ObpRemoveNamespaceFromTable.c)
 */

NTSTATUS __fastcall NtDeletePrivateNamespace(void *a1)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  PVOID v3; // rbx
  int v4; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x10000u, ObpDirectoryObjectType, PreviousMode, &Object, &v6);
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
