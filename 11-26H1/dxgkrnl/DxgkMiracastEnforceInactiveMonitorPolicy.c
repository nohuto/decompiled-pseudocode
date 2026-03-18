/*
 * XREFs of DxgkMiracastEnforceInactiveMonitorPolicy @ 0x14004CCA0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1403AD850 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 */

void __fastcall DxgkMiracastEnforceInactiveMonitorPolicy(_DWORD *a1)
{
  char *v1; // rbp
  __int64 i; // rbx
  int v4; // eax
  __int64 v5; // rcx
  char *v6; // rdi

  v1 = 0LL;
  AcquireMiniportListMutex();
  for ( i = qword_140169280; (__int64 *)i != &qword_140169280; i = *(_QWORD *)i )
  {
    v1 = (char *)i;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
    *(_QWORD *)(i + 88) = KeGetCurrentThread();
    v4 = *(_DWORD *)(i + 408);
    if ( v4 == 2 || v4 == 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(i + 432) + 64LL);
      if ( *(_DWORD *)(v5 + 2696) == *a1 && *(_DWORD *)(v5 + 2700) == a1[1] )
      {
        *(_BYTE *)(i + 589) = 1;
      }
      else if ( *(_BYTE *)(i + 589) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(i + 24));
        _InterlockedXor((volatile signed __int32 *)(i + 28), (unsigned int)DxgkMiracastEnforceInactiveMonitorPolicy);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
        break;
      }
    }
    *(_QWORD *)(i + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
  }
  v6 = 0LL;
  if ( (__int64 *)i != &qword_140169280 )
    v6 = v1;
  ReleaseMiniportListMutex();
  if ( v6 )
  {
    DpiMiracastStopMiracastSessionSync(v6, 0, 0LL, 0LL, 0x86u, 0);
    DpiMiracastReleaseMiracastDeviceContext(v6);
  }
}
