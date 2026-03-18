/*
 * XREFs of _CmIsDevicePresent @ 0x140A00F4C
 * Callers:
 *     _CmEnumSubkeyCallback @ 0x14080B630 (_CmEnumSubkeyCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A00B50 (PiPnpRtlServiceFilterCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall CmIsDevicePresent(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  int result; // eax
  UNICODE_STRING v6; // [rsp+48h] [rbp-20h] BYREF

  v6 = 0LL;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(&v6, a2);
  if ( result < 0 )
    goto LABEL_9;
  if ( !*(_QWORD *)(a1 + 264) )
    return -1073741822;
  result = guard_dispatch_icall_no_overrides(a1);
  if ( result == -2147483643 )
    return -1073741789;
  if ( result < 0 )
  {
LABEL_9:
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
