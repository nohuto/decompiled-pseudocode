/*
 * XREFs of WheapLoadPolicy @ 0x140C33974
 * Callers:
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
 *     WheapScanRegistryForPolicyChanges @ 0x1407B9598 (WheapScanRegistryForPolicyChanges.c)
 *     WheapPropagatePolicyToHal @ 0x140AA44AC (WheapPropagatePolicyToHal.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C33A68 (WheapOpenPolicyRegistryKey.c)
 */

void WheapLoadPolicy()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+50h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  v0 = 0;
  BYTE2(WheapDispatchPtr.AttachedDevice) = 6;
  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  LODWORD(WheapDispatchPtr.DriverObject) = 0;
  LOWORD(WheapDispatchPtr.AttachedDevice) = 0;
  WheapDispatchPtr.Timer = (PIO_TIMER)&WheapDispatchPtr.CurrentIrp;
  WheapDispatchPtr.CurrentIrp = (struct _IRP *)&WheapDispatchPtr.CurrentIrp;
  HIDWORD(WheapDispatchPtr.AttachedDevice) = 1;
  WheapOpenPolicyRegistryKey();
  WheapScanRegistryForPolicyChanges();
  if ( !byte_140E0948C )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Type == 4
      && ResultDataSize == 4 )
    {
      *(_BYTE *)off_140E09478 = Data != 0;
    }
  }
  if ( !*(_DWORD *)off_140E094B8 || !*(_DWORD *)off_140E094D8 )
    *(_BYTE *)off_140E09498 = 1;
  do
    WheapPropagatePolicyToHal(v0++);
  while ( v0 < 0x16 );
}
