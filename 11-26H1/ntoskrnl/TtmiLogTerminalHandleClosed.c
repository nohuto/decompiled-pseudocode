/*
 * XREFs of TtmiLogTerminalHandleClosed @ 0x1407F0D08
 * Callers:
 *     TtmpCloseTerminalHandle @ 0x1407F21F0 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void TtmiLogTerminalHandleClosed()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // r10d
  int v3; // r11d
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-19h] BYREF
  int *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  int *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  __int64 *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  __int64 *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

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
    v14 = 8LL;
    v16 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)byte_140052A65, 0LL, 0LL, 6u, &v8);
  }
}
