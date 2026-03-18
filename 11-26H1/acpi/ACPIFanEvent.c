/*
 * XREFs of ACPIFanEvent @ 0x140017CD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIFanEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  const char *v5; // rcx
  __int64 v6; // rbx
  const char *v7; // r8
  __int64 v8; // rax
  char v9; // [rsp+30h] [rbp-28h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LODWORD(v4) = 0;
  v5 = byte_140075A82;
  v6 = DeviceExtension;
  v7 = byte_140075A82;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v4 + 608);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v4;
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      16,
      14,
      (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      a2,
      v9,
      (__int64)v5,
      (__int64)v7);
  }
  if ( a2 == 128 )
    ACPIFanLoop(v6, 1, 0);
}
