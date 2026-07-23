/*
 * XREFs of NtOpenKeyEx @ 0x140936630
 * Callers:
 *     DifNtOpenKeyExWrapper @ 0x140681230 (DifNtOpenKeyExWrapper.c)
 *     RtlInitFunctionalityCache @ 0x140805E18 (RtlInitFunctionalityCache.c)
 *     ExpWatchLicenseInfoWork @ 0x14083D0E0 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x140896C50 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404626A0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned int v7; // r9d
  NTSTATUS v8; // r8d
  char v10; // [rsp+28h] [rbp-58h]
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  __int64 Parameter; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  unsigned int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  POBJECT_ATTRIBUTES v17; // [rsp+60h] [rbp-20h]
  unsigned int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  char PreviousMode; // [rsp+78h] [rbp-8h]
  int v22; // [rsp+79h] [rbp-7h]
  __int16 v23; // [rsp+7Dh] [rbp-3h]
  char v24; // [rsp+7Fh] [rbp-1h]

  v12 = 0LL;
  HIDWORD(Parameter) = 0;
  v16 = 0;
  v11 = 0LL;
  v19 = 0;
  LOWORD(v22) = 0;
  BYTE2(v22) = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v11);
  Parameter = 0LL;
  v16 = 0;
  v19 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v14 = v5;
  v15 = v6;
  v17 = ObjectAttributes;
  v18 = v7;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    KeExpandKernelStackAndCallout(CmOpenKeyCallout, &Parameter, 0x4800uLL);
  }
  else
  {
    v10 = PreviousMode;
    LODWORD(Parameter) = CmOpenKey(v14, v15, v17, v18, v20, v10);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v11);
  return v8;
}
