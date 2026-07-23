/*
 * XREFs of MiCreatePartitionNamespace @ 0x140885B24
 * Callers:
 *     MiInitializeMemoryEvents @ 0x140885C60 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x140729560 (ZwCreateDirectoryObjectEx.c)
 *     ObCleanupSecurityDescriptor @ 0x1407C5184 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1407C51FC (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  HANDLE *v2; // rdi
  NTSTATUS KernelObjectsSD; // ebx
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+1Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  v2 = (HANDLE *)(a1 + 304);
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 304), 0xF000Fu, &ObjectAttributes, 0LL, 2u);
  if ( KernelObjectsSD < 0 )
    goto LABEL_4;
  KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
  if ( KernelObjectsSD >= 0 )
  {
    ObjectAttributes.RootDirectory = *v2;
    v2 = (HANDLE *)(a1 + 312);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&MiKernelObjectsDirectoryName;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    KernelObjectsSD = ZwCreateDirectoryObjectEx((PHANDLE)(a1 + 312), 0xF000Fu, &ObjectAttributes, 0LL, 0);
    if ( KernelObjectsSD < 0 )
LABEL_4:
      *v2 = 0LL;
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
