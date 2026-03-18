/*
 * XREFs of _CmGetDeviceRelationsList @ 0x1409A8120
 * Callers:
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x14095F4C0 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall CmGetDeviceRelationsList(__int64 a1, const WCHAR *a2, int a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( a3 != 4 && a3 != 32 && a3 != 64 && a3 != 8 && a3 != 16 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 280) )
    {
      result = guard_dispatch_icall_no_overrides(a1);
      if ( result == -2147483643 )
        return -1073741789;
    }
    else
    {
      return -1073741822;
    }
  }
  return result;
}
