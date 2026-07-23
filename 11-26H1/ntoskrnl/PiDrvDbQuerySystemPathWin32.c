/*
 * XREFs of PiDrvDbQuerySystemPathWin32 @ 0x1407B978C
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407BA198 (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     PiDrvDbFindNode @ 0x14052C028 (PiDrvDbFindNode.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1407B8734 (PiDrvDbGetNodeSystemRoot.c)
 *     IoQueryFileDosDeviceName @ 0x140920C50 (IoQueryFileDosDeviceName.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbQuerySystemPathWin32(UNICODE_STRING *String2, PUNICODE_STRING StringOut)
{
  PVOID v4; // r14
  NTSTATUS v5; // eax
  int Node; // ebx
  unsigned __int16 Length; // di
  unsigned __int16 v8; // di
  wchar_t *Buffer; // rdx
  wchar_t *v10; // rdx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // cx
  wchar_t *v13; // rax
  unsigned __int16 v14; // di
  int v15; // eax
  const UNICODE_STRING *v16; // rbx
  ULONG ShareAccess; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v21; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2a; // [rsp+58h] [rbp-A8h] BYREF
  PCUNICODE_STRING v23; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  int v27[4]; // [rsp+C0h] [rbp-40h] BYREF
  const wchar_t *v28; // [rsp+D0h] [rbp-30h]
  int *v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+170h] [rbp+70h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+180h] [rbp+80h] BYREF
  HANDLE FileHandle; // [rsp+188h] [rbp+88h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  ObjectNameInformation = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  v31 = 0;
  String2a = 0LL;
  v23 = 0LL;
  DestinationString = 0LL;
  v21 = 0LL;
  Source = 0LL;
  RtlInitUnicodeString(StringOut, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v21, 0LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = String2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u) >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = Object;
    Node = v5;
    if ( v5 >= 0 )
    {
      Node = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
      if ( Node >= 0 )
        Node = RtlDuplicateUnicodeString(1u, &ObjectNameInformation->Name, StringOut);
    }
    goto LABEL_39;
  }
  if ( String2->Length >= 0x16u && RtlPrefixUnicodeString(&PiDrvDbSystemRootNt, String2, 1u) )
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
    Length = String2->Length;
    if ( String2->Length > 0x18u && String2->Buffer[11] == 92 )
    {
      v21.Buffer = String2->Buffer + 11;
      v8 = Length - 22;
LABEL_18:
      v21.Length = v8;
      v21.MaximumLength = v8 + 2;
      goto LABEL_21;
    }
  }
  else if ( String2->Length > 0x26u
         && RtlPrefixUnicodeString(&PiDrvDbDriverStoreNodesRoot, String2, 1u)
         && (Buffer = String2->Buffer, Buffer[18] == 92) )
  {
    v10 = Buffer + 19;
    v11 = 0;
    String2a.Buffer = v10;
    if ( *v10 != 92 )
    {
      do
      {
        if ( !v10[v11] )
          break;
        ++v11;
      }
      while ( v10[v11] != 92 );
    }
    v12 = 2 * v11;
    String2a.Length = v12;
    String2a.MaximumLength = v12;
    v13 = &v10[(unsigned __int64)v12 >> 1];
    if ( *v13 == 92 )
    {
      v14 = String2->Length;
      v21.Buffer = &v10[(unsigned __int64)v12 >> 1];
      v8 = v14 - 2 * ((__int64)(unsigned int)((_DWORD)v13 - LODWORD(String2->Buffer)) >> 1);
      goto LABEL_18;
    }
  }
  else
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
  }
  v8 = v21.Length;
LABEL_21:
  Node = PiDrvDbFindNode(&String2a, (__int64 *)&Object);
  if ( Node < 0 )
    goto LABEL_39;
  v15 = *((_DWORD *)Object + 16);
  if ( (v15 & 1) != 0 )
  {
    RtlInitUnicodeString(&Source, L"C:\\Windows");
    DestinationString.MaximumLength = v8 + Source.Length + 2;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !DestinationString.Buffer )
      goto LABEL_24;
    Node = RtlAppendUnicodeStringToString(&DestinationString, &Source);
    if ( Node < 0 )
      goto LABEL_39;
    if ( InitIsWinPEMode )
    {
      memset_0(v27, 0, 0x70uLL);
      v30 = 0x4000000;
      v28 = L"InstRootDrive";
      v27[2] = 292;
      v29 = &v31;
      Node = RtlpQueryRegistryValues(2, (int)L"WinPE", (int)v27, 0, ShareAccess, 1);
      if ( Node < 0 || (unsigned int)(v31 - 65) > 0x19 )
      {
        Node = 0;
        *DestinationString.Buffer = 88;
      }
      else
      {
        *DestinationString.Buffer = v31;
      }
    }
  }
  else
  {
    if ( (v15 & 8) == 0 )
    {
      Node = -1073741275;
      goto LABEL_39;
    }
    Node = PiDrvDbGetNodeSystemRoot((__int64)Object, &v23);
    if ( Node < 0 )
      goto LABEL_39;
    v16 = v23;
    DestinationString.MaximumLength = v23->Length + v8 + 2;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !DestinationString.Buffer )
    {
LABEL_24:
      Node = -1073741670;
      goto LABEL_39;
    }
    Node = RtlAppendUnicodeStringToString(&DestinationString, v16);
    if ( Node < 0 )
      goto LABEL_39;
  }
  if ( v8 <= 2u || (Node = RtlAppendUnicodeStringToString(&DestinationString, &v21), Node >= 0) )
  {
    *StringOut = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
LABEL_39:
  RtlFreeAnsiString(&DestinationString);
  if ( ObjectNameInformation )
    ExFreePoolWithTag(ObjectNameInformation, 0);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Node;
}
