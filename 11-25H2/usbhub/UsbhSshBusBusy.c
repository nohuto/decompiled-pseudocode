/*
 * XREFs of UsbhSshBusBusy @ 0x14004190C
 * Callers:
 *     Usbh_BS_BusRun @ 0x140001DE4 (Usbh_BS_BusRun.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 *     UsbhHubSSH_PnpStart @ 0x14005E490 (UsbhHubSSH_PnpStart.c)
 *     UsbhHubSSH_PnpStop @ 0x14005E5B0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

void __fastcall UsbhSshBusBusy(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rdx
  _QWORD *v10; // r10

  v4 = (volatile signed __int64 *)FdoExt(a1);
  v5 = UsbhIncHubBusy(a1, a2, a1, 1430418291, 1);
  Log(a1, 2048, 1114863915, _InterlockedCompareExchange64(v4 + 411, v5, 0LL), v5);
  if ( v6 )
  {
    Log(a1, v8, 1114845741, v6, v7);
    UsbhDecHubBusy(a1, v9, v10);
  }
}
