/*
 * XREFs of PopSqmFanEnumeration @ 0x1407E83C8
 * Callers:
 *     PopFanAdd @ 0x1407DEDD0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140CDB6C0 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)word_140051B72, 0LL, 0LL, 2u, &v0);
}
