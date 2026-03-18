/*
 * XREFs of UsbhSetPortPower @ 0x14003E270
 * Callers:
 *     UsbhSyncPowerOnPorts @ 0x14002D264 (UsbhSyncPowerOnPorts.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FF90 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhSetPortPower(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v7; // [rsp+20h] [rbp-60h]
  int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-28h] BYREF
  __int16 v10; // [rsp+5Ch] [rbp-24h]
  __int16 v11; // [rsp+5Eh] [rbp-22h]
  __int16 v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+62h] [rbp-1Eh] BYREF
  __int16 v14; // [rsp+66h] [rbp-1Ah]
  char v15; // [rsp+68h] [rbp-18h]
  char v16; // [rsp+69h] [rbp-17h]

  v2 = a2;
  v16 = 0;
  v8 = 0;
  FdoExt(a1);
  v13 = 0;
  v14 = v2;
  v12 = 0;
  Log(a1, 8, 1886416944, (unsigned int)v2, 0LL);
  v11 = 0;
  v9 = 525091;
  v15 = 3;
  v10 = v2;
  v4 = (int)UsbhSyncSendCommand(a1, (unsigned __int8 *)&v9, 0LL, (_WORD *)&v13 + 1, v7, &v8);
  Log(a1, 8, 1886416945, v4, v8);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
    UsbhException(a1, v2, 12, &v12, 0xAu, v4, v5, usbfile_hub_c, 3524, 0);
  Log(a1, 8, 1886549072, v4, v2);
  return (unsigned int)v4;
}
