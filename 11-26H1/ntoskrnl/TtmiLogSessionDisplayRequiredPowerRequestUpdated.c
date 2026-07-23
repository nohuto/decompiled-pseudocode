/*
 * XREFs of TtmiLogSessionDisplayRequiredPowerRequestUpdated @ 0x1407EFF9C
 * Callers:
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1407ED464 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void TtmiLogSessionDisplayRequiredPowerRequestUpdated()
{
  __int64 v0; // rdx
  char v1; // r8
  int v2; // r9d
  int v3; // r10d
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  char *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140FD68B8 > 5 && tlgKeywordOn((__int64)&dword_140FD68B8, 1LL) )
  {
    v6 = v2;
    v8 = &v5;
    v4 = v1;
    v10 = &v6;
    v13 = v0;
    v12 = &v4;
    v5 = v3;
    v9 = 4LL;
    v11 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)&qword_140053370, 0LL, 0LL, 5u, &v7);
  }
}
