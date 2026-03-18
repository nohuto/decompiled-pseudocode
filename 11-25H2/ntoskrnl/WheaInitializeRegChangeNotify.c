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
  char v0; // [rsp+58h] [rbp-10h]

  if ( WheapDispatchPtr.NextDevice )
  {
    WheapDispatchPtr.Queue.ListEntry.Flink = 0LL;
    WheapDispatchPtr.Vpb = 0LL;
    v0 = 1;
    *(_QWORD *)&WheapDispatchPtr.DeviceType = WheaRegChangeNotifyCallback;
    if ( (int)NtNotifyChangeMultipleKeys(
                WheapDispatchPtr.NextDevice,
                0,
                0,
                0,
                (__int64)&WheapDispatchPtr.Vpb,
                1LL,
                (__int64)&WheapDispatchPtr.Queue.ListEntry.Blink,
                4,
                0,
                0LL,
                0,
                v0) < 0 )
      _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.DriverObject, 1);
  }
}
