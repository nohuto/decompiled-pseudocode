/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x140037E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Etw_ReportFatalError @ 0x14003D584 (Etw_ReportFatalError.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x140051514 (Crashdump_ProcessSystemPowerAction.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  void *v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rbx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B240);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids;
  v8 = *(_QWORD *)(v4 + 8);
  if ( !*(_DWORD *)(v5 + 16) )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( *(_BYTE *)(v5 + 1) == 3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(v4 + 16),
        (_DWORD)v7,
        4,
        221,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        BYTE1(v9) & 0xF);
      v7 = &WPP_aa3f12a561783a7e2659a97375f632db_Traceguids;
    }
    if ( *(_BYTE *)(v5 + 1) == 2 )
    {
      if ( *(_DWORD *)(v5 + 24) == 1 && (v9 & 0xF0000) == 0x10000 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_(
            *(_QWORD *)(v6 + 16),
            (_DWORD)v7,
            4,
            222,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        }
        goto LABEL_25;
      }
      if ( ((v9 >> 8) & 0xF) == 1 )
      {
        v10 = ((v9 & 0xF0000) == 327680) + 1;
        goto LABEL_20;
      }
      if ( ((v9 >> 8) & 0xF) != 2 && ((v9 >> 8) & 0xF) != 3 && ((v9 >> 8) & 0xF) != 4 )
      {
        if ( ((v9 >> 8) & 0xF) == 5 )
        {
          *(_DWORD *)(v8 + 820) = 5;
        }
        else if ( ((v9 >> 8) & 0xF) == 6 )
        {
          v10 = ((v9 & 0xF000) != 20480) + 5;
LABEL_20:
          *(_DWORD *)(v8 + 820) = v10;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(v6 + 16),
            (_DWORD)v7,
            4,
            223,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            *(_DWORD *)(v8 + 820));
        }
        v11 = *(_QWORD *)(v8 + 824);
        if ( v11 )
          Crashdump_ProcessSystemPowerAction(v11, *(unsigned int *)(v8 + 820));
        goto LABEL_25;
      }
      v10 = 4 - ((v9 & 0xF000) != 20480);
      goto LABEL_20;
    }
  }
LABEL_25:
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 272))(
          WdfDriverGlobals,
          a1,
          a2);
  v15 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 16),
        v13,
        4,
        224,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v12);
    }
    Etw_ReportFatalError(v14, v8, 0, 4147, v15, 0LL);
  }
  return (unsigned int)v15;
}
