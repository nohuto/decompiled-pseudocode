/*
 * XREFs of NvmeNamespaceCreateSystemThread @ 0x140102D70
 * Callers:
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A9E6C (NvmeNamespaceStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeNamespaceCreateSystemThread(__int64 a1)
{
  void **v1; // rdi
  NTSTATUS v2; // ebx
  void *v3; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 112) &= ~0x20uLL;
  v1 = (void **)(a1 + 464);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = PsCreateSystemThread(
         (PHANDLE)(a1 + 464),
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)NvmeNamespaceSystemThread,
         (PVOID)a1);
  if ( v2 >= 0 )
  {
    v3 = *v1;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v3, 0x1FFFFFu, 0LL, 0, &Object, 0LL) >= 0 )
    {
      KeSetPriorityThread((PKTHREAD)Object, 16);
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v2;
}
