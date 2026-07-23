/*
 * XREFs of PpmHeteroReadWpsConfigurationFromPlatform @ 0x14060E690
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmHeteroGetWpsHardwareCapabilities @ 0x140516E88 (PpmHeteroGetWpsHardwareCapabilities.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmHeteroReadWpsConfigurationFromPlatform(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  __int64 Prcb; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+44h] [rbp-24h] BYREF
  unsigned __int16 *v9[2]; // [rsp+48h] [rbp-20h] BYREF
  __int16 v10; // [rsp+58h] [rbp-10h]
  int v11; // [rsp+5Ah] [rbp-Eh]
  __int16 v12; // [rsp+5Eh] [rbp-Ah]
  char v13; // [rsp+A0h] [rbp+38h] BYREF
  char v14; // [rsp+A8h] [rbp+40h] BYREF
  char v15; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v16; // [rsp+B8h] [rbp+50h] BYREF

  v14 = 0;
  v11 = 0;
  v12 = 0;
  v16 = 0;
  v13 = 0;
  v7 = 0;
  v8 = 0;
  v15 = 0;
  if ( !PpmHeteroCheckWpsTableUpdated
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(PpmHeteroWpsUpdateInterfaceHandle, a2) )
  {
    return 0;
  }
  for ( i = 0; i < *(_DWORD *)(PpmHeteroCapability + 4); ++i )
  {
    v9[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
    v10 = 0;
    v9[0] = (unsigned __int16 *)&PpmCheckRegistered;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v9) )
    {
      Prcb = KeGetPrcb(v16);
      v4 = *(_QWORD *)(Prcb + 35456);
      PpmHeteroGetWpsHardwareCapabilities(v16, i, &v14, &v13, &v7, &v15, &v8);
      v5 = *(_QWORD *)(Prcb + 35424);
      *(_BYTE *)(v5 + 4LL * i + 6) = v13;
      *(_BYTE *)(v5 + 4LL * i + 7) = v14;
      if ( !i )
      {
        *(_DWORD *)v4 = v7;
        *(_BYTE *)(v4 + 8) = v15;
        if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)(v4 + 4) = v8;
      }
    }
  }
  return 1;
}
