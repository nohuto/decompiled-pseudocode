/*
 * XREFs of _CmGetDeviceChildren @ 0x140A92F7C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceSiblings @ 0x140A92DFC (_CmGetDeviceSiblings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     __report_rangecheckfailure @ 0x140522044 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpMultiSzAppend @ 0x140A933A4 (_PnpMultiSzAppend.c)
 */

int __fastcall CmGetDeviceChildren(__int64 a1, const WCHAR *a2, _WORD *a3, _DWORD *a4)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+58h] [rbp-A8h]

  v7 = a1;
  DestinationString = 0LL;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
  }
  else
  {
    *a4 = 0;
  }
  *a4 = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 272) )
    {
      result = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
      if ( result == -2147483643 )
      {
        return -1073741789;
      }
      else if ( result >= 0 )
      {
        return -1073741275;
      }
    }
    else
    {
      return -1073741822;
    }
  }
  return result;
}
