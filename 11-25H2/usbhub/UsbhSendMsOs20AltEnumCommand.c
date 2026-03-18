/*
 * XREFs of UsbhSendMsOs20AltEnumCommand @ 0x140043930
 * Callers:
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140019B80 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

__int64 __fastcall UsbhSendMsOs20AltEnumCommand(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rsi
  char v7; // r8
  __int64 v8; // rcx
  int v9; // r10d
  __int64 v11; // [rsp+28h] [rbp-40h]
  char v12[4]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h]
  __int16 v14; // [rsp+80h] [rbp+18h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v6 = PdoExt(a2);
  v7 = *(_BYTE *)(a3 + 7);
  v12[1] = *(_BYTE *)(a3 + 6);
  v8 = *((_QWORD *)v6 + 148);
  v12[3] = v7;
  v12[0] = 64;
  v12[2] = 0;
  v13 = 8;
  v14 = 0;
  v9 = UsbhSyncSendCommandToDevice(v8, a2, v12, 0LL, &v14, v11, &v15);
  if ( v9 >= 0 )
    v6[355] |= 0x40000000u;
  else
    Log(a1, 4, 1095053873, 0LL, 0LL);
  return (unsigned int)v9;
}
