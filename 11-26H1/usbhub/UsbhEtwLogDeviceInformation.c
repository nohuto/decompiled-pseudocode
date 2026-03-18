/*
 * XREFs of UsbhEtwLogDeviceInformation @ 0x1400334AC
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhEtwRundown @ 0x140028180 (UsbhEtwRundown.c)
 *     UsbhBusConnectPdo @ 0x140032B60 (UsbhBusConnectPdo.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x140033600 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UsbhEtwLogDeviceInformation(__int64 a1, const EVENT_DESCRIPTOR *a2, char a3)
{
  NTSTATUS result; // eax
  _DWORD *v7; // rax
  int v8; // [rsp+60h] [rbp-9h] BYREF
  int v9; // [rsp+68h] [rbp-1h] BYREF
  __int16 v10; // [rsp+6Ch] [rbp+3h]
  __int16 v11; // [rsp+6Eh] [rbp+5h]
  __int16 v12; // [rsp+70h] [rbp+7h]
  __int16 v13; // [rsp+72h] [rbp+9h]
  _OWORD v14[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+A0h] [rbp+37h]

  result = 0;
  v15 = 0LL;
  v16 = 0;
  memset(v14, 0, sizeof(v14));
  if ( dword_1400706F0 )
  {
    v7 = FdoExt(*(_QWORD *)(a1 + 1184));
    v9 = v7[1298];
    v10 = *((_WORD *)v7 + 2598);
    v11 = v7[1300];
    v12 = *((_WORD *)v7 + 2614);
    v13 = *((_WORD *)v7 + 2615);
    UsbhEtwGetDeviceInfo(a1, v14);
    v8 = *(_DWORD *)(a1 + 788);
    if ( a3 )
      return UsbhEtwWrite(a2, 0LL, &v9, 12LL, v14, 44LL, &v8, 4LL, a1 + 1400, 18LL, 0LL);
    else
      return UsbhEtwWrite(a2, 0LL, &v9, 12LL, v14, 44LL, &v8, 4LL, 0LL);
  }
  return result;
}
