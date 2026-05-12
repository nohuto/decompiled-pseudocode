/*
 * XREFs of sub_14003BC28 @ 0x14003BC28
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 * Callees:
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_140054998 @ 0x140054998 (sub_140054998.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14003BC28(__int64 a1, struct _UNICODE_STRING *a2, unsigned __int32 *a3)
{
  unsigned __int32 v5; // ebx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[32]; // [rsp+30h] [rbp-68h] BYREF

  v5 = _InterlockedIncrement(&dword_140168468);
  sub_14003BCD4(SourceString, 32LL, L"\\Device\\RaidPort%d", v5, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = sub_140054998(a2, &DestinationString);
  *a3 = v5;
  return result;
}
