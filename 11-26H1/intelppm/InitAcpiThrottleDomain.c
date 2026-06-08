/*
 * XREFs of InitAcpiThrottleDomain @ 0x140033B14
 * Callers:
 *     InitAcpiProcessorDomains @ 0x140029B60 (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     AcpiEval_PSD_TSD @ 0x14002ECE4 (AcpiEval_PSD_TSD.c)
 *     Display_xSD @ 0x140031E84 (Display_xSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x140034488 (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiThrottleDomain(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  unsigned int *v5; // rsi
  unsigned __int16 v6; // r9
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = AcpiEval_PSD_TSD(a1, 1146311775, &v9);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 0LL;
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v3,
          2,
          16,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
      }
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v6 = 17;
LABEL_7:
    v8 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v6,
      (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
      v8);
    goto LABEL_12;
  }
  v5 = v9;
  v4 = ValidateAcpi_PSD_TSD(v9, 0LL, *(_QWORD *)(a1 + 64));
  if ( v4 >= 0 )
  {
    v4 = 0;
    Display_xSD(v5, "_TSD");
    goto LABEL_12;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x2000u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 18;
    goto LABEL_7;
  }
LABEL_12:
  *(_QWORD *)(a1 + 520) = v5;
  return (unsigned int)v4;
}
