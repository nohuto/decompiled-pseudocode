/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180081250
 * Callers:
 *     LdrpAccessResourceData @ 0x18002FFB0 (LdrpAccessResourceData.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800382C0 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180080000 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180080E50 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180081080 (RtlGuardCheckExceptionHandler.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpProcessMachineMismatch @ 0x1800D2784 (LdrpProcessMachineMismatch.c)
 *     LdrRelocateImageWithBias @ 0x1800D8344 (LdrRelocateImageWithBias.c)
 *     LdrpCorFixupImage @ 0x180100B5C (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x180108614 (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010CE10 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x18010D95C (LdrpEnclaveAddDelayloadModules.c)
 *     RtlFindExportedRoutineByName @ 0x18010ECE0 (RtlFindExportedRoutineByName.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18011041C (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpCfgProcessLoadConfig @ 0x180119A40 (LdrpCfgProcessLoadConfig.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     LdrpCompleteMapModule @ 0x18011C480 (LdrpCompleteMapModule.c)
 *     LdrEnumResources @ 0x18013BAB0 (LdrEnumResources.c)
 *     LdrpFindDelayloadedMethod @ 0x18015C318 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015C44C (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 */

_DWORD *__fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  char v6; // r14
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rsi
  _DWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // r9
  __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v16; // r10
  unsigned int v17; // r8d
  unsigned int v18; // r11d
  _DWORD *v19; // rdx
  char v20; // r9
  unsigned int v21; // ecx
  char v22; // cl
  int v23; // ecx
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = a1 & 1;
  v24 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( (a1 & 2) != 0 || (a1 & 1) != 0 )
  {
    v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v22 = 0;
    if ( !v7 )
      v22 = a2;
    v6 = v22;
  }
  v11 = RtlImageNtHeaderEx(1, v9, 0LL, &v24);
  v12 = v24;
  if ( v24 )
  {
    v13 = *(_WORD *)(v24 + 24);
    if ( v13 == 267 )
    {
      if ( (unsigned int)v5 < *(_DWORD *)(v24 + 116) )
      {
        v16 = *(unsigned int *)(v24 + 8 * v5 + 120);
        if ( !(_DWORD)v16 )
          goto LABEL_32;
        *a4 = *(_DWORD *)(v24 + 8 * v5 + 124);
        if ( v6 || (unsigned int)v16 < *(_DWORD *)(v12 + 84) )
        {
          v10 = (_DWORD *)(v9 + v16);
          v11 = 0;
          goto LABEL_11;
        }
        v17 = 0;
        v18 = *(unsigned __int16 *)(v12 + 6);
        v19 = (_DWORD *)(v12 + *(unsigned __int16 *)(v12 + 20) + 24LL);
        v20 = 0;
        while ( v17 < v18 )
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
          v10 = (_DWORD *)(v9 + (unsigned int)v19[5] - (unsigned __int64)(unsigned int)v19[3] + v16);
          if ( v10 )
            goto LABEL_10;
        }
      }
    }
    else if ( v13 == 523 && (unsigned int)v5 < *(_DWORD *)(v24 + 132) )
    {
      v14 = *(unsigned int *)(v24 + 8 * v5 + 136);
      if ( (_DWORD)v14 )
      {
        *a4 = *(_DWORD *)(v24 + 8 * v5 + 140);
        if ( !v6 && (unsigned int)v14 >= *(_DWORD *)(v12 + 84) )
        {
          v10 = RtlAddressInSectionTable(v12, v9, v14);
          v23 = 0;
          if ( !v10 )
            v23 = -1073741811;
          v11 = v23;
          goto LABEL_11;
        }
        v10 = (_DWORD *)(v9 + v14);
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
  return (_DWORD *)v4;
}
