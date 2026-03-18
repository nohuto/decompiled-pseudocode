/*
 * XREFs of UsbhEtwLogHubPowerEvent @ 0x14002B584
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1400307B0 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x14004A820 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x14004AAA8 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x14004AE30 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004B820 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x14002ABB0 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

NTSTATUS UsbhEtwLogHubPowerEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4, ...)
{
  NTSTATUS result; // eax
  _DWORD *v8; // rax
  int ActivityIdIrp; // eax
  const GUID *v10; // rdx
  int v11; // [rsp+60h] [rbp-29h] BYREF
  __int16 v12; // [rsp+64h] [rbp-25h]
  __int16 v13; // [rsp+66h] [rbp-23h]
  __int16 v14; // [rsp+68h] [rbp-21h]
  __int16 v15; // [rsp+6Ah] [rbp-1Fh]
  __int128 v16; // [rsp+70h] [rbp-19h] BYREF
  _OWORD v17[2]; // [rsp+80h] [rbp-9h] BYREF
  int v18; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+100h] [rbp+77h] BYREF
  va_list va; // [rsp+100h] [rbp+77h]
  va_list va1; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v19 = va_arg(va1, _QWORD);
  result = 0;
  v18 = 0;
  memset(v17, 0, sizeof(v17));
  v16 = 0LL;
  if ( dword_14006F690 )
  {
    v8 = FdoExt(a1);
    v11 = v8[1298];
    v12 = *((_WORD *)v8 + 2598);
    v13 = v8[1300];
    v14 = *((_WORD *)v8 + 2614);
    v15 = *((_WORD *)v8 + 2615);
    UsbhEtwGetHubInfo((__int64)v8, (__int64)v17);
    if ( a3 )
    {
      ActivityIdIrp = 0;
      v16 = *a3;
    }
    else if ( a2 && g_IoGetActivityIdIrp )
    {
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v16);
    }
    else
    {
      ActivityIdIrp = -1073741823;
    }
    v10 = (const GUID *)&v16;
    if ( ActivityIdIrp < 0 )
      v10 = 0LL;
    return UsbhEtwWrite(a4, v10, &v11, 12LL, v17, 36LL, va, 4LL, va1, 4LL, 0LL);
  }
  return result;
}
