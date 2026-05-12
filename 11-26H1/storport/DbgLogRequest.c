/*
 * XREFs of DbgLogRequest @ 0x14002A5C0
 * Callers:
 *     RaUnitFlushSrb @ 0x140003AB0 (RaUnitFlushSrb.c)
 *     RaidUnitSubmitRequest @ 0x140004BD0 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     RiNormalizeDeviceQueue @ 0x140022EC0 (RiNormalizeDeviceQueue.c)
 *     StorPortDeviceBusy @ 0x140027E70 (StorPortDeviceBusy.c)
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     StorPortResumeDevice @ 0x140028690 (StorPortResumeDevice.c)
 *     StorPortPauseDevice @ 0x140028C40 (StorPortPauseDevice.c)
 *     RaidLogRequestComplete @ 0x14002A288 (RaidLogRequestComplete.c)
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 *     StorPortBusy @ 0x140050770 (StorPortBusy.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x14005A824 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     StorPortReady @ 0x14005CDB0 (StorPortReady.c)
 *     RaCallMiniportResetBus @ 0x140060048 (RaCallMiniportResetBus.c)
 *     RaidLogPower @ 0x14006CF04 (RaidLogPower.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUpdateZoneIoSubmission @ 0x14007461C (RaidUpdateZoneIoSubmission.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x14007B410 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x14007BE90 (StorPortPause.c)
 *     StorPortResume @ 0x14007C4D0 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1400937C4 (RaidCompleteMiniportRequestCallback.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1400A6948 (RaidResumeAndRestartUnitQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( a1 )
  {
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v9 = *(_DWORD *)(a1 + 4996);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 5000);
        if ( v10 )
        {
          v11 = a7;
          v12 = 6LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4992)) % v9);
          *(_DWORD *)(v10 + 8 * v12) = a2;
          if ( !a7 )
            v11 = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v10 + 8 * v12 + 40) = v11;
          *(_QWORD *)(v10 + 8 * v12 + 24) = a5;
          *(_QWORD *)(v10 + 8 * v12 + 32) = a6;
          *(_QWORD *)(v10 + 8 * v12 + 8) = a3;
          *(_QWORD *)(v10 + 8 * v12 + 16) = a4;
        }
      }
    }
  }
}
