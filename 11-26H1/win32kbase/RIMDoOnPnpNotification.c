/*
 * XREFs of RIMDoOnPnpNotification @ 0x140091548
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x14008FEFC (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1401BC738 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140092458 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     rimOnPnpRemoveComplete @ 0x1400930E8 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x140095794 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimOnPnpQueryRemove @ 0x14020BA78 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x14020BD00 (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ebx
  struct RawInputManagerObject *v7; // rcx

  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1063LL);
  v4 = *((_QWORD *)a1 + 4);
  if ( v4 != PsGetCurrentProcess(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1064LL);
  v5 = *(_DWORD *)(a2 + 168);
  v6 = 0;
  if ( (v5 & 1) != 0 )
  {
    v6 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v6 >= 0 )
    {
      v7 = a1;
      if ( (*(_DWORD *)(a2 + 168) & 0x40) != 0 )
      {
        rimDoRimDevChange(a1, a2, 2LL);
        return (unsigned int)v6;
      }
LABEL_17:
      rimQueueRimDevChangeAsyncWorkItem(v7);
    }
  }
  else
  {
    if ( (v5 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
        rimQueueRimDevChangeAsyncWorkItem(a1);
    }
    if ( (*(_DWORD *)(a2 + 168) & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 168) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
    }
    if ( (*(_DWORD *)(a2 + 168) & 8) != 0 )
    {
      v6 = rimOnPnpRemoveComplete(a1, a2);
      if ( v6 >= 0 )
      {
        v7 = a1;
        if ( (*(_DWORD *)(a2 + 168) & 0x40) == 0 )
          goto LABEL_17;
        if ( (unsigned int)rimOnPnpRemoveCompleteInUserCrit(a1) )
        {
          rimDoRimDevChange(a1, a2, 3LL);
          RIMFreeDev(a1, (struct RIMDEV *)a2);
        }
      }
    }
  }
  return (unsigned int)v6;
}
