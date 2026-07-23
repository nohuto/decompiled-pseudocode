/*
 * XREFs of WheaInitializeRegChangeNotify @ 0x1407B91FC
 * Callers:
 *     WheapSetPolicyValue @ 0x1407B967C (WheapSetPolicyValue.c)
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 */

void WheaInitializeRegChangeNotify()
{
  if ( WheapDispatchPtr.NextDevice )
  {
    WheapDispatchPtr.Queue.ListEntry.Flink = 0LL;
    WheapDispatchPtr.Vpb = 0LL;
    *(_QWORD *)&WheapDispatchPtr.DeviceType = WheaRegChangeNotifyCallback;
    if ( NtNotifyChangeMultipleKeys(
           WheapDispatchPtr.NextDevice,
           0,
           0LL,
           0LL,
           (PIO_APC_ROUTINE)&WheapDispatchPtr.Vpb,
           (PVOID)1,
           (PIO_STATUS_BLOCK)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink,
           4u,
           0,
           0LL,
           0,
           1u) < 0 )
      _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.DriverObject, 1);
  }
}
