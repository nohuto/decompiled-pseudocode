/*
 * XREFs of LdrpInitializeImportRedirection @ 0x18011D004
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E81A0 (LdrpInitializeGraphRecurse.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18015D73C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x18015E1F0 (LdrpBuildImportRedirection.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  __int64 v2; // rdi
  int v3; // eax
  __int64 *v4; // rcx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v9[128]; // [rsp+40h] [rbp-98h] BYREF

  memset_thunk_772440563353939046(v9, 0, 0x80uLL);
  v8 = 0LL;
  Dll = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrredirect.c",
      557,
      (__int64)"LdrpInitializeImportRedirection",
      2,
      "Loading import redirection DLL: '%wZ'\n",
      p_RedirectionDllName);
    LdrpInitializeDllPath(0LL, 0LL, (__int64)v9);
    Dll = LdrpLoadDll(&p_RedirectionDllName->Length, (__int64)v9, 16777217, (__int64)&v8);
    LdrpReleaseDllPath((__int64)v9);
    if ( Dll >= 0 )
    {
      v2 = v8;
      v3 = LdrpBuildImportRedirection(v8);
      Dll = v3;
      if ( v3 >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v4 = *(__int64 **)(v2 + 152);
        v7[0] = 0;
        Dll = LdrpInitializeGraphRecurse(v4, 0LL, v7);
        LdrpReleaseLoaderLock(v5, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v2 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v2 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v2);
          LdrpRedirectionModule = v2;
        }
      }
      else
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrredirect.c",
          584,
          (__int64)"LdrpInitializeImportRedirection",
          0,
          "Unable to build import redirection Table, Status = 0x%x\n",
          v3);
      }
    }
  }
  return (unsigned int)Dll;
}
