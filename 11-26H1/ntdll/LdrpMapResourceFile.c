/*
 * XREFs of LdrpMapResourceFile @ 0x1800A4CE0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlReleaseRelativeName @ 0x1800A5EF0 (RtlReleaseRelativeName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18015F4A0 (NtOpenFile.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, PVOID *a5, ULONG_PTR *a6)
{
  PVOID *v9; // rsi
  ULONG Win32Protect; // edi
  _IMAGE_NT_HEADERS64 *v11; // rcx
  size_t v12; // rax
  int v13; // ebx
  PVOID v14; // r14
  HANDLE ContainingDirectory; // rax
  ULONG_PTR *v16; // rcx
  __int128 v18; // xmm0
  PIMAGE_NT_HEADERS OutHeaders[2]; // [rsp+50h] [rbp-69h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-59h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-49h] BYREF
  PVOID BaseAddress[2]; // [rsp+78h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-31h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+B8h] [rbp-1h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+C0h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+57h] BYREF

  SectionOffset.QuadPart = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, 44);
  *(_OWORD *)BaseAddress = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        OutHeaders[0] = 0LL;
        RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, OutHeaders);
        if ( !OutHeaders[0] )
        {
LABEL_28:
          v13 = -1073741701;
          goto LABEL_29;
        }
        Win32Protect = 2;
        if ( OutHeaders[0]->OptionalHeader.MajorSubsystemVersion < 6u )
          Win32Protect = 8;
        if ( a3 )
        {
          v18 = *a2;
          v14 = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)BaseAddress = v18;
        }
        else
        {
          v11 = (_IMAGE_NT_HEADERS64 *)*((_QWORD *)a2 + 1);
          OutHeaders[0] = 0LL;
          OutHeaders[1] = v11;
          if ( v11 )
          {
            v12 = wcslen((const wchar_t *)v11);
            if ( v12 > 0x7FFE )
            {
              v13 = -1073741562;
              goto LABEL_29;
            }
            LOWORD(OutHeaders[0]) = 2 * v12;
            WORD1(OutHeaders[0]) = 2 * v12 + 2;
          }
          v13 = RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (__m128i *)OutHeaders,
                  0LL,
                  (unsigned __int16 *)BaseAddress,
                  0LL,
                  0LL,
                  (__int64)&RelativeName);
          if ( v13 < 0 )
          {
LABEL_29:
            if ( FileHandle )
            {
              NtClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( BaseOfImage )
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage);
            return (unsigned int)v13;
          }
          v14 = BaseAddress[1];
          if ( RelativeName.RelativeName.Length )
          {
            ContainingDirectory = RelativeName.ContainingDirectory;
            *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
          }
          else
          {
            ContainingDirectory = 0LL;
            RelativeName.ContainingDirectory = 0LL;
          }
          ObjectAttributes.Length = 48;
          if ( v14 )
          {
            ObjectAttributes.RootDirectory = ContainingDirectory;
LABEL_16:
            ObjectAttributes.Attributes = 64;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            *(_OWORD *)OutHeaders = 0LL;
            v13 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, (PIO_STATUS_BLOCK)OutHeaders, 5u, 0x60u);
            if ( v14 )
            {
              RtlReleaseRelativeName(&RelativeName);
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v14);
            }
            if ( v13 < 0 )
              goto LABEL_29;
            v13 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, Win32Protect, 0x8000000u, FileHandle);
            if ( v13 < 0 )
              goto LABEL_29;
            v13 = ZwMapViewOfSection(
                    SectionHandle,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &BaseOfImage,
                    0LL,
                    0LL,
                    &SectionOffset,
                    &ViewSize,
                    ViewShare,
                    0,
                    Win32Protect);
            if ( SectionHandle )
            {
              NtClose(SectionHandle);
              SectionHandle = 0LL;
            }
            if ( v13 < 0 )
              goto LABEL_29;
            OutHeaders[0] = 0LL;
            RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, OutHeaders);
            if ( OutHeaders[0] )
            {
              v16 = a6;
              *v9 = BaseOfImage;
              if ( v16 )
                *v16 = ViewSize;
              if ( a4 )
              {
                *a4 = FileHandle;
              }
              else if ( FileHandle )
              {
                NtClose(FileHandle);
              }
              return (unsigned int)v13;
            }
            goto LABEL_28;
          }
        }
        ObjectAttributes.RootDirectory = 0LL;
        goto LABEL_16;
      }
    }
  }
  return 3221225485LL;
}
