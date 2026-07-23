/*
 * XREFs of TtmiLogInitCurrentSessionStart @ 0x1409F5F14
 * Callers:
 *     TtmInitCurrentSession @ 0x1409F5CD4 (TtmInitCurrentSession.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

void TtmiLogInitCurrentSessionStart()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int SessionId; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *p_SessionId; // [rsp+58h] [rbp-20h]
  __int64 v6; // [rsp+60h] [rbp-18h]

  if ( (unsigned int)dword_140FD68B8 > 5 && tlgKeywordOn((__int64)&dword_140FD68B8, 1LL) )
  {
    SessionId = TtmiGetSessionId(v1, v0, v2);
    v6 = 4LL;
    p_SessionId = &SessionId;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)&dword_140052AF2, 0LL, 0LL, 3u, &v4);
  }
}
