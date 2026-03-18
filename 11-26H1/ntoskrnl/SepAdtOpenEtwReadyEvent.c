/*
 * XREFs of SepAdtOpenEtwReadyEvent @ 0x140B4C9F4
 * Callers:
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 */

__int64 __fastcall SepAdtOpenEtwReadyEvent(_QWORD *a1)
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v4[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v5; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  __int128 v9; // [rsp+60h] [rbp-10h]

  v4[1] = 0;
  v8 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\ADT_ETW_CHANNEL_INIT");
  v4[0] = 48;
  p_DestinationString = &DestinationString;
  v5 = 0LL;
  v7 = 640;
  v9 = 0LL;
  result = NtCreateEvent(a1, 0x100003u, (__int64)v4, NotificationEvent, 0);
  if ( (_DWORD)result == 0x40000000 || (_DWORD)result == -1073741771 )
    return 0LL;
  return result;
}
