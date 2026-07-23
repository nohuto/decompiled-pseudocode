/*
 * XREFs of PnpTraceRequestDeviceRemovalForReset @ 0x1407B50B0
 * Callers:
 *     PiProcessDeviceResetAction @ 0x1405DBD48 (PiProcessDeviceResetAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PnpTraceRequestDeviceRemovalForReset(__int64 a1, int a2)
{
  unsigned __int16 *v3; // r8
  unsigned __int16 *v4; // r9
  int v5; // r10d
  int v6; // r11d
  int v7; // [rsp+30h] [rbp-79h] BYREF
  int v8; // [rsp+34h] [rbp-75h] BYREF
  int v9; // [rsp+38h] [rbp-71h] BYREF
  __int64 v10; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v12; // [rsp+70h] [rbp-39h]
  __int64 v13; // [rsp+78h] [rbp-31h]
  _DWORD *v14; // [rsp+80h] [rbp-29h]
  __int64 v15; // [rsp+88h] [rbp-21h]
  __int64 v16; // [rsp+90h] [rbp-19h]
  _DWORD v17[2]; // [rsp+98h] [rbp-11h] BYREF
  _DWORD *v18; // [rsp+A0h] [rbp-9h]
  __int64 v19; // [rsp+A8h] [rbp-1h]
  __int64 v20; // [rsp+B0h] [rbp+7h]
  _DWORD v21[2]; // [rsp+B8h] [rbp+Fh] BYREF
  int *v22; // [rsp+C0h] [rbp+17h]
  __int64 v23; // [rsp+C8h] [rbp+1Fh]
  int *v24; // [rsp+D0h] [rbp+27h]
  __int64 v25; // [rsp+D8h] [rbp+2Fh]
  int *v26; // [rsp+E0h] [rbp+37h]
  __int64 v27; // [rsp+E8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E06E48 > 5 && tlgKeywordOn((__int64)&dword_140E06E48, 0x400000000000LL) )
  {
    v10 = 0x1000000LL;
    v12 = &v10;
    v13 = 8LL;
    v14 = v17;
    v16 = *((_QWORD *)v4 + 1);
    v17[0] = *v4;
    v18 = v21;
    v20 = *((_QWORD *)v3 + 1);
    v21[0] = *v3;
    v22 = &v7;
    v24 = &v8;
    v26 = &v9;
    v15 = 2LL;
    v17[1] = 0;
    v19 = 2LL;
    v21[1] = 0;
    v7 = v5;
    v23 = 4LL;
    v8 = a2;
    v25 = 4LL;
    v9 = v6;
    v27 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06E48,
      (unsigned __int8 *)word_14004870A,
      0LL,
      0LL,
      0xAu,
      &v11);
  }
}
