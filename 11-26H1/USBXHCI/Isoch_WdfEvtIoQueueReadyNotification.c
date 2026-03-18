/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x140010120
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  char v3; // di

  v3 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a2 + 40));
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1368LL) == 2 )
  {
    Debug_FreAssertMsg(
      (__int64)"IO Received on an endpoint that has been offloaded",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      2975);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2
         || (_InterlockedExchange((volatile __int32 *)(a2 + 352), 1),
             _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2) )
  {
    Isoch_MapTransfers(a2);
  }
  if ( v3 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a2 + 40));
  }
}
