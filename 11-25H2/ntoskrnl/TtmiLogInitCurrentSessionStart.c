/*
 * XREFs of TtmiLogInitCurrentSessionStart @ 0x140A2D4E4
 * Callers:
 *     TtmInitCurrentSession @ 0x140A2D29C (TtmInitCurrentSession.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void TtmiLogInitCurrentSessionStart()
{
  int SessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140FD78E8 > 5 && tlgKeywordOn((__int64)&dword_140FD78E8, 1LL) )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v5 = 0;
    v1 = SessionId;
    v4 = 4;
    v3 = &v1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD78E8, (unsigned __int8 *)byte_14004F991, 0LL, 0LL, 3u, &v2);
  }
}
