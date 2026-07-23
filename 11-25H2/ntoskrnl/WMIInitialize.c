/*
 * XREFs of WMIInitialize @ 0x140C2B4B8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140C2B580 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140C2B618 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140C2B87C (WmipRegisterFirmwareProviders.c)
 */

char __fastcall WMIInitialize(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
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
    v4 = *(_QWORD *)(a2 + 240);
    ExInitializeResourceLite2(&WmipSMBiosLock, -1);
    if ( *(_DWORD *)v4 >= 0x1130u )
    {
      v6 = *(_QWORD *)(v4 + 56);
      if ( v6 )
      {
        WmipSMBiosTablePhysicalAddress = *(_QWORD *)(v6 + 16);
        LODWORD(WmipSMBiosTableLength) = *(_DWORD *)(v6 + 12);
        *(_WORD *)((char *)&WmipSMBiosVersionInfo + 1) = *(_WORD *)(v6 + 7);
        LOBYTE(WmipSMBiosVersionInfo) = 0;
        HIWORD(WmipSMBiosVersionInfo) = BYTE2(WmipSMBiosVersionInfo);
      }
    }
    WmipRegisterFirmwareProviders(v6, v5);
    return 1;
  }
  return v2;
}
