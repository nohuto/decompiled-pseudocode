/*
 * XREFs of HUBMISC_LogResetTimeout @ 0x140031180
 * Callers:
 *     HUBDSM_LoggingResetTimeoutInResettingFor30 @ 0x140023290 (HUBDSM_LoggingResetTimeoutInResettingFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 */

_UNKNOWN **__fastcall HUBMISC_LogResetTimeout(__int64 a1)
{
  _UNKNOWN **result; // rax
  _BYTE *v3; // rdx

  if ( (byte_140070D49 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      a1,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RESET_TIMEOUT,
      (const GUID *)(a1 + 1524),
      *(_QWORD *)(a1 + 24));
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                            2,
                            5,
                            119,
                            (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
  v3 = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 2440) = 1073807362;
  if ( (v3[184] & 1) != 0 )
  {
    result = *(_UNKNOWN ***)v3;
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 2608LL) & 0x40) != 0 )
      return (_UNKNOWN **)HUBMISC_VerifierDbgBreak("HubHwVerifierPortResetTimeout", v3 + 272);
  }
  return result;
}
