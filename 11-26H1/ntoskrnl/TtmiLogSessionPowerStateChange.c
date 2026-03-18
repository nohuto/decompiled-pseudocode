/*
 * XREFs of TtmiLogSessionPowerStateChange @ 0x1407EA930
 * Callers:
 *     TtmNotifySessionPowerStateChange @ 0x140B65774 (TtmNotifySessionPowerStateChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 */

void __fastcall TtmiLogSessionPowerStateChange(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // [rsp+30h] [rbp-68h] BYREF
  int SessionId; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  int *p_SessionId; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  char *v10; // [rsp+70h] [rbp-28h]
  __int64 v11; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140FD58A8 > 5 && tlgKeywordOn((__int64)&dword_140FD58A8, 1LL) )
  {
    SessionId = TtmiGetSessionId(v3, v2, v4);
    v5 = a1;
    v9 = 4LL;
    p_SessionId = &SessionId;
    v11 = 1LL;
    v10 = &v5;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD58A8, (unsigned __int8 *)&byte_140051B4A, 0LL, 0LL, 4u, &v7);
  }
}
