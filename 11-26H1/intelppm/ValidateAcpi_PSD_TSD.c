/*
 * XREFs of ValidateAcpi_PSD_TSD @ 0x140034488
 * Callers:
 *     InitAcpiPerfDomain @ 0x1400339E8 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140033B14 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_SsD @ 0x14000D4E0 (WPP_RECORDER_SF_SsD.c)
 */

__int64 __fastcall ValidateAcpi_PSD_TSD(_DWORD *a1, __int64 a2, const wchar_t *a3)
{
  unsigned int v3; // r9d
  char v4; // r11
  unsigned __int16 v5; // r9
  const char *v6; // rax
  int v8; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v4 = a2;
  if ( *a1 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 29;
      goto LABEL_17;
    }
    return (unsigned int)-1073741823;
  }
  if ( a1[1] != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 30;
LABEL_17:
      v6 = "_PSD";
      if ( !v4 )
        v6 = "_TSD";
      WPP_RECORDER_SF_SsD((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, v5, v8, a3, v6);
      return (unsigned int)-1073741823;
    }
    return (unsigned int)-1073741823;
  }
  a2 = (unsigned int)a1[4];
  if ( (_DWORD)a2 != 1 && (unsigned int)(a2 - 252) > 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 31;
      goto LABEL_17;
    }
    return (unsigned int)-1073741823;
  }
  a2 = (unsigned int)a1[5];
  if ( (unsigned int)a2 > 0x800 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 32;
      goto LABEL_17;
    }
    return (unsigned int)-1073741823;
  }
  if ( !(_DWORD)a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 33;
      goto LABEL_17;
    }
    return (unsigned int)-1073741823;
  }
  return v3;
}
