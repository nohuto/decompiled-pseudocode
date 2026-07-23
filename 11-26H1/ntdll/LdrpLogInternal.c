/*
 * XREFs of LdrpLogInternal @ 0x180031100
 * Callers:
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     LdrLoadDll @ 0x18002DF80 (LdrLoadDll.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpGetProcedureAddress @ 0x180030D90 (LdrpGetProcedureAddress.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrGetDllHandle @ 0x18003B540 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18003B730 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     LdrpAllocateTls @ 0x180076CB0 (LdrpAllocateTls.c)
 *     LdrpFindKnownDll @ 0x180079F80 (LdrpFindKnownDll.c)
 *     LdrpCheckRedirection @ 0x18007AC78 (LdrpCheckRedirection.c)
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18007CA10 (LdrpFindLoadedDllInternal.c)
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 *     LdrpLoadWow64 @ 0x18007DAB0 (LdrpLoadWow64.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18007E488 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 *     LdrpDetectDetour @ 0x180084FB0 (LdrpDetectDetour.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180097AD8 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 *     LdrpComputeLazyDllPath @ 0x180098B3C (LdrpComputeLazyDllPath.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     LdrpNameToOrdinal @ 0x1800B7B90 (LdrpNameToOrdinal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C3A94 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800C3F70 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializationFailure @ 0x1800CB4A0 (LdrpInitializationFailure.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CC2E4 (LdrpWaitForInitializationComplete.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800CF680 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpMinimalMapModule @ 0x1800D21E4 (LdrpMinimalMapModule.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D5034 (LdrpProtectAndRelocateImage.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800E154C (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializeProcessHeap @ 0x1800EAD58 (LdrpInitializeProcessHeap.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800EC5F8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800FFFA0 (LdrGetKnownDllSectionHandle.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105660 (LdrResolveDelayLoadedAPI.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180111D40 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180117E90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeShimDllDependencies @ 0x180118DCC (LdrpInitializeShimDllDependencies.c)
 *     LdrpMergeNodes @ 0x18011927C (LdrpMergeNodes.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 *     LdrpProcessDetachNode @ 0x18011AE58 (LdrpProcessDetachNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 *     LdrpInitializeImportRedirection @ 0x18011CDB4 (LdrpInitializeImportRedirection.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     LdrpLoadPatchImage @ 0x18015BD30 (LdrpLoadPatchImage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015BF50 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x18015BFD8 (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlStringCchPrintfExW @ 0x180033C60 (RtlStringCchPrintfExW.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180114708 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpLogDbgPrint @ 0x18011EE2C (LdrpLogDbgPrint.c)
 *     _vsnprintf @ 0x180128AA0 (_vsnprintf.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 LdrpLogInternal(_QWORD a1, int a2, __int64 a3, int a4, char *Format, ...)
{
  __int64 v6; // rbx
  unsigned int v8; // edi
  int Args; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 UTF8StringByteCount; // rdx
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // r11
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // r10
  unsigned __int16 *DBCSOffsets; // r14
  char *v19; // r9
  WCHAR *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *SharedData; // rcx
  __int64 v26; // rcx
  __int64 result; // rax
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h]
  char *v34; // [rsp+40h] [rbp-C0h]
  ULONG UnicodeStringActualByteCount; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  va_list v37; // [rsp+60h] [rbp-A0h]
  _WORD v38[2]; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h]
  wchar_t *v40; // [rsp+70h] [rbp-90h]
  _WORD v41[2]; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h]
  WCHAR *v43; // [rsp+80h] [rbp-80h]
  char Buffer[256]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t v45[128]; // [rsp+190h] [rbp+90h] BYREF
  WCHAR UnicodeStringDestination[256]; // [rsp+290h] [rbp+190h] BYREF
  va_list ArgList; // [rsp+518h] [rbp+418h] BYREF

  va_start(ArgList, Format);
  va_copy(v37, ArgList);
  v6 = 2LL * a4;
  v39 = 0;
  v42 = 0;
  if ( (unsigned int)(a4 - 2) > 2 )
  {
    if ( qword_1801CA848 )
    {
      v8 = 256;
      memset_thunk_772440563353939046(v45, 0, 0x100uLL);
      memset_thunk_772440563353939046(UnicodeStringDestination, 0, 0x200uLL);
      v38[1] = 256;
      v40 = v45;
      UnicodeStringActualByteCount = 0;
      v41[1] = 512;
      v36 = 0LL;
      v43 = UnicodeStringDestination;
      memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
      Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
      v34 = (&off_180170128)[v6];
      v33 = a3;
      v10 = RtlStringCchPrintfExW(v45, 0, (wchar_t *)L"%x-%S-%S-", Args);
      if ( !v10 || v10 == -2147483643 )
      {
        v38[0] = 2 * (128 - v36);
        v11 = vsnprintf(Buffer, 0xFFuLL, Format, ArgList);
        if ( v11 < 0 || (unsigned __int64)v11 > 0xFE )
        {
          v12 = 1;
          Buffer[255] = 0;
        }
        else
        {
          v12 = 256 - v11;
        }
        UTF8StringByteCount = (unsigned int)(256 - v12);
        v41[0] = 2 * (256 - v12);
        _InterlockedOr(v32, 0);
        if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
        {
          CodePage = Utf8TableInfo;
          p_MultiByteTable = (unsigned __int16 **)&xmmword_1801C5070;
          DBCSCodePage = WORD6(Utf8TableInfo);
          MultiByteTable = (unsigned __int16 *)xmmword_1801C5070;
          DBCSOffsets = (unsigned __int16 *)qword_1801C5088;
        }
        else
        {
          _InterlockedOr(v32, 0);
          CodePage = GlobalRtlNlsState.CodePage;
          p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
          DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
          MultiByteTable = GlobalRtlNlsState.MultiByteTable;
          DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
        }
        v19 = Buffer;
        v20 = UnicodeStringDestination;
        if ( CodePage == 0xFDE9 )
        {
          if ( (_DWORD)UTF8StringByteCount )
            RtlUTF8ToUnicodeN(
              UnicodeStringDestination,
              0x200u,
              &UnicodeStringActualByteCount,
              Buffer,
              UTF8StringByteCount);
          else
            UnicodeStringActualByteCount = 0;
        }
        else if ( DBCSCodePage )
        {
          while ( v8 && (_DWORD)UTF8StringByteCount )
          {
            --v8;
            UTF8StringByteCount = (unsigned int)(UTF8StringByteCount - 1);
            v29 = (unsigned __int8)*v19;
            v30 = DBCSOffsets[v29];
            if ( (_WORD)v30 )
            {
              if ( !(_DWORD)UTF8StringByteCount )
              {
                *v20 = 0;
                LODWORD(v20) = (_DWORD)v20 + 2;
                break;
              }
              UTF8StringByteCount = (unsigned int)(UTF8StringByteCount - 1);
              *v20++ = DBCSOffsets[v30 + (unsigned __int8)v19[1]];
              v19 += 2;
            }
            else
            {
              *v20++ = (*p_MultiByteTable)[v29];
              ++v19;
            }
          }
          v20 = (WCHAR *)((unsigned int)v20 - (unsigned int)UnicodeStringDestination);
          UnicodeStringActualByteCount = (unsigned int)v20;
        }
        else
        {
          if ( (unsigned int)UTF8StringByteCount <= 0x100 )
            v8 = UTF8StringByteCount;
          UnicodeStringActualByteCount = 2 * v8;
          if ( v8 )
          {
            UTF8StringByteCount = (unsigned __int64)Buffer;
            v19 = (char *)v8;
            v20 = UnicodeStringDestination;
            do
            {
              v21 = *(unsigned __int8 *)UTF8StringByteCount;
              ++v20;
              ++UTF8StringByteCount;
              *(v20 - 1) = MultiByteTable[v21];
              --v19;
            }
            while ( v19 );
          }
        }
        LdrpAddUnicodeStringToSnapsBuffer(v38, UTF8StringByteCount, v20, v19);
        LdrpAddUnicodeStringToSnapsBuffer(v41, v22, v23, v24);
      }
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v26 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v26 = 2147353476LL;
  if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v31 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( *v31 < 0 )
      LdrpEtwLogLoaderSnaps(a3, a4, Format, ArgList);
  }
  result = (unsigned int)LdrpDebugFlags;
  v28 = LdrpLogLevelStateTable[2 * v6] | 1;
  if ( (v28 & LdrpDebugFlags) != 0 && ((LdrpDebugFlags & 0x80u) == 0 || LdrpIsSecureProcess) )
  {
    LdrpLogDbgPrint(v28, a2, a3, a4, (__int64)Format, (__int64)ArgList);
    result = (unsigned int)LdrpDebugFlags;
  }
  if ( ((unsigned int)result & dword_180171214[2 * v6]) != 0 )
    __debugbreak();
  return result;
}
