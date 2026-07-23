/*
 * XREFs of _CmGetDeviceRelationsList @ 0x140AA2650
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140AA24B4 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall CmGetDeviceRelationsList(__int64 a1, const WCHAR *a2, int a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( a3 != 4 && a3 != 32 && a3 != 16 && a3 != 8 && a3 != 64 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 280) )
    {
      result = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
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
