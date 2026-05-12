/*
 * XREFs of sub_1400FA5FC @ 0x1400FA5FC
 * Callers:
 *     sub_14019EDA4 @ 0x14019EDA4 (sub_14019EDA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400FA5FC(__int64 a1)
{
  void **v1; // rdi
  NTSTATUS v2; // ebx
  void *v3; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 112) &= ~0x20uLL;
  v1 = (void **)(a1 + 464);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 512;
  v2 = PsCreateSystemThread(
         (PHANDLE)(a1 + 464),
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)sub_1401186F0,
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
