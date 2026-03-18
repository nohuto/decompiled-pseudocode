/*
 * XREFs of NtOpenKey @ 0x140974540
 * Callers:
 *     DifNtOpenKeyWrapper @ 0x14067DB20 (DifNtOpenKeyWrapper.c)
 *     IopProtectSystemPartition @ 0x140CBF198 (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404690D0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 */

__int64 NtOpenKey()
{
  unsigned int v0; // r10d
  __int64 v1; // r9
  __int64 v2; // r11
  unsigned int v3; // r8d
  char v5; // [rsp+28h] [rbp-58h]
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 Parameter; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  __int128 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+78h] [rbp-8h]

  v7 = 0LL;
  HIDWORD(Parameter) = 0;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  v13 = 0LL;
  v10 = v0;
  Parameter = 0LL;
  v9 = v1;
  v11 = v2;
  v12 = 0uLL;
  LOBYTE(v13) = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    KeExpandKernelStackAndCallout(CmOpenKeyCallout, &Parameter, 0x4800uLL);
  }
  else
  {
    v5 = v13;
    LODWORD(Parameter) = CmOpenKey(v9, (unsigned int)v10, v11, (unsigned int)v12, *((_QWORD *)&v12 + 1), v5);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v3;
}
