/*
 * XREFs of UsbhEtwLogHubPowerEvent @ 0x140028B5C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002A080 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A3D0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x14004A658 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004A9E0 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B3D0 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x140029BC0 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

NTSTATUS UsbhEtwLogHubPowerEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4, ...)
{
  NTSTATUS result; // eax
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int ActivityIdIrp; // eax
  const GUID *v12; // rdx
  int v13; // [rsp+60h] [rbp-29h] BYREF
  __int16 v14; // [rsp+64h] [rbp-25h]
  __int16 v15; // [rsp+66h] [rbp-23h]
  __int16 v16; // [rsp+68h] [rbp-21h]
  __int16 v17; // [rsp+6Ah] [rbp-1Fh]
  __int128 v18; // [rsp+70h] [rbp-19h] BYREF
  _OWORD v19[2]; // [rsp+80h] [rbp-9h] BYREF
  int v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+100h] [rbp+77h] BYREF
  va_list va; // [rsp+100h] [rbp+77h]
  va_list va1; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v21 = va_arg(va1, _QWORD);
  result = 0;
  v20 = 0;
  memset(v19, 0, sizeof(v19));
  v18 = 0LL;
  if ( dword_1400706F0 )
  {
    v8 = FdoExt(a1);
    v13 = v8[1298];
    v14 = *((_WORD *)v8 + 2598);
    v15 = v8[1300];
    v16 = *((_WORD *)v8 + 2614);
    v17 = *((_WORD *)v8 + 2615);
    UsbhEtwGetHubInfo(v8, v19, v9, v10);
    if ( a3 )
    {
      ActivityIdIrp = 0;
      v18 = *a3;
    }
    else if ( a2 && g_IoGetActivityIdIrp )
    {
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v18);
    }
    else
    {
      ActivityIdIrp = -1073741823;
    }
    v12 = (const GUID *)&v18;
    if ( ActivityIdIrp < 0 )
      v12 = 0LL;
    return UsbhEtwWrite(a4, v12, &v13, 12LL, v19, 36LL, va, 4LL, va1, 4LL, 0LL);
  }
  return result;
}
