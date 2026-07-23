/*
 * XREFs of ObCreateSiloRootDirectory @ 0x1408AD404
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x140269180 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140728AC0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x140729560 (ZwCreateDirectoryObjectEx.c)
 *     PsIsJobParentImmutable @ 0x140777A74 (PsIsJobParentImmutable.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x1408AD8F0 (ObpGetSilosRootDirectory.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsGetParentSilo @ 0x14093AD80 (PsGetParentSilo.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     PsCreateSiloContext @ 0x140A4BC80 (PsCreateSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A4BD94 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x140A4BF80 (PsInsertSiloContext.c)
 *     PsGetSiloIdentifier @ 0x140B0B540 (PsGetSiloIdentifier.c)
 */

__int64 __fastcall ObCreateSiloRootDirectory(__int64 a1, int a2)
{
  char v2; // r14
  PVOID v4; // r15
  struct _DMA_ADAPTER *v5; // rdi
  __int64 v6; // rcx
  __int64 ParentSilo; // rbx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // r13
  ULONG SiloIdentifier; // eax
  int SilosRootDirectory; // ebx
  NTSTATUS v13; // eax
  struct _DMA_ADAPTER *v14; // r8
  HANDLE Handle; // [rsp+38h] [rbp-59h] BYREF
  struct _DMA_ADAPTER *v16; // [rsp+40h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-49h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+58h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  PVOID Object; // [rsp+90h] [rbp-1h] BYREF
  UNICODE_STRING String; // [rsp+98h] [rbp+7h] BYREF
  char v23; // [rsp+A8h] [rbp+17h] BYREF

  v2 = a2;
  v17 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  DirectoryHandle = 0LL;
  v16 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 4) != 0 && (a2 & 2) == 0 || !PsIsJobParentImmutable(a1) )
    return 3221225485LL;
  ParentSilo = PsGetParentSilo(v6);
  if ( ParentSilo != HalSystemVectorDispatchEntry() )
    return 3221227289LL;
  v9 = (struct _LIST_ENTRY *)PsGetParentSilo(a1);
  v10 = PsAttachSiloToCurrentThread(v9);
  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = (wchar_t *)&v23;
  SiloIdentifier = PsGetSiloIdentifier(a1);
  SilosRootDirectory = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
  if ( SilosRootDirectory >= 0 )
  {
    SilosRootDirectory = ObpGetSilosRootDirectory(&v18);
    if ( SilosRootDirectory >= 0 )
    {
      if ( (v2 & 1) == 0
        || (ObjectAttributes.Length = 48,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName,
            ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.Attributes = 512,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            SilosRootDirectory = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes),
            SilosRootDirectory >= 0) )
      {
        ObjectAttributes.RootDirectory = v18;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Attributes = 592;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        SilosRootDirectory = ZwCreateDirectoryObjectEx(&Handle, 0xF000Fu, &ObjectAttributes, DirectoryHandle, 0);
        if ( SilosRootDirectory >= 0 )
        {
          Object = 0LL;
          v13 = ObReferenceObjectByHandle(Handle, 0xF000Fu, ObpDirectoryObjectType, 0, &Object, 0LL);
          v4 = Object;
          SilosRootDirectory = v13;
          if ( v13 >= 0 )
          {
            SilosRootDirectory = PsCreateSiloContext(
                                   a1,
                                   16,
                                   1,
                                   (unsigned int)ObpDirectoryTeardownCallback,
                                   (__int64)&v16);
            if ( SilosRootDirectory < 0 )
            {
              v5 = v16;
            }
            else
            {
              ObfReferenceObjectWithTag(v4, 0x7254624Fu);
              v5 = v16;
              v14 = v16;
              *(_QWORD *)&v16->Version = v4;
              SilosRootDirectory = PsInsertSiloContext(a1, (unsigned int)PsObjectDirectoryTeardownSlot, v14);
              if ( SilosRootDirectory >= 0 )
              {
                SilosRootDirectory = PsInsertPermanentSiloContextEx(
                                       a1,
                                       (unsigned int)PsObjectDirectorySiloContextSlot,
                                       v4,
                                       1LL);
                if ( SilosRootDirectory >= 0 && (v2 & 2) != 0 )
                {
                  if ( (v2 & 4) == 0
                    || (ObjectAttributes.Length = 48,
                        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDosDevicesShortName,
                        ObjectAttributes.RootDirectory = 0LL,
                        ObjectAttributes.Attributes = 512,
                        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                        SilosRootDirectory = ZwOpenDirectoryObject(&v17, 3u, &ObjectAttributes),
                        SilosRootDirectory >= 0) )
                  {
                    SilosRootDirectory = ObpInitializeRootNamespace(a1, Handle, v17, (__int64)&v5->DmaOperations);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v17 )
    ZwClose(v17);
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v5 )
    HalPutDmaAdapter(v5);
  PsDetachSiloFromCurrentThread(v10);
  return (unsigned int)SilosRootDirectory;
}
