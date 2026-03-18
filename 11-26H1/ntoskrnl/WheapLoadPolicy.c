/*
 * XREFs of WheapLoadPolicy @ 0x140CE85FC
 * Callers:
 *     WheaInitialize @ 0x140CE7AB8 (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     WheapScanRegistryForPolicyChanges @ 0x140849C2C (WheapScanRegistryForPolicyChanges.c)
 *     WheapPropagatePolicyToHal @ 0x140B501A0 (WheapPropagatePolicyToHal.c)
 *     WheapOpenPolicyRegistryKey @ 0x140CE86F0 (WheapOpenPolicyRegistryKey.c)
 */

void WheapLoadPolicy()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v2; // [rsp+50h] [rbp+10h] BYREF
  int v3; // [rsp+58h] [rbp+18h]
  int v4; // [rsp+60h] [rbp+20h]

  v0 = 0;
  CmpCallbackListLock.WaitBlockFill6[106] = 6;
  v3 = 0;
  v2 = 0;
  v4 = 0;
  DestinationString = 0LL;
  *(_DWORD *)&CmpCallbackListLock.WaitBlockFill11[136] = 0;
  *(_WORD *)&CmpCallbackListLock.WaitBlockFill11[104] = 0;
  CmpCallbackListLock.WaitBlock[2].Thread = (struct _KTHREAD *)&CmpCallbackListLock.WaitBlockFill11[112];
  *(_QWORD *)&CmpCallbackListLock.WaitBlockFill11[112] = &CmpCallbackListLock.WaitBlockFill11[112];
  *(_DWORD *)&CmpCallbackListLock.WaitBlockFill11[108] = 1;
  WheapOpenPolicyRegistryKey();
  WheapScanRegistryForPolicyChanges();
  if ( !byte_140E093CC )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
    if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v2) >= 0 && v2 == 4 && v3 == 4 )
      *(_BYTE *)off_140E093B8 = v4 != 0;
  }
  if ( !*(_DWORD *)off_140E093F8 || !*(_DWORD *)off_140E09418 )
    *(_BYTE *)off_140E093D8 = 1;
  do
    WheapPropagatePolicyToHal(v0++);
  while ( v0 < 0x16 );
}
