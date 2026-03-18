/*
 * XREFs of WMIInitialize @ 0x140CDFE78
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140CDFEE8 (WmipInitializeRegistration.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CDFF80 (WmipGetSMBiosFromLoaderBlock.c)
 *     WmipInitializeAllocs @ 0x140CE0100 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140CE0368 (WmipRegisterFirmwareProviders.c)
 */

char __fastcall WMIInitialize(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( (_DWORD)a1 )
  {
    WmipInitializeRegistration(a1, a2);
    return 1;
  }
  WmipInitializeAllocs(a1, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( (int)IoCreateDriver(&DestinationString, (unsigned __int64)WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders(v5, v4);
    return 1;
  }
  return v2;
}
