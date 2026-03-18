/*
 * XREFs of PopDiagTraceUmpoAlpcProcessingError @ 0x1407D5614
 * Callers:
 *     PopUmpoProcessMessages @ 0x140AAA08C (PopUmpoProcessMessages.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PopDiagTraceUmpoAlpcProcessingError()
{
  int v0; // r8d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
  {
    v1 = v0;
    v3 = &v1;
    v4 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)byte_140049C90, 0LL, 0LL, 3u, &v2);
  }
}
