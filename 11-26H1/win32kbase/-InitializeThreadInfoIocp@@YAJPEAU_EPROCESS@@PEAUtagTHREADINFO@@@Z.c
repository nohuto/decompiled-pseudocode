/*
 * XREFs of ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x14013420C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeThreadInfoIocp(struct _EPROCESS *a1, void **a2)
{
  _QWORD *v2; // r14
  NTSTATUS v5; // ebx
  void *v6; // rcx
  HANDLE *v7; // rdi
  HANDLE v8; // r15
  __int64 v9; // r8
  char v11; // [rsp+38h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp+50h] BYREF
  PVOID v15; // [rsp+C8h] [rbp+58h] BYREF

  v2 = a2 + 202;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateIoCompletion(a2 + 202, 0x1F0003u, &ObjectAttributes, 0);
  if ( v5 < 0 )
  {
    *v2 = 0LL;
    return (unsigned int)v5;
  }
  v6 = (void *)*v2;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v6, 0x1F0003u, 0LL, 0, &Object, 0LL);
  a2[201] = Object;
  if ( v5 < 0 )
  {
    a2[201] = 0LL;
    return (unsigned int)v5;
  }
  v7 = a2 + 203;
  v11 = 0;
  v5 = ObDuplicateObject(a1, *v2, a1, a2 + 203, 0, 0, 2, v11);
  if ( v5 < 0 )
    goto LABEL_10;
  v8 = *v7;
  HandleInformation = 0LL;
  v15 = 0LL;
  v5 = ObReferenceObjectByHandle(v8, 0x1F0003u, 0LL, 1, &v15, &HandleInformation);
  if ( v5 >= 0 )
  {
    LOBYTE(v9) = 1;
    BYTE1(Object) = 1;
    LOBYTE(Object) = (HandleInformation.HandleAttributes & 2) != 0;
    v5 = ObSetHandleAttributes(v8, &Object, v9);
    ObfDereferenceObject(v15);
  }
  if ( v5 < 0 )
  {
    ObCloseHandle(*v7, 1);
    goto LABEL_10;
  }
  v7 = a2 + 205;
  v5 = ZwCreateWaitCompletionPacket(a2 + 205, 1LL, &ObjectAttributes);
  if ( v5 < 0 )
  {
LABEL_10:
    *v7 = 0LL;
    return (unsigned int)v5;
  }
  return (unsigned int)ZwAssociateWaitCompletionPacket(*v7, *v2, a2[204], 0LL, 0xFFFFFFFF80000000uLL, 0, 0LL, 0LL);
}
