/*
 * XREFs of LdrpAcquireLoaderLock @ 0x18007B430
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800DF4B0 (LdrEnumerateLoadedModules.c)
 *     LdrLockLoaderLock @ 0x1800E49F0 (LdrLockLoaderLock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x180110140 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeImportRedirection @ 0x18011CDB4 (LdrpInitializeImportRedirection.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 */

NTSTATUS LdrpAcquireLoaderLock()
{
  __int64 v0; // rbx
  _DWORD *SharedData; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdi
  NTSTATUS result; // eax
  NTSTATUS v5; // esi
  _DWORD *v6; // rdx
  int v7; // r9d
  char *v8; // rcx
  int v9; // r9d

  v0 = 2147353476LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v2 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v2 = 2147353476LL;
  v3 = 2147353477LL;
  if ( *(_BYTE *)v2 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
    {
      LOBYTE(v7) = -1;
      LdrpLogEtwEvent(5248, -1, 255, v7, 0LL, 0LL);
    }
  }
  result = RtlEnterCriticalSection(&LdrpLoaderLock);
  v5 = result;
  v6 = NtCurrentPeb()->SharedData;
  if ( v6 && *v6 )
    v0 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v0 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v3 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v3 & 0x20) != 0 )
      {
        LOBYTE(v9) = -1;
        LdrpLogEtwEvent(5249, -1, 255, v9, 0LL, 0LL);
      }
    }
    return v5;
  }
  return result;
}
