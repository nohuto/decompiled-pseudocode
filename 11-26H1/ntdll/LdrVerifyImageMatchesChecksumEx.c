/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18010C960
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x18015BB10 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageRvaToSection @ 0x1800C92E0 (RtlImageRvaToSection.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180145EF0 (LdrVerifyMappedImageMatchesChecksum.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationFile @ 0x18015F060 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x180161150 (NtMakeTemporaryObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksumEx(HANDLE ImageFileHandle, PLDR_VERIFY_IMAGE_INFO VerifyInfo)
{
  ULONG *p_Flags; // r15
  LDR_SECTION_INFO *p_SectionInfo; // r14
  ULONG AllocationAttributes; // eax
  char v7; // r13
  NTSTATUS result; // eax
  int v9; // edi
  _DWORD *v10; // r13
  PIMAGE_SECTION_HEADER v11; // r12
  ULONG v12; // r15d
  PIMAGE_SECTION_HEADER v13; // rdx
  char *v14; // r9
  ULONG VirtualAddress; // ecx
  bool MappedAsImage; // [rsp+50h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-A8h] BYREF
  ULONG Size; // [rsp+68h] [rbp-A0h] BYREF
  char *v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+78h] [rbp-90h]
  LDR_SECTION_INFO *v22; // [rsp+80h] [rbp-88h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp-80h] BYREF
  ULONG_PTR ViewSize; // [rsp+90h] [rbp-78h] BYREF
  _DWORD *v25; // [rsp+98h] [rbp-70h]
  LDR_SECTION_INFO *v26; // [rsp+A0h] [rbp-68h]
  POBJECT_ATTRIBUTES *p_ObjA; // [rsp+A8h] [rbp-60h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  __int128 FileInformation; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-38h]

  v20 = (char *)VerifyInfo;
  SectionHandle = 0LL;
  if ( VerifyInfo->Size != 64 )
    return -1073741584;
  p_Flags = &VerifyInfo->Flags;
  OutHeaders = (PIMAGE_NT_HEADERS)&VerifyInfo->Flags;
  if ( (VerifyInfo->Flags & 0xFFFFFFF8) != 0 )
    return -1073741584;
  p_SectionInfo = &VerifyInfo->SectionInfo;
  if ( (*(_BYTE *)p_Flags & 2) == 0 )
    p_SectionInfo = (LDR_SECTION_INFO *)&unk_1801831F8;
  v22 = p_SectionInfo;
  v26 = p_SectionInfo;
  AllocationAttributes = p_SectionInfo->AllocationAttributes;
  v21 = AllocationAttributes & 0x1000000;
  Size = AllocationAttributes & 0x1000000;
  MappedAsImage = (AllocationAttributes & 0x1000000) != 0;
  v7 = (unsigned __int8)ImageFileHandle & 1;
  p_ObjA = &p_SectionInfo->ObjA;
  result = NtCreateSection(
             &SectionHandle,
             p_SectionInfo->DesiredAccess,
             p_SectionInfo->ObjA,
             0LL,
             p_SectionInfo->SectionPageProtection,
             AllocationAttributes,
             ImageFileHandle);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v9 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           0x10u);
    if ( v9 >= 0 )
    {
      if ( v7 )
        goto LABEL_42;
      FileInformation = 0LL;
      v30 = 0LL;
      IoStatusBlock = 0LL;
      v9 = NtQueryInformationFile(ImageFileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v9 >= 0 )
      {
        if ( !LdrVerifyMappedImageMatchesChecksum(BaseAddress, ViewSize, DWORD2(FileInformation)) )
          v9 = -1073741279;
        if ( v9 >= 0 )
        {
LABEL_42:
          if ( (*(_BYTE *)p_Flags & 5) != 0 )
          {
            OutHeaders = 0LL;
            v9 = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
            if ( v9 >= 0 )
            {
              if ( (*(_BYTE *)p_Flags & 4) != 0 )
                VerifyInfo->ImageCharacteristics = OutHeaders->FileHeader.Characteristics;
              if ( (*(_BYTE *)p_Flags & 1) != 0 )
              {
                if ( VerifyInfo->CallbackInfo.ImportCallbackRoutine )
                {
                  v20 = 0LL;
                  v25 = 0LL;
                  Size = 0;
                  v10 = RtlImageDirectoryEntryToData(BaseAddress, MappedAsImage, 1u, &Size);
                  v25 = v10;
                  if ( v10 )
                  {
                    v11 = 0LL;
                    v20 = 0LL;
                    while ( v10[3] )
                    {
                      v12 = v10[3];
                      if ( v21 )
                      {
                        v13 = (PIMAGE_SECTION_HEADER)((char *)BaseAddress + v12);
                      }
                      else
                      {
                        v14 = (char *)BaseAddress;
                        v20 = (char *)BaseAddress;
                        v13 = v11;
                        if ( !v11
                          || (VirtualAddress = v11->VirtualAddress, v12 < VirtualAddress)
                          || v12 >= v11->SizeOfRawData + VirtualAddress )
                        {
                          v13 = RtlImageRvaToSection(OutHeaders, BaseAddress, v12);
                          v14 = v20;
                        }
                        if ( v13 )
                        {
                          v11 = v13;
                          v20 = (char *)v13;
                          v13 = (PIMAGE_SECTION_HEADER)&v14[v12 - v13->VirtualAddress + v13->PointerToRawData];
                        }
                      }
                      ((void (__fastcall *)(PVOID, PIMAGE_SECTION_HEADER))VerifyInfo->CallbackInfo.ImportCallbackRoutine)(
                        VerifyInfo->CallbackInfo.ImportCallbackParameter,
                        v13);
                      v10 += 5;
                      v25 = v10;
                    }
                  }
                }
              }
            }
          }
        }
      }
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    }
    if ( v9 < 0 || p_SectionInfo == (LDR_SECTION_INFO *)&unk_1801831F8 )
    {
      if ( *p_ObjA && ((*p_ObjA)->Attributes & 0x10) != 0 )
        NtMakeTemporaryObject(SectionHandle);
      NtClose(SectionHandle);
    }
    else
    {
      v26->SectionHandle = SectionHandle;
    }
    return v9;
  }
  return result;
}
