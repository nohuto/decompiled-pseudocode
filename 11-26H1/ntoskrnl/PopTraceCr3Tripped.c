/*
 * XREFs of PopTraceCr3Tripped @ 0x140609C64
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PopTraceCr3Tripped()
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)byte_14004B759, 0LL, 0LL, 3u, &v2);
  }
}
