/*
 * XREFs of TtmiLogInitCurrentSessionStop @ 0x140A3AC18
 * Callers:
 *     TtmInitCurrentSession @ 0x140A3A0D4 (TtmInitCurrentSession.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 */

void __fastcall TtmiLogInitCurrentSessionStop(int a1)
{
  int SessionId; // [rsp+30h] [rbp-68h] BYREF
  int v3; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  int *p_SessionId; // [rsp+60h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp-30h]
  int *v7; // [rsp+70h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140FD58A8 > 5 && tlgKeywordOn((__int64)&dword_140FD58A8, 1LL) )
  {
    SessionId = TtmiGetSessionId();
    v3 = a1;
    v6 = 4LL;
    p_SessionId = &SessionId;
    v8 = 4LL;
    v7 = &v3;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD58A8, (unsigned __int8 *)&byte_140051B0F, 0LL, 0LL, 4u, &v4);
  }
}
