/*
 * XREFs of sub_1400E9A60 @ 0x1400E9A60
 * Callers:
 *     sub_1400E9B64 @ 0x1400E9B64 (sub_1400E9B64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400E9A60(_QWORD *a1)
{
  __int64 v1; // rax
  NTSTATUS v3; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  v1 = a1[159];
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 512;
  v3 = PsCreateSystemThread(
         (PHANDLE)(*(_QWORD *)(v1 + 40) + 224LL),
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)sub_14012FCD0,
         a1);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(*(HANDLE *)(*(_QWORD *)(a1[159] + 40LL) + 224LL), 0x1FFFFFu, 0LL, 0, &Object, 0LL) >= 0 )
    {
      KeSetPriorityThread((PKTHREAD)Object, 16);
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v3;
}
