/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckPep @ 0x140027DF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x140034DD0 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckPep(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rbp
  int v3; // edi
  void *v4; // rdx
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 v8; // rax
  const char *v9; // rdx
  const char *v10; // rcx
  __int64 v11; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_140075A82;
  v3 = 0;
  v4 = &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids;
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 4;
    if ( (*(_DWORD *)(v1 + 1008) & 0x2000000) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x2000000uLL);
      v3 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 760), ACPIBuildDiscoverDeviceCompletion, a1);
      if ( v3 < 0 )
      {
        v8 = *(_QWORD *)(v1 + 8);
        v9 = byte_140075A82;
        v10 = byte_140075A82;
        if ( (v8 & 0x200000000000LL) != 0 )
        {
          v9 = *(const char **)(v1 + 608);
          if ( (v8 & 0x400000000000LL) != 0 )
            v10 = *(const char **)(v1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = (__int64)v9;
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v9,
            6,
            59,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            v3,
            v1,
            v11,
            (__int64)v10);
        }
      }
      v4 = &WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids;
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = byte_140075A82;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 608);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      6,
      60,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v3,
      v1,
      (__int64)v2,
      (__int64)v6);
  }
  if ( v3 != 259 )
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v3;
}
