/*
 * XREFs of LdrpLogEtwEvent @ 0x18007B5D8
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpLogDllStateEx2 @ 0x18009AB40 (LdrpLogDllStateEx2.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitializationComplete @ 0x1800CC3C0 (LdrpInitializationComplete.c)
 *     LdrpAllocatePlaceHolder @ 0x1800CF1F0 (LdrpAllocatePlaceHolder.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800E4BB8 (LdrpTryAcquireLoaderLock.c)
 *     LdrpLogError @ 0x1800FBAE0 (LdrpLogError.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180114708 (LdrpEtwLogLoaderSnaps.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpEventAddUnicodeString @ 0x180098A80 (LdrpEventAddUnicodeString.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  size_t v7; // r14
  unsigned int v8; // ebx
  _BYTE *v9; // rdi
  __int64 v10; // rcx
  _BYTE *Heap_0; // rax
  int v15; // [rsp+24h] [rbp-284h] BYREF
  __int16 v16; // [rsp+28h] [rbp-280h]
  _BYTE Fields[576]; // [rsp+30h] [rbp-278h] BYREF

  v7 = 576LL;
  v16 = a1;
  memset_thunk_772440563353939046(Fields, 0, 0x240uLL);
  v8 = 0;
  v15 = 0;
  v9 = Fields;
  if ( a5 )
  {
    v8 = *a5 + 2;
    if ( a6 )
      v8 += *a6 + 2;
  }
  if ( v8 <= 0x214 || (Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8 + 42), (v9 = Heap_0) != 0LL) )
  {
    if ( v8 + 42 > 0x240 )
      v7 = v8 + 42;
    memset_thunk_772440563353939046(v9, 0, v7);
    *((_WORD *)v9 + 3) = v16;
    if ( a2 != -1 )
    {
      v9[40] = a3;
      v9[41] = a4;
      *((_QWORD *)v9 + 4) = a2;
      if ( v8 )
      {
        LdrpEventAddUnicodeString(a5, v9 + 42, v8, &v15);
        if ( a6 )
          LdrpEventAddUnicodeString(a6, &v9[v15 + 42], v8 - v15, &v15);
      }
    }
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v10 = 2147353476LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x402u, v8 + 10, v9);
    Heap_0 = Fields;
    if ( Fields != v9 )
      LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  return (int)Heap_0;
}
