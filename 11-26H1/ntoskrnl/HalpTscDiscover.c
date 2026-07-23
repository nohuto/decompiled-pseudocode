/*
 * XREFs of HalpTscDiscover @ 0x14059B918
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     HalpTscGetAttributes @ 0x14059BA64 (HalpTscGetAttributes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpTscDiscover()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int128 v8; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+58h] [rbp-31h]
  __int64 (__fastcall *v12)(__int64, __int64); // [rsp+60h] [rbp-29h]
  int *v13; // [rsp+A8h] [rbp+1Fh]
  int v14; // [rsp+B0h] [rbp+27h]
  int v15; // [rsp+B4h] [rbp+2Bh]
  __int64 v16; // [rsp+B8h] [rbp+2Fh]
  int v17; // [rsp+C4h] [rbp+3Bh]
  int v18; // [rsp+D8h] [rbp+4Fh]
  char v19; // [rsp+F0h] [rbp+67h] BYREF
  int v20; // [rsp+F8h] [rbp+6Fh] BYREF

  v19 = 0;
  v20 = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  memset_0(v10, 0, 0x90uLL);
  v10[1] = 144;
  v0 = 7;
  v13 = &v20;
  v10[0] = 1;
  v15 = 64;
  v16 = 0LL;
  v18 = 5;
  v14 = 4;
  if ( (int)HalSocRequestApi(v1, 0LL, 6, 16LL, &v8) >= 0 )
  {
    v4 = guard_dispatch_icall_no_overrides(v3, v2);
    v5 = 0LL;
    if ( v4 )
      v5 = v4;
    v16 = v5;
  }
  if ( (int)HalpTscGetAttributes(
              (char *)&IommuInterfaceStateChangeCallbackPushLock.Teb + 1,
              &IommuInterfaceStateChangeCallbackPushLock.Teb,
              &v19) < 0 )
  {
    v0 = 24583;
LABEL_11:
    v17 = v0;
    goto LABEL_12;
  }
  if ( !BYTE1(IommuInterfaceStateChangeCallbackPushLock.Teb) )
    v0 = 8199;
  v17 = v0;
  if ( !LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Teb) )
  {
    v0 |= 0x4000u;
    goto LABEL_11;
  }
LABEL_12:
  v11 = HalpTscInitialize;
  if ( v19 )
  {
    v6 = HalpTscQueryCounterOrdered;
    v17 = v0 | 0x1000000;
  }
  else
  {
    v6 = (__int64 (__fastcall *)(__int64, __int64))HalpTscQueryCounter;
  }
  v12 = v6;
  RtlInitUnicodeString(&DestinationString, L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
  HalpTimerRegister((__int64)v10, &DestinationString);
  return 0LL;
}
