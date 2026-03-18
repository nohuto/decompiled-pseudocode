/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x140099344
 * Callers:
 *     rimFindPausedDeviceAndCompleteRead @ 0x140036768 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     RIMIsWakeCapableDevice @ 0x1400991E8 (RIMIsWakeCapableDevice.c)
 *     rimDoRimDevChangeCallback @ 0x1400992DC (rimDoRimDevChangeCallback.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x140113824 (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 *     RIMOpenDevWorker @ 0x1401307BC (RIMOpenDevWorker.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x140140134 (RIMRegisterForDeviceChangeNotifications.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140183228 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMRemoveDevOfInputType @ 0x1401D5944 (RIMRemoveDevOfInputType.c)
 *     RIMFillDeviceHealthInfo @ 0x1401DACC0 (RIMFillDeviceHealthInfo.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401F0720 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     RIMHandleTTMDeviceArrival @ 0x1401F662C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 168) & 0x1000) != 0 ? 8 : 16;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
      return *(_DWORD *)(a1 + 48) != 3 ? 0x20 : 0;
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
    if ( v5 == 7 )
      return 8LL;
    if ( (unsigned int)(v5 - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(v5 - 1) <= 3 )
      return 16LL;
  }
  return 0LL;
}
