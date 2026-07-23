/*
 * XREFs of TtmiLogSessionMonitorControl @ 0x1409F64BC
 * Callers:
 *     TtmSessionMonitorControl @ 0x1409F6408 (TtmSessionMonitorControl.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void TtmiLogSessionMonitorControl()
{
  int v0; // r8d
  int v1; // r9d
  int v2; // r10d
  int v3; // r11d
  int v4; // [rsp+30h] [rbp-29h] BYREF
  int v5; // [rsp+34h] [rbp-25h] BYREF
  int v6; // [rsp+38h] [rbp-21h] BYREF
  int v7; // [rsp+3Ch] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-19h] BYREF
  int *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  int *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  int *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140FD68B8 > 5 && tlgKeywordOn((__int64)&dword_140FD68B8, 1LL) )
  {
    v6 = v0;
    v9 = &v4;
    v7 = v1;
    v11 = &v5;
    v4 = v3;
    v13 = &v6;
    v10 = 4LL;
    v15 = &v7;
    v5 = v2;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)byte_140051F51, 0LL, 0LL, 6u, &v8);
  }
}
