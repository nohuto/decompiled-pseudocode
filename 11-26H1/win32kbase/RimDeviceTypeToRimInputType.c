/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x140096120
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x14008FEFC (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMRemoveDevOfInputType @ 0x140092B8C (RIMRemoveDevOfInputType.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x140093704 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDevWorker @ 0x140093824 (RIMOpenDevWorker.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 *     RIMIsWakeCapableDevice @ 0x140095FA0 (RIMIsWakeCapableDevice.c)
 *     rimDoRimDevChangeCallback @ 0x1400960B4 (rimDoRimDevChangeCallback.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1400977A8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     RIMFillDeviceHealthInfo @ 0x140201360 (RIMFillDeviceHealthInfo.c)
 *     RIMHandleTTMDeviceArrival @ 0x14021164C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx

  if ( a2 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
    {
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
      if ( v3 == 7 )
      {
        return 8LL;
      }
      else if ( (unsigned int)(v3 - 5) <= 1 )
      {
        return 4LL;
      }
      else if ( (unsigned int)(v3 - 1) > 2 )
      {
        result = 0LL;
        if ( v3 == 4 )
          return 16LL;
      }
      else
      {
        return 16LL;
      }
    }
    else
    {
      result = 0LL;
      if ( *(_DWORD *)(a1 + 48) != 3 )
        return 32LL;
    }
  }
  else if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 2 )
      {
        result = 8LL;
        if ( (*(_DWORD *)(a1 + 168) & 0x1000) == 0 )
          return 16LL;
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      return 2LL;
    }
  }
  else
  {
    return 1LL;
  }
  return result;
}
