/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x14000F910
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhIdleIrp_NoIrp @ 0x14000F28C (UsbhIdleIrp_NoIrp.c)
 *     UsbhPdoPower_WaitWake @ 0x14000F7A0 (UsbhPdoPower_WaitWake.c)
 *     UsbhCompletePdoWakeIrp @ 0x14001087C (UsbhCompletePdoWakeIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140013D04 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x14004B790 (UsbhCompleteCanceledPdoWakeIrp.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, __int64 a4)
{
  int ActivityIdIrp; // eax
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  v8 = 0LL;
  if ( dword_1400706F0 )
  {
    FdoExt(*(_QWORD *)(a1 + 1184), a2, a3, a4);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v8);
    else
      ActivityIdIrp = -1073741823;
    v7 = (const GUID *)&v8;
    if ( ActivityIdIrp < 0 )
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
