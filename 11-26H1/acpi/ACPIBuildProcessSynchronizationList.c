/*
 * XREFs of ACPIBuildProcessSynchronizationList @ 0x140029460
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x140028D70 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x140029560 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_sqss @ 0x140040DCC (WPP_RECORDER_SF_sqss.c)
 */

__int64 ACPIBuildProcessSynchronizationList()
{
  PVOID *v0; // rbx
  char v1; // di
  PVOID *v3; // rsi
  _QWORD *v4; // rax
  const char *v5; // r8
  PVOID v6; // r10
  const char *v7; // rcx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-38h]

  v0 = (PVOID *)AcpiBuildSynchronizationList;
  v1 = 1;
  while ( v0 != &AcpiBuildSynchronizationList )
  {
    v3 = v0;
    v0 = (PVOID *)*v0;
    if ( *(PVOID *)v3[10] == v3[10] )
    {
      v4 = v3[5];
      v5 = byte_140075A82;
      LOBYTE(v6) = 0;
      v7 = byte_140075A82;
      if ( v4 )
      {
        v8 = v4[1];
        v6 = v3[5];
        if ( (v8 & 0x200000000000LL) != 0 )
        {
          v5 = (const char *)v4[76];
          if ( (v8 & 0x400000000000LL) != 0 )
            v7 = (const char *)v4[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqss(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          6,
          71,
          v9,
          (__int64)(v3 + 11),
          (char)v6,
          (__int64)v5,
          (__int64)v7);
      ACPIBuildProcessGenericComplete(v3);
    }
    else
    {
      v1 = 0;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
