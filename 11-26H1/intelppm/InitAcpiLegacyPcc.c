/*
 * XREFs of InitAcpiLegacyPcc @ 0x140027008
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x140003AC0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     AcquirePccInterface @ 0x140027238 (AcquirePccInterface.c)
 *     ValidatePccEntry @ 0x140027358 (ValidatePccEntry.c)
 *     AcpiEval_PCCP @ 0x140027428 (AcpiEval_PCCP.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(_QWORD *a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  int v6; // edx

  v2 = AcquirePccInterface();
  v4 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      a1[26],
      0LL);
    v5 = AcpiEval_PCCP(a1, a1 + 73);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            2,
            12,
            (__int64)&WPP_e6038f47665637abe9823b9f40c69dee_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_e6038f47665637abe9823b9f40c69dee_Traceguids,
          v5);
      }
      goto LABEL_19;
    }
    v4 = ValidatePccEntry(a1[73], a1[8]);
    if ( v4 >= 0 )
    {
      if ( (unsigned int)(dword_1400197A4 - 1) > 0x26 )
      {
LABEL_19:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
        return (unsigned int)v4;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0xEu,
          (__int64)&WPP_e6038f47665637abe9823b9f40c69dee_Traceguids,
          dword_1400197A4,
          40);
      v4 = -1073741823;
    }
    a1[35] &= ~0x80000000uLL;
    goto LABEL_19;
  }
  if ( v2 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        2,
        10,
        (__int64)&WPP_e6038f47665637abe9823b9f40c69dee_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_e6038f47665637abe9823b9f40c69dee_Traceguids,
      v2);
  }
  return (unsigned int)v4;
}
