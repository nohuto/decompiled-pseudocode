/*
 * XREFs of LdrpLogEtwEvent @ 0x180084238
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180042DA0 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpCallInitRoutine @ 0x18004C46C (LdrpCallInitRoutine.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpLogDllStateEx2 @ 0x18009BA10 (LdrpLogDllStateEx2.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitializationComplete @ 0x1800CEC50 (LdrpInitializationComplete.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D1A80 (LdrpAllocatePlaceHolder.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800E69A8 (LdrpTryAcquireLoaderLock.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180114F24 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpCompleteMapModule @ 0x18011C480 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpEventAddUnicodeString @ 0x180099950 (LdrpEventAddUnicodeString.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

_BYTE *__fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  size_t v7; // r14
  unsigned int v8; // ebx
  _BYTE *v9; // rdi
  __int64 v10; // rcx
  _BYTE *result; // rax
  int v14; // [rsp+24h] [rbp-284h] BYREF
  __int16 v15; // [rsp+28h] [rbp-280h]
  _BYTE v16[576]; // [rsp+30h] [rbp-278h] BYREF

  v7 = 576LL;
  v15 = a1;
  memset_thunk_772440563353939046(v16, 0, 0x240uLL);
  v8 = 0;
  v14 = 0;
  v9 = v16;
  if ( a5 )
  {
    v8 = *a5 + 2;
    if ( a6 )
      v8 += *a6 + 2;
  }
  if ( v8 <= 0x214 || (result = (_BYTE *)RtlAllocateHeap_0(), (v9 = result) != 0LL) )
  {
    if ( v8 + 42 > 0x240 )
      v7 = v8 + 42;
    memset_thunk_772440563353939046(v9, 0, v7);
    *((_WORD *)v9 + 3) = v15;
    if ( a2 != -1 )
    {
      v9[40] = a3;
      v9[41] = a4;
      *((_QWORD *)v9 + 4) = a2;
      if ( v8 )
      {
        LdrpEventAddUnicodeString(a5, v9 + 42, v8, &v14);
        if ( a6 )
          LdrpEventAddUnicodeString(a6, &v9[v14 + 42], v8 - v14, &v14);
      }
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v10 = 2147353476LL;
    NtTraceEvent(*(unsigned __int8 *)v10, 1026LL, v8 + 10, v9);
    result = v16;
    if ( v16 != v9 )
      return (_BYTE *)RtlFreeHeap_0();
  }
  return result;
}
