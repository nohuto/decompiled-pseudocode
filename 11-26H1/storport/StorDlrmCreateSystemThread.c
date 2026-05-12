/*
 * XREFs of StorDlrmCreateSystemThread @ 0x1401B0C2C
 * Callers:
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B0860 (StorAdapterInitializeDlrmIfSupported.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorDlrmCreateSystemThread(char *StartContext)
{
  int v2; // eax
  void **v3; // rdi
  NTSTATUS v4; // ebx
  void *v5; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !StartContext )
    return 3221225485LL;
  v2 = *((_DWORD *)StartContext + 3);
  v3 = (void **)(StartContext + 80);
  ObjectAttributes.Length = 48;
  *((_DWORD *)StartContext + 3) = v2 & 0xFFFFFFFB;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = PsCreateSystemThread(
         (PHANDLE)StartContext + 10,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)StorAdapterDlrmSystemThread,
         StartContext);
  if ( v4 >= 0 )
  {
    v5 = *v3;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v5, 0x1FFFFFu, 0LL, 0, &Object, 0LL) >= 0 )
    {
      KeSetPriorityThread((PKTHREAD)Object, 16);
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v4;
}
