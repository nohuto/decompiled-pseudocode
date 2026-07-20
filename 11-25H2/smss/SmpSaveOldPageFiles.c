/*
 * XREFs of SmpSaveOldPageFiles @ 0x140009FD0
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpDeletePagingFile @ 0x140010C88 (SmpDeletePagingFile.c)
 *     SmpQueryPathFromRegistry @ 0x14001286C (SmpQueryPathFromRegistry.c)
 *     SmpSaveOldPageFile @ 0x140012C9C (SmpSaveOldPageFile.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

void SmpSaveOldPageFiles()
{
  unsigned int v0; // ebx
  struct _UNICODE_STRING *v1; // rdi
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  struct _UNICODE_STRING *v5; // r14
  NTSTATUS v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // edi
  USHORT Length; // ax
  __int64 v10; // rax
  PVOID *v11; // r14
  struct _UNICODE_STRING ResultLength_8; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING v18; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  __int128 v20; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v23[68]; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t pszDest[64]; // [rsp+208h] [rbp+100h] BYREF

  v15[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash";
  v0 = 0;
  ValueName.Buffer = L"SavePageFileContents";
  v15[0] = 10092696LL;
  v17[1] = L"SavedPageFilePath";
  *(_QWORD *)&ValueName.Length = 2752552LL;
  v18.Buffer = L"SavedPageFiles";
  v1 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v17[0] = 2359330LL;
  *(_QWORD *)&v18.Length = 1966108LL;
  v20 = 0LL;
  ResultLength[0] = 0;
  DestinationString = 0LL;
  memset_0(v23, 0, 0x108uLL);
  KeyHandle = 0LL;
  ResultLength_8 = 0LL;
  KeyValueInformation = 0LL;
  if ( SmpUseDedicatedDumpFile
    && (ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v15,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 64,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0)
    && NtQueryValueKey(
         SmpCrashDumpKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         &KeyValueInformation,
         0x10u,
         ResultLength) >= 0
    && (_DWORD)KeyValueInformation == 4
    && DWORD2(KeyValueInformation) == 1 )
  {
    SmpSavePageFiles = 1;
  }
  else if ( !SmpSavePageFiles )
  {
    v6 = 0;
    goto LABEL_26;
  }
  v3 = SmpQueryPathFromRegistry(v2, v17, 0LL, &v20);
  v4 = SmpExistingPageFilesList;
  v5 = (struct _UNICODE_STRING *)&v20;
  if ( v3 < 0 )
    v5 = 0LL;
  while ( (__int64 *)v4 != &SmpExistingPageFilesList )
  {
    v6 = SmpSaveOldPageFile((PCUNICODE_STRING)(v4 + 16));
    if ( v6 < 0 )
    {
      v1 = v5;
      goto LABEL_26;
    }
    v4 = *(_QWORD *)v4;
  }
  v6 = RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
  v1 = v5;
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    SmpSaveOldPageFile(&DestinationString);
    v7 = v23[1] + 2 * (v23[0] + 1);
    if ( v7 <= 0xFFFF )
    {
      ResultLength_8.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
      if ( ResultLength_8.Buffer )
      {
        v8 = 0;
        ResultLength_8.MaximumLength = v7;
        if ( v23[0] )
        {
          do
          {
            RtlAppendUnicodeStringToString(&ResultLength_8, (PCUNICODE_STRING)&v23[4 * v8++ + 2]);
            Length = ResultLength_8.Length + 2;
            ResultLength_8.Length += 2;
          }
          while ( v8 < v23[0] );
        }
        else
        {
          Length = ResultLength_8.Length;
        }
        ResultLength_8.Buffer[(unsigned __int64)Length >> 1] = 0;
        ResultLength_8.Length += 2;
        v6 = NtSetValueKey(SmpCrashDumpKey, &v18, 0, 7u, ResultLength_8.Buffer, v7);
        v1 = v5;
        if ( v6 >= 0 )
          NtFlushKey(SmpCrashDumpKey);
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741562;
    }
  }
LABEL_26:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v23[0] )
  {
    do
    {
      v10 = 4LL * v0;
      v11 = (PVOID *)&v23[v10 + 4];
      if ( *(_QWORD *)&v23[v10 + 4] )
      {
        if ( v6 < 0 )
          SmpDeletePagingFile(&v23[v10 + 2]);
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, *v11);
      }
      ++v0;
    }
    while ( v0 < v23[0] );
  }
  if ( ResultLength_8.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, ResultLength_8.Buffer);
  if ( v1 )
    RtlFreeUnicodeString(v1);
}
