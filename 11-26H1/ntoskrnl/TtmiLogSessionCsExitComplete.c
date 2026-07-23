/*
 * XREFs of TtmiLogSessionCsExitComplete @ 0x1407EFDC0
 * Callers:
 *     TtmNotifyLowPowerStateExited @ 0x1409F5A40 (TtmNotifyLowPowerStateExited.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void TtmiLogSessionCsExitComplete()
{
  int v0; // r8d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  if ( (unsigned int)dword_140FD68B8 > 5 && tlgKeywordOn((__int64)&dword_140FD68B8, 1LL) )
  {
    v1 = v0;
    v3 = &v1;
    v4 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)&dword_140051F1C, 0LL, 0LL, 3u, &v2);
  }
}
