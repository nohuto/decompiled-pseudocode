/*
 * XREFs of ACPIFanPowerCallback @ 0x1400516E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     AcpiDiagTraceFanPowerStateChange @ 0x140051794 (AcpiDiagTraceFanPowerStateChange.c)
 */

void __fastcall ACPIFanPowerCallback(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // al
  const char *v5; // rcx
  const char *v6; // r10
  __int64 v7; // rdx

  v3 = 0;
  if ( a3 < 0 )
  {
    v5 = byte_140075A82;
    v6 = byte_140075A82;
    if ( a1 )
    {
      v7 = a1[1];
      v3 = (char)a1;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v5 = (const char *)a1[76];
        if ( (v7 & 0x400000000000LL) != 0 )
          v6 = (const char *)a1[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        0xDu,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        a3,
        v3,
        v5,
        v6);
  }
  AcpiDiagTraceFanPowerStateChange(a1);
  ACPIFanLoop((__int64)a1, 2, 0);
}
