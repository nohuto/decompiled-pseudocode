/*
 * XREFs of LdrpLogInternal @ 0x180046B90
 * Callers:
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpGetProcedureAddress @ 0x180046820 (LdrpGetProcedureAddress.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     LdrGetDllHandle @ 0x180050FC0 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpDetectDetour @ 0x180064B60 (LdrpDetectDetour.c)
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     LdrpFindKnownDll @ 0x180082BE0 (LdrpFindKnownDll.c)
 *     LdrpCheckRedirection @ 0x1800838D8 (LdrpCheckRedirection.c)
 *     LdrpResolveDllName @ 0x180084BE0 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x180085670 (LdrpFindLoadedDllInternal.c)
 *     LdrpInitializeKernel32Functions @ 0x1800858A8 (LdrpInitializeKernel32Functions.c)
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180087118 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800989AC (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpSearchPath @ 0x180098BBC (LdrpSearchPath.c)
 *     LdrpComputeLazyDllPath @ 0x180099A0C (LdrpComputeLazyDllPath.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     LdrpNameToOrdinal @ 0x1800BA660 (LdrpNameToOrdinal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C62D4 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800C67B0 (LdrpRedirectDelayloadFailure.c)
 *     LdrpInitializationFailure @ 0x1800CDD30 (LdrpInitializationFailure.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CEB74 (LdrpWaitForInitializationComplete.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D1F10 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D8074 (LdrpProtectAndRelocateImage.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800E2CEC (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpInitializeProcessHeap @ 0x1800EBB8C (LdrpInitializeProcessHeap.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800ED158 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrGetKnownDllSectionHandle @ 0x180100850 (LdrGetKnownDllSectionHandle.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105E10 (LdrResolveDelayLoadedAPI.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180112290 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1801180E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeShimDllDependencies @ 0x18011901C (LdrpInitializeShimDllDependencies.c)
 *     LdrpMergeNodes @ 0x1801194CC (LdrpMergeNodes.c)
 *     LdrpInitializeNode @ 0x18011A300 (LdrpInitializeNode.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 *     LdrpProcessDetachNode @ 0x18011B0A8 (LdrpProcessDetachNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18011B220 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     LdrpCompleteMapModule @ 0x18011C480 (LdrpCompleteMapModule.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015C090 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x18015C118 (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlStringCchPrintfExW @ 0x1800496E0 (RtlStringCchPrintfExW.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180114F24 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpLogDbgPrint @ 0x18011F07C (LdrpLogDbgPrint.c)
 *     _vsnprintf @ 0x180128D30 (_vsnprintf.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 LdrpLogInternal(int a1, int a2, __int64 a3, int a4, char *Format, ...)
{
  __int64 v6; // rbx
  unsigned int v8; // edi
  int Args; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int16 v14; // cx
  __int64 *v15; // r11
  __int16 v16; // ax
  __int64 v17; // r10
  __int64 v18; // r14
  char *v19; // r9
  _WORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *SharedData; // rcx
  __int64 v26; // rcx
  __int64 result; // rax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int8 *v32; // r9
  char *v33; // rcx
  signed __int32 v34[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h]
  char *v36; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  va_list v39; // [rsp+60h] [rbp-A0h]
  _WORD v40[2]; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h]
  wchar_t *v42; // [rsp+70h] [rbp-90h]
  _WORD v43[2]; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+7Ch] [rbp-84h]
  _WORD *v45; // [rsp+80h] [rbp-80h]
  char Buffer[256]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t v47[128]; // [rsp+190h] [rbp+90h] BYREF
  _WORD v48[256]; // [rsp+290h] [rbp+190h] BYREF
  va_list va; // [rsp+518h] [rbp+418h] BYREF

  va_start(va, Format);
  va_copy(v39, va);
  v6 = 2LL * a4;
  v41 = 0;
  v44 = 0;
  if ( (unsigned int)(a4 - 2) > 2 )
  {
    if ( qword_1801CB808 )
    {
      v8 = 256;
      memset_thunk_772440563353939046(v47, 0, 0x100uLL);
      memset_thunk_772440563353939046(v48, 0, 0x200uLL);
      v40[1] = 256;
      v42 = v47;
      v37 = 0;
      v43[1] = 512;
      v38 = 0LL;
      v45 = v48;
      memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
      Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
      v36 = (&off_1801716A8)[v6];
      v35 = a3;
      v10 = RtlStringCchPrintfExW(v47, 0, (wchar_t *)L"%x-%S-%S-", Args);
      if ( !v10 || v10 == -2147483643 )
      {
        v40[0] = 2 * (128 - v38);
        v11 = vsnprintf(Buffer, 0xFFuLL, Format, va);
        if ( v11 < 0 || (unsigned __int64)v11 > 0xFE )
        {
          v12 = 1;
          Buffer[255] = 0;
        }
        else
        {
          v12 = 256 - v11;
        }
        v13 = (unsigned int)(256 - v12);
        v43[0] = 2 * (256 - v12);
        _InterlockedOr(v34, 0);
        if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
        {
          v14 = Utf8TableInfo;
          v15 = (__int64 *)&xmmword_1801C6070;
          v16 = WORD6(Utf8TableInfo);
          v17 = xmmword_1801C6070;
          v18 = qword_1801C6088;
        }
        else
        {
          _InterlockedOr(v34, 0);
          v14 = GlobalRtlNlsState;
          v15 = &qword_1801C5FB0;
          v16 = word_1801C5F9C;
          v17 = qword_1801C5FB0;
          v18 = qword_1801C5FC8;
        }
        v19 = Buffer;
        v20 = v48;
        if ( v14 == -535 )
        {
          if ( (_DWORD)v13 )
            RtlUTF8ToUnicodeN(v48, 0x200u, &v37, Buffer, v13);
          else
            v37 = 0;
        }
        else if ( v16 )
        {
          while ( 1 )
          {
            v29 = (int)v20;
            if ( !v8 || !(_DWORD)v13 )
              break;
            --v8;
            v13 = (unsigned int)(v13 - 1);
            v30 = 2LL * (unsigned __int8)*v19;
            v31 = *(unsigned __int16 *)(v18 + v30);
            if ( (_WORD)v31 )
            {
              if ( !(_DWORD)v13 )
              {
                *v20 = 0;
                v29 = (_DWORD)v20 + 2;
                break;
              }
              v32 = (unsigned __int8 *)(v19 + 1);
              v13 = (unsigned int)(v13 - 1);
              *v20++ = *(_WORD *)(v18 + 2 * (*v32 + v31));
              v19 = (char *)(v32 + 1);
            }
            else
            {
              *v20++ = *(_WORD *)(v30 + *v15);
              ++v19;
            }
          }
          v37 = v29 - (unsigned int)v48;
        }
        else
        {
          if ( (unsigned int)v13 <= 0x100 )
            v8 = v13;
          v37 = 2 * v8;
          if ( v8 )
          {
            v13 = (unsigned __int64)Buffer;
            v19 = (char *)v8;
            v20 = v48;
            do
            {
              v21 = *(unsigned __int8 *)v13;
              ++v20;
              ++v13;
              *(v20 - 1) = *(_WORD *)(v17 + 2 * v21);
              --v19;
            }
            while ( v19 );
          }
        }
        LdrpAddUnicodeStringToSnapsBuffer(v40, v13, v20, v19);
        LdrpAddUnicodeStringToSnapsBuffer(v43, v22, v23, v24);
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
    v33 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( *v33 < 0 )
      LdrpEtwLogLoaderSnaps(a3, a4, Format, va);
  }
  result = (unsigned int)LdrpDebugFlags;
  v28 = LdrpLogLevelStateTable[2 * v6] | 1;
  if ( (v28 & LdrpDebugFlags) != 0 && ((LdrpDebugFlags & 0x80u) == 0 || LdrpIsSecureProcess) )
  {
    LdrpLogDbgPrint(v28, a2, a3, a4, (__int64)Format, (__int64)va);
    result = (unsigned int)LdrpDebugFlags;
  }
  if ( ((unsigned int)result & dword_180172214[2 * v6]) != 0 )
    __debugbreak();
  return result;
}
