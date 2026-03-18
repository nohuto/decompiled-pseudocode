/*
 * XREFs of CsTerminate @ 0x14000D444
 * Callers:
 *     CiDriverUnload @ 0x14000D390 (CiDriverUnload.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     CiFreeMemory @ 0x140003F50 (CiFreeMemory.c)
 *     WppCleanupKm @ 0x14000D51C (WppCleanupKm.c)
 *     CiNdisCleanupThrottle @ 0x14000DB84 (CiNdisCleanupThrottle.c)
 *     CiSystemTerminate @ 0x14000DF14 (CiSystemTerminate.c)
 *     CiSchedulerTerminate @ 0x14000E00C (CiSchedulerTerminate.c)
 */

__int64 CsTerminate()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax

  if ( CiThreadCallbackRegistered )
  {
    PsRemoveCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
    CiThreadCallbackRegistered = 0;
  }
  CiSchedulerTerminate();
  if ( CiKernelExtensionRegistration )
    ExUnregisterExtension();
  while ( 1 )
  {
    Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
      break;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead
      || (v1 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink,
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink->Blink != WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      __fastfail(3u);
    }
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink;
    v1->Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
    CiFreeMemory(Flink[1].Flink);
    CiFreeMemory(&Flink[-1].Blink);
  }
  CiSystemTerminate();
  CiNdisCleanupThrottle();
  if ( CiLoggerContext )
  {
    EtwUnregister(CiLoggerContext);
    CiLoggerContext = 0LL;
  }
  return WppCleanupKm();
}
