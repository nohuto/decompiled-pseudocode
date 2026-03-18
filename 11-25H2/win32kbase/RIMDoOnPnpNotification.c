/*
 * XREFs of RIMDoOnPnpNotification @ 0x140113F30
 * Callers:
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x140113824 (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1401F0D54 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x14002B6EC (rimOnPnpRemoveCompleteInUserCrit.c)
 *     rimOnPnpRemoveComplete @ 0x14002E724 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140132014 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1401ED378 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1401ED600 (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(struct RawInputManagerObject *a1, __int64 a2)
{
  int v4; // eax
  int v5; // esi
  struct RawInputManagerObject *v6; // rcx

  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1058LL);
  if ( *((_QWORD *)a1 + 4) != PsGetCurrentProcess(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1059LL);
  v4 = *(_DWORD *)(a2 + 168);
  v5 = 0;
  if ( (v4 & 1) != 0 )
  {
    v5 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v5 >= 0 )
    {
      v6 = a1;
      if ( (*(_DWORD *)(a2 + 168) & 0x40) != 0 )
      {
        rimDoRimDevChange((__int64)a1, a2, 2u);
        return (unsigned int)v5;
      }
LABEL_16:
      rimQueueRimDevChangeAsyncWorkItem(v6);
    }
  }
  else
  {
    if ( (v4 & 2) != 0 )
      rimOnPnpQueryRemove(a1, a2);
    if ( (*(_DWORD *)(a2 + 168) & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 168) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
    }
    if ( (*(_DWORD *)(a2 + 168) & 8) != 0 )
    {
      v5 = rimOnPnpRemoveComplete((char)a1, a2);
      if ( v5 >= 0 )
      {
        v6 = a1;
        if ( (*(_DWORD *)(a2 + 168) & 0x40) == 0 )
          goto LABEL_16;
        if ( (unsigned int)rimOnPnpRemoveCompleteInUserCrit(a1, a2) )
        {
          rimDoRimDevChange((__int64)a1, a2, 3u);
          RIMFreeDev(a1, (struct RIMDEV *)a2);
        }
      }
    }
  }
  return (unsigned int)v5;
}
