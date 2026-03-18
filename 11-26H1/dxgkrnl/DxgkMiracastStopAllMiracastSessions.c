/*
 * XREFs of DxgkMiracastStopAllMiracastSessions @ 0x1403B5090
 * Callers:
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1401A3174 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x14024C630 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DxgkSessionDisconnected @ 0x1403B4C60 (DxgkSessionDisconnected.c)
 *     DpiMiracastHandlePowerCallback @ 0x140410650 (DpiMiracastHandlePowerCallback.c)
 * Callees:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x14006DC28 (DpiMiracastAddRefMiracastDeviceContext.c)
 */

void __fastcall DxgkMiracastStopAllMiracastSessions(char a1, union _LARGE_INTEGER *a2, unsigned int a3)
{
  char *v6; // rsi
  __int64 i; // rbx
  __int64 v8; // rdi
  int v9; // eax
  char *v10; // rdi

  while ( 1 )
  {
    v6 = 0LL;
    AcquireMiniportListMutex();
    for ( i = qword_140169280; (__int64 *)i != &qword_140169280; i = *(_QWORD *)i )
    {
      v8 = i + 32;
      v6 = (char *)i;
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
      *(_QWORD *)(i + 88) = KeGetCurrentThread();
      v9 = *(_DWORD *)(i + 408);
      if ( v9 == 2 || v9 == 1 )
      {
        DpiMiracastAddRefMiracastDeviceContext(i, (unsigned int)DxgkMiracastStopAllMiracastSessions);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v8);
        break;
      }
      *(_QWORD *)(i + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v8);
    }
    v10 = 0LL;
    if ( (__int64 *)i != &qword_140169280 )
      v10 = v6;
    ReleaseMiniportListMutex();
    if ( !v10 )
      break;
    DpiMiracastStopMiracastSessionSync(v10, a1, a2, 0LL, a3, 0);
    DpiMiracastReleaseMiracastDeviceContext((int *)v10, (unsigned int)DxgkMiracastStopAllMiracastSessions);
  }
}
