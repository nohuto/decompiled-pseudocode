/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x180021F9C
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     RtlReleaseRelativeName @ 0x1800A5EF0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     ZwCreateFile @ 0x18015F8E0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall RtlpFileIsWin32WithRCManifest(PCWSTR SourceString)
{
  char v1; // di
  char v2; // r14
  PVOID v3; // rbx
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS v5; // esi
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rbx
  PVOID BaseOfImage; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v13; // [rsp+88h] [rbp-78h] BYREF
  char *v14; // [rsp+90h] [rbp-70h] BYREF
  PVOID BaseAddress[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+B0h] [rbp-50h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  const wchar_t *v21[3]; // [rsp+118h] [rbp+18h] BYREF

  v1 = 0;
  ViewSize = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v2 = 0;
  BaseOfImage = 0LL;
  v14 = 0LL;
  SectionOffset.QuadPart = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v13 = 0LL;
  IoStatusBlock = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned int)&DestinationString,
              0,
              (unsigned int)BaseAddress,
              0LL,
              0LL,
              (__int64)&RelativeName) >= 0 )
  {
    v3 = BaseAddress[1];
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(v3 != 0LL));
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
    if ( v3 )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle) >= 0 )
      {
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseOfImage,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewShare,
               0,
               8u);
        NtClose(SectionHandle);
        if ( v6 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 0LL;
          RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, (PIMAGE_NT_HEADERS *)&DestinationString);
          if ( *(_QWORD *)&DestinationString.Length )
          {
            v21[0] = L"MUI";
            v21[1] = (const wchar_t *)1;
            v7 = (unsigned __int64)BaseOfImage | 1;
            v21[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U((unsigned __int64)BaseOfImage | 1, v21, 3u, 0x30u, (__int64)&v13) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7, (unsigned int *)v13, &v14, &DestinationString) >= 0
              && *(_DWORD *)v14 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( BaseOfImage )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage);
  if ( v2 )
    NtClose(FileHandle);
  return v1;
}
