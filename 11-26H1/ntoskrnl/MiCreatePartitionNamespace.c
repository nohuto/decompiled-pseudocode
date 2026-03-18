/*
 * XREFs of MiCreatePartitionNamespace @ 0x14087F724
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14087F860 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x140724990 (ZwCreateDirectoryObjectEx.c)
 *     ObCleanupSecurityDescriptor @ 0x1407C2124 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1407C219C (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  __int64 *v2; // rdi
  int DirectoryObject; // ebx
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h]
  int v8; // [rsp+70h] [rbp+1Fh]
  int v9; // [rsp+74h] [rbp+23h]
  __int64 v10; // [rsp+78h] [rbp+27h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+88h] [rbp+37h]
  int v13; // [rsp+8Ch] [rbp+3Bh]
  _OWORD *v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+47h]

  v9 = 0;
  v13 = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = 48;
  p_DestinationString = &DestinationString;
  v2 = (__int64 *)(a1 + 304);
  v14 = (_OWORD *)SePublicDefaultUnrestrictedSd;
  v10 = 0LL;
  v12 = 576;
  v15 = 0LL;
  DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 304, 983055LL);
  if ( DirectoryObject < 0 )
    goto LABEL_4;
  DirectoryObject = ObCreateKernelObjectsSD(SecurityDescriptor);
  if ( DirectoryObject >= 0 )
  {
    v10 = *v2;
    v2 = (__int64 *)(a1 + 312);
    v8 = 48;
    p_DestinationString = (UNICODE_STRING *)&MiKernelObjectsDirectoryName;
    v12 = 576;
    v14 = SecurityDescriptor;
    v15 = 0LL;
    DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 312, 983055LL);
    if ( DirectoryObject < 0 )
LABEL_4:
      *v2 = 0LL;
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)DirectoryObject;
}
