/*
 * XREFs of InitAcpiPerfDomain @ 0x140037724
 * Callers:
 *     InitAcpiProcessorDomains @ 0x140037850 (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcpiEval_PSD_TSD @ 0x1400291B4 (AcpiEval_PSD_TSD.c)
 *     Display_xSD @ 0x14002D380 (Display_xSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x140030348 (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // ebx
  unsigned int *v5; // rsi
  int v6; // r9d
  unsigned int *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = AcpiEval_PSD_TSD(a1, 1146310751, &v8);
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
          13,
          (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids);
      }
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v6 = 14;
LABEL_7:
    LOBYTE(v3) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      3,
      v6,
      (__int64)&WPP_0e67bc721295375f142d35ba7261a35b_Traceguids,
      v4);
    goto LABEL_12;
  }
  v5 = v8;
  LOBYTE(v3) = 1;
  v4 = ValidateAcpi_PSD_TSD(v8, v3, *(const wchar_t **)(a1 + 64));
  if ( v4 >= 0 )
  {
    v4 = 0;
    Display_xSD(v5, "_PSD");
    goto LABEL_12;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x200u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 15;
    goto LABEL_7;
  }
LABEL_12:
  *(_QWORD *)(a1 + 472) = v5;
  return (unsigned int)v4;
}
