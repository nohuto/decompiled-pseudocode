/*
 * XREFs of ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1400323CC
 * Callers:
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiCancelSuspendAdapterTimer @ 0x140032AD8 (DpiCancelSuspendAdapterTimer.c)
 *     DpiSetDevicePowerTransitionState @ 0x140032BD0 (DpiSetDevicePowerTransitionState.c)
 *     DpiRequestDevicePowerIrp @ 0x140032C50 (DpiRequestDevicePowerIrp.c)
 */

void __fastcall DpiFinishSuspendAdapter(struct _FDO_CONTEXT *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 528, &LockHandle);
  if ( *((_DWORD *)a1 + 1072) == 2 )
  {
    WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1962;
    *((_DWORD *)a1 + 1030) = 1;
    KeResetEvent((PRKEVENT)((char *)a1 + 4240));
    if ( *((_DWORD *)a1 + 1073) )
    {
      WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 1983;
      DpiRequestDevicePowerIrp(a1, 4LL);
      DpiSetDevicePowerTransitionState(a1, 4LL);
      DpiCancelSuspendAdapterTimer(a1);
    }
    else
    {
      DpiSetDevicePowerTransitionState(a1, 3LL);
    }
  }
  else
  {
    WdLogSingleEntry3(9LL, a1, 1LL, 0LL);
    WdLogGlobalForLineNumber = 1957;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
