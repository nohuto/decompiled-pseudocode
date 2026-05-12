/*
 * XREFs of NvmeControllerCreateCommandTimeoutDetectThread @ 0x1400F2140
 * Callers:
 *     NvmeControllerCreateErrorRecoveryContext @ 0x1400F2248 (NvmeControllerCreateErrorRecoveryContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerCreateCommandTimeoutDetectThread(_QWORD *a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  __int64 v4; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v2 = a1[161];
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = PsCreateSystemThread(
         (PHANDLE)(*(_QWORD *)(v2 + 40) + 224LL),
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)NvmeControllerCommandTimeoutDetectThread,
         a1);
  if ( v3 >= 0 )
  {
    v4 = a1[161];
    Object = 0LL;
    if ( ObReferenceObjectByHandle(*(HANDLE *)(*(_QWORD *)(v4 + 40) + 224LL), 0x1FFFFFu, 0LL, 0, &Object, 0LL) >= 0 )
    {
      KeSetPriorityThread((PKTHREAD)Object, 16);
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v3;
}
