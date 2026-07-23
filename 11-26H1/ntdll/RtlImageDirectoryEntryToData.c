/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1800785F0
 * Callers:
 *     LdrpAccessResourceData @ 0x18001B110 (LdrpAccessResourceData.c)
 *     LdrpEnclaveAddForwarderModules @ 0x180022830 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800773A0 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800781F0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180078420 (RtlGuardCheckExceptionHandler.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpProcessMachineMismatch @ 0x1800D2654 (LdrpProcessMachineMismatch.c)
 *     LdrRelocateImageWithBias @ 0x1800D5304 (LdrRelocateImageWithBias.c)
 *     LdrpCorFixupImage @ 0x1801002AC (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x180108014 (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010C960 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x18010D4AC (LdrpEnclaveAddDelayloadModules.c)
 *     RtlFindExportedRoutineByName @ 0x18010E870 (RtlFindExportedRoutineByName.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010FFAC (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpCfgProcessLoadConfig @ 0x1801197F0 (LdrpCfgProcessLoadConfig.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 *     LdrEnumResources @ 0x18013B970 (LdrEnumResources.c)
 *     LdrpFindDelayloadedMethod @ 0x18015C1D8 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015C30C (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  void *v4; // rbx
  __int64 v5; // rbp
  BOOLEAN v6; // r14
  __int64 v7; // r10
  char *v9; // rsi
  char *v10; // rdi
  NTSTATUS v11; // eax
  PIMAGE_NT_HEADERS v12; // r9
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rcx
  __int64 v16; // r10
  unsigned int v17; // r8d
  unsigned int NumberOfSections; // r11d
  _DWORD *v19; // rdx
  char v20; // r9
  unsigned int v21; // ecx
  BOOLEAN v22; // cl
  int v23; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = DirectoryEntry;
  v6 = MappedAsImage;
  v7 = (unsigned __int8)BaseOfImage & 1;
  OutHeaders = 0LL;
  v9 = (char *)BaseOfImage;
  v10 = 0LL;
  if ( ((unsigned __int8)BaseOfImage & 2) != 0 || ((unsigned __int8)BaseOfImage & 1) != 0 )
  {
    v9 = (char *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v22 = 0;
    if ( !v7 )
      v22 = MappedAsImage;
    v6 = v22;
  }
  v11 = RtlImageNtHeaderEx(1u, v9, 0LL, &OutHeaders);
  v12 = OutHeaders;
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( (unsigned int)v5 < HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
      {
        v16 = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v5);
        if ( !(_DWORD)v16 )
          goto LABEL_32;
        *Size = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v5 + 1);
        if ( v6 || (unsigned int)v16 < v12->OptionalHeader.SizeOfHeaders )
        {
          v10 = &v9[v16];
          v11 = 0;
          goto LABEL_11;
        }
        v17 = 0;
        NumberOfSections = v12->FileHeader.NumberOfSections;
        v19 = (_DWORD *)((char *)&v12->OptionalHeader.Magic + v12->FileHeader.SizeOfOptionalHeader);
        v20 = 0;
        while ( v17 < NumberOfSections )
        {
          v21 = v19[3];
          if ( (unsigned int)v16 >= v21 && (unsigned int)v16 < v19[4] + v21 )
          {
            v20 = 1;
            break;
          }
          v19 += 10;
          ++v17;
        }
        if ( !v20 )
          v19 = 0LL;
        if ( v19 )
        {
          v10 = &v9[(unsigned int)v19[5] - (unsigned __int64)(unsigned int)v19[3] + v16];
          if ( v10 )
            goto LABEL_10;
        }
      }
    }
    else if ( Magic == 523 && (unsigned int)v5 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[v5].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *Size = OutHeaders->OptionalHeader.DataDirectory[v5].Size;
        if ( !v6 && (unsigned int)VirtualAddress >= v12->OptionalHeader.SizeOfHeaders )
        {
          v10 = (char *)RtlAddressInSectionTable(v12, v9, VirtualAddress);
          v23 = 0;
          if ( !v10 )
            v23 = -1073741811;
          v11 = v23;
          goto LABEL_11;
        }
        v10 = &v9[VirtualAddress];
LABEL_10:
        v11 = 0;
        goto LABEL_11;
      }
LABEL_32:
      v11 = -1073741822;
      goto LABEL_11;
    }
    v11 = -1073741811;
  }
LABEL_11:
  if ( v11 >= 0 )
    return v10;
  return v4;
}
