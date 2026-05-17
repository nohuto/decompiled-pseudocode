/*
 * XREFs of LdrpAcquireLoaderLock @ 0x180084090
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800E1C10 (LdrEnumerateLoadedModules.c)
 *     LdrLockLoaderLock @ 0x1800E67E0 (LdrLockLoaderLock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x1801105B0 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 */

__int64 LdrpAcquireLoaderLock()
{
  __int64 v0; // rbx
  _DWORD *SharedData; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v5; // esi
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
    v8 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
    {
      LOBYTE(v7) = -1;
      LdrpLogEtwEvent(5248, -1, 255, v7, 0LL, 0LL);
    }
  }
  result = RtlEnterCriticalSection((__int64)&LdrpLoaderLock);
  v5 = result;
  v6 = NtCurrentPeb()->SharedData;
  if ( v6 && *v6 )
    v0 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v0 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
