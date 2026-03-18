/*
 * XREFs of Controller_LogDiagnosticsOnD0Exit @ 0x140041F28
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_qLLL @ 0x140022A88 (WPP_RECORDER_SF_qLLL.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x14003CB38 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Feature_UPD0__private_IsEnabledDeviceUsageNoInline @ 0x140044E48 (Feature_UPD0__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqqhq_EtwWriteTransfer @ 0x1400450D8 (McTemplateK0pqqhq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLDD @ 0x140045CE4 (WPP_RECORDER_SF_qLDD.c)
 *     WPP_RECORDER_SF_qLss @ 0x140045E00 (WPP_RECORDER_SF_qLss.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Controller_LogDiagnosticsOnD0Exit(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  int v6; // edi
  char PreProcessedSystemPowerAction; // al
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // r8
  __int64 v11; // rdx
  __m128i *p_si128; // rax
  unsigned int v13; // eax
  int v14; // r8d
  int v15; // r9d
  char v16; // dl
  unsigned int v17; // edi
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // esi
  const char *v22; // r9
  int v24; // [rsp+20h] [rbp-68h]
  __m128i si128; // [rsp+50h] [rbp-38h] BYREF
  int v26; // [rsp+60h] [rbp-28h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v26 = 33570;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B240);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v5);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqhq_EtwWriteTransfer(
      *(unsigned __int8 *)(v5 + 868),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START_V1,
      v9,
      *(_QWORD *)(v5 + 8),
      a2,
      v6,
      *(_BYTE *)(v5 + 868),
      PreProcessedSystemPowerAction);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(*(_QWORD *)(v5 + 72), v8, 4u, 0x56u, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( !v6 )
  {
    v10 = *(unsigned int *)(v5 + 820);
    if ( (_DWORD)v10 != 7 )
    {
      if ( (_DWORD)v10 )
      {
        if ( *(_DWORD *)(v5 + 644) == 1 )
          v11 = *(unsigned __int16 *)(v5 + 652) | (*(unsigned __int16 *)(v5 + 648) << 16);
        else
          v11 = 0LL;
        MicrosoftTelemetryAssertTriggeredArgsMsgKM(
          "USBXHCI.SYS",
          v11,
          v10,
          "D0 Exit - WDF and Pre Processed System Power Action are different");
      }
    }
  }
  LODWORD(p_si128) = Feature_UPD0__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)p_si128 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 352))(WdfDriverGlobals, a1);
    v16 = 0;
    v17 = v13;
    v18 = 0;
    p_si128 = &si128;
    while ( v17 != p_si128->m128i_i32[0] )
    {
      ++v18;
      p_si128 = (__m128i *)((char *)p_si128 + 4);
      if ( v18 >= 5 )
        goto LABEL_18;
    }
    v16 = 1;
LABEL_18:
    if ( a2 == 5 && !v16 )
    {
      v19 = *(_DWORD *)(v5 + 644);
      v20 = 0LL;
      if ( v19 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLDD(
            *(_QWORD *)(v5 + 72),
            0,
            v14,
            v15,
            v24,
            a1,
            v17,
            *(_WORD *)(v5 + 648),
            *(_WORD *)(v5 + 652));
        v20 = *(unsigned __int16 *)(v5 + 652) | (*(unsigned __int16 *)(v5 + 648) << 16);
      }
      else if ( v19 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLss(*(_QWORD *)(v5 + 72), 0, v14, v15, v24, a1, v17, v5 + 704, v5 + 709);
        v20 = 0LL;
      }
      v21 = *(_DWORD *)(v4 + 28) & 0x10;
      v22 = "D0 Exit - Exit to D3Final from a non-success state for external XHCI";
      if ( !v21 )
        v22 = "D0 Exit - Exit to D3Final from a non-success state for internal XHCI";
      LOBYTE(p_si128) = MicrosoftTelemetryAssertTriggeredArgsMsgKM("USBXHCI.SYS", v20, v17, v22);
      if ( (v17 == 823 || v17 == 33592) && !v21 )
        LOBYTE(p_si128) = Controller_HwVerifierBreakIfEnabled(
                            v5,
                            0,
                            0,
                            0x8000000LL,
                            "D0 Exit - Exit to D3Final due to failure to connect interrupts for internal XHCI",
                            0LL,
                            0LL);
    }
  }
  return (char)p_si128;
}
