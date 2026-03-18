/*
 * XREFs of DpiFdoArmWaitWake @ 0x140255350
 * Callers:
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x140255680 (DpiFdoWaitWakePoCompletionWorkItem.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     DpiFdoDriverArmWaitWake @ 0x140255578 (DpiFdoDriverArmWaitWake.c)
 *     DpiFdoDriverDisarmWaitWake @ 0x14025561C (DpiFdoDriverDisarmWaitWake.c)
 */

__int64 __fastcall DpiFdoArmWaitWake(PDEVICE_OBJECT DeviceObject)
{
  PVOID DeviceExtension; // rsi
  bool v3; // zf
  NTSTATUS v5; // edi
  signed __int32 v6; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = *((_BYTE *)DeviceExtension + 2726) == 0;
  *((_BYTE *)DeviceExtension + 2727) = 0;
  if ( v3 )
    return 3221225659LL;
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, DpiFdoArmWaitWake, File, 1u, 0x20u);
  if ( v5 >= 0 )
  {
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 688, 2, 1);
    if ( v6 == 1 )
    {
      v5 = DpiFdoDriverArmWaitWake(DeviceExtension);
      if ( v5 >= 0 )
      {
        v5 = PoRequestPowerIrp(
               DeviceObject,
               0,
               (POWER_STATE)1,
               (PREQUEST_POWER_COMPLETE)DpiFdoWaitWakePoCompletionRoutine,
               0LL,
               0LL);
        if ( v5 >= 0 )
          return 0LL;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 370;
        DpiFdoDriverDisarmWaitWake(DeviceExtension);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 337;
      }
    }
    else if ( (v6 & 1) != 0 )
    {
      *((_BYTE *)DeviceExtension + 2727) = 1;
    }
    else
    {
      WdLogSingleEntry1(4LL);
      v5 = 0;
      WdLogGlobalForLineNumber = 396;
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, DpiFdoArmWaitWake, 0x20u);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 314;
  }
  return (unsigned int)v5;
}
