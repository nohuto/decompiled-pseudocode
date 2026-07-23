/*
 * XREFs of WMIInitialize @ 0x140CE6210
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140CE6280 (WmipInitializeRegistration.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CE6318 (WmipGetSMBiosFromLoaderBlock.c)
 *     WmipInitializeAllocs @ 0x140CE6498 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140CE6708 (WmipRegisterFirmwareProviders.c)
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
  if ( (int)IoCreateDriver(&DestinationString, WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders(v5, v4);
    return 1;
  }
  return v2;
}
