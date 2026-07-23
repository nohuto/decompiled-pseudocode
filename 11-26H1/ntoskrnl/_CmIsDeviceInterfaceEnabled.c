/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x140A7D950
 * Callers:
 *     _CmDeviceClassesSubkeyCallback @ 0x14089EC60 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 288) )
      return guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
    else
      return -1073741822;
  }
  return result;
}
