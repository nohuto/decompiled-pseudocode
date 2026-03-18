/*
 * XREFs of NtOpenKeyEx @ 0x140974620
 * Callers:
 *     DifNtOpenKeyExWrapper @ 0x14067D650 (DifNtOpenKeyExWrapper.c)
 *     RtlInitFunctionalityCache @ 0x140800378 (RtlInitFunctionalityCache.c)
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404690D0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  char v9; // [rsp+28h] [rbp-58h]
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  __int64 Parameter; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h]
  unsigned int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  unsigned int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  char PreviousMode; // [rsp+78h] [rbp-8h]
  int v21; // [rsp+79h] [rbp-7h]
  __int16 v22; // [rsp+7Dh] [rbp-3h]
  char v23; // [rsp+7Fh] [rbp-1h]

  v11 = 0LL;
  HIDWORD(Parameter) = 0;
  v15 = 0;
  v10 = 0LL;
  v18 = 0;
  LOWORD(v21) = 0;
  BYTE2(v21) = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v10);
  Parameter = 0LL;
  v15 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v13 = v4;
  v14 = v5;
  v16 = a3;
  v17 = v6;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    KeExpandKernelStackAndCallout(CmOpenKeyCallout, &Parameter, 0x4800uLL);
  }
  else
  {
    v9 = PreviousMode;
    LODWORD(Parameter) = CmOpenKey(v13, v14, v16, v17, v19, v9);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v10);
  return v7;
}
