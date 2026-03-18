/*
 * XREFs of TtmiLogQueueDestroyed @ 0x1407E9EF0
 * Callers:
 *     TtmpDeleteQueue @ 0x1407ED2A0 (TtmpDeleteQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void TtmiLogQueueDestroyed()
{
  __int64 v0; // r8
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  if ( (unsigned int)dword_140FD58A8 > 5 && tlgKeywordOn((__int64)&dword_140FD58A8, 1LL) )
  {
    v1 = v0;
    v3 = &v1;
    v4 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD58A8, (unsigned __int8 *)&word_14005242E, 0LL, 0LL, 3u, &v2);
  }
}
