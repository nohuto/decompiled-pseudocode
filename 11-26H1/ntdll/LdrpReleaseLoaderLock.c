/*
 * XREFs of LdrpReleaseLoaderLock @ 0x18007C860
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180016140 (LdrUnlockLoaderLock.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18007DC70 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800DF4B0 (LdrEnumerateLoadedModules.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeImportRedirection @ 0x18011CDB4 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x18015DCB8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int32 v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rbx
  _DWORD *SharedData; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  char *v12; // rcx

  v3 = a3;
  v5 = RtlLeaveCriticalSection(&LdrpLoaderLock);
  v6 = 2147353477LL;
  v7 = 2147353476LL;
  if ( (int)v3 < 0 )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v12 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v12 & 0x20) != 0 )
        LdrpLogEtwEvent(5284, v3, 162, a2, 0LL, 0LL);
    }
  }
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && *v10 )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v6 & 0x20) != 0 )
      LdrpLogEtwEvent(5282, 0LL, 0, a2, 0LL, 0LL);
  }
  return v5;
}
