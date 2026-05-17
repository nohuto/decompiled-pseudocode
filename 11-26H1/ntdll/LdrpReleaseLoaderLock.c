/*
 * XREFs of LdrpReleaseLoaderLock @ 0x1800854C0
 * Callers:
 *     LdrUnlockLoaderLock @ 0x18002B040 (LdrUnlockLoaderLock.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x1800868D0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800E1C10 (LdrEnumerateLoadedModules.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x18015DDF8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rbx
  _DWORD *SharedData; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  char *v12; // rcx

  v3 = a3;
  v5 = RtlLeaveCriticalSection((__int64)&LdrpLoaderLock);
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
      v12 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v12 & 0x20) != 0 )
        LdrpLogEtwEvent(5284, v3, 162, a2, 0LL, 0LL);
    }
  }
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && *v10 )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v6 & 0x20) != 0 )
      LdrpLogEtwEvent(5282, 0LL, 0, a2, 0LL, 0LL);
  }
  return v5;
}
