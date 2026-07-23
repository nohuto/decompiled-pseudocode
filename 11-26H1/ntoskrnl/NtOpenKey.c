/*
 * XREFs of NtOpenKey @ 0x140936550
 * Callers:
 *     DifNtOpenKeyWrapper @ 0x140681700 (DifNtOpenKeyWrapper.c)
 *     IopProtectSystemPartition @ 0x140CC5268 (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404626A0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // r11
  NTSTATUS v6; // r8d
  char v8; // [rsp+28h] [rbp-58h]
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  __int64 Parameter; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  __int128 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+78h] [rbp-8h]

  v10 = 0LL;
  HIDWORD(Parameter) = 0;
  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  v16 = 0LL;
  v13 = v3;
  Parameter = 0LL;
  v12 = v4;
  v14 = v5;
  v15 = 0uLL;
  LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    KeExpandKernelStackAndCallout(CmOpenKeyCallout, &Parameter, 0x4800uLL);
  }
  else
  {
    v8 = v16;
    LODWORD(Parameter) = CmOpenKey(v12, (unsigned int)v13, v14, (unsigned int)v15, *((_QWORD *)&v15 + 1), v8);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v9);
  return v6;
}
