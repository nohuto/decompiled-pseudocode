/*
 * XREFs of ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1400DD840
 * Callers:
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 * Callees:
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 */

__int64 __fastcall InitializeThreadInfoIocp(struct _EPROCESS *a1, void **a2)
{
  _QWORD *v2; // r14
  NTSTATUS v5; // ebx
  void *v6; // rcx
  HANDLE *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r9
  char v11; // [rsp+38h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

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
    goto LABEL_8;
  LOBYTE(v9) = 1;
  v5 = ProtectHandle(*v7, v8, 0LL, v9);
  if ( v5 < 0 )
  {
    ObCloseHandle(*v7, 1);
    goto LABEL_8;
  }
  v7 = a2 + 205;
  v5 = ZwCreateWaitCompletionPacket(a2 + 205, 1LL, &ObjectAttributes);
  if ( v5 < 0 )
  {
LABEL_8:
    *v7 = 0LL;
    return (unsigned int)v5;
  }
  return (unsigned int)ZwAssociateWaitCompletionPacket(*v7, *v2, a2[204], 0LL);
}
