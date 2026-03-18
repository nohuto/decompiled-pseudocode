/*
 * XREFs of ACPIBuildProcessSpecialSynchronizationList @ 0x1400291A0
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x140028D70 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildProcessGenericComplete @ 0x140029560 (ACPIBuildProcessGenericComplete.c)
 */

__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PVOID *v0; // rdi
  char v1; // bl
  PVOID *v2; // rsi
  int v3; // eax
  PVOID *v4; // rdi
  PVOID *v5; // rsi
  const char *v6; // r8
  const char *v7; // rdx
  PVOID v8; // r10
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v12; // rcx
  const char *v13; // r10
  const char *v14; // r8
  PVOID v15; // r11
  __int64 v16; // rdx
  char v17; // [rsp+80h] [rbp+8h]

  v0 = (PVOID *)AcpiBuildSpecialSynchronizationList;
  v1 = 1;
  v17 = 1;
  if ( AcpiBuildSpecialSynchronizationList == &AcpiBuildSpecialSynchronizationList )
    goto LABEL_7;
  do
  {
    v2 = v0;
    v0 = (PVOID *)*v0;
    v3 = *((_DWORD *)v2 + 20);
    if ( (v3 & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
      || (v3 & 0x20) != 0 && AcpiBuildSynchronizationList != &AcpiBuildSynchronizationList
      || (v3 & 1) != 0 && (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList
      || (v3 & 2) != 0 && (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
      || (v3 & 0x10) != 0 && (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
      || (v3 & 4) != 0 && (__int64 *)AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
    {
      v1 = 0;
    }
    else
    {
      if ( (v3 & 0x80u) != 0 && (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
        v1 = 0;
      if ( (v3 & 0x40) == 0 )
      {
        v12 = v2[5];
        v13 = byte_140075A82;
        v14 = byte_140075A82;
        LOBYTE(v15) = 0;
        if ( v12 )
        {
          v16 = v12[1];
          v15 = v2[5];
          if ( (v16 & 0x200000000000LL) != 0 )
          {
            v13 = (const char *)v12[76];
            if ( (v16 & 0x400000000000LL) != 0 )
              v14 = (const char *)v12[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x45u,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            v3,
            (char)v15,
            v13,
            v14);
        ACPIBuildProcessGenericComplete(v2);
      }
    }
  }
  while ( v0 != &AcpiBuildSpecialSynchronizationList );
  v17 = v1;
  if ( v1 )
  {
LABEL_7:
    v4 = (PVOID *)AcpiBuildSpecialSynchronizationList;
    if ( AcpiBuildSpecialSynchronizationList != &AcpiBuildSpecialSynchronizationList )
    {
      do
      {
        v5 = v4;
        v6 = byte_140075A82;
        v4 = (PVOID *)*v4;
        v7 = byte_140075A82;
        LOBYTE(v8) = 0;
        v9 = v5[5];
        if ( v9 )
        {
          v10 = v9[1];
          v8 = v5[5];
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v6 = (const char *)v9[76];
            if ( (v10 & 0x400000000000LL) != 0 )
              v7 = (const char *)v9[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x46u,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            *((_DWORD *)v5 + 20),
            (char)v8,
            v6,
            v7);
        ACPIBuildProcessGenericComplete(v5);
      }
      while ( v4 != &AcpiBuildSpecialSynchronizationList );
      v1 = v17;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
