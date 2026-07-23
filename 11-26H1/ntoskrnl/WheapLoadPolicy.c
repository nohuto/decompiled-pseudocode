/*
 * XREFs of WheapLoadPolicy @ 0x140CEE99C
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     WheapScanRegistryForPolicyChanges @ 0x14084FF3C (WheapScanRegistryForPolicyChanges.c)
 *     WheapPropagatePolicyToHal @ 0x140B52A30 (WheapPropagatePolicyToHal.c)
 *     WheapOpenPolicyRegistryKey @ 0x140CEEA90 (WheapOpenPolicyRegistryKey.c)
 */

void WheapLoadPolicy()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+50h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  v0 = 0;
  CmpContextListLock.WaitBlockFill6[98] = 6;
  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  *(_DWORD *)&CmpContextListLock.WaitBlockFill11[120] = 0;
  *(_WORD *)&CmpContextListLock.WaitBlockFill11[96] = 0;
  *(_QWORD *)&CmpContextListLock.WaitBlockFill11[112] = &CmpContextListLock.WaitBlock[2].WaitListEntry.Blink;
  CmpContextListLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)&CmpContextListLock.WaitBlockFill11[104];
  *(_DWORD *)&CmpContextListLock.WaitBlockFill11[100] = 1;
  WheapOpenPolicyRegistryKey();
  WheapScanRegistryForPolicyChanges();
  if ( !byte_140E093CC )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Type == 4
      && ResultDataSize == 4 )
    {
      *(_BYTE *)off_140E093B8 = Data != 0;
    }
  }
  if ( !*(_DWORD *)off_140E093F8 || !*(_DWORD *)off_140E09418 )
    *(_BYTE *)off_140E093D8 = 1;
  do
    WheapPropagatePolicyToHal(v0++);
  while ( v0 < 0x16 );
}
