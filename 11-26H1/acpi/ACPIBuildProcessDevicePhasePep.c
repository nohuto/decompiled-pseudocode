/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x1400341B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x140034DD0 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  int v4; // edi
  int v5; // edx
  const char *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rax
  const char *v10; // rdx
  const char *v11; // rcx
  char v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  v2 = byte_140075A82;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 1008) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 760), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = byte_140075A82;
      v11 = byte_140075A82;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(v1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = (__int64)v10;
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v10,
          6,
          29,
          (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
          v4,
          v1,
          v13,
          (__int64)v11);
      }
    }
  }
  v5 = 0;
  v6 = byte_140075A82;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = v5;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      6,
      30,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v4,
      v12,
      (__int64)v2,
      (__int64)v6);
  }
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteGeneric(0LL, (unsigned int)v4, 0LL, a1);
  return (unsigned int)v4;
}
