/*
 * XREFs of HUBDSM_ValidatingMSOSDescriptor @ 0x1400257D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  _UNKNOWN **v2; // rcx
  unsigned int v3; // edi
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 264) == 18 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_14006D2C0);
    if ( RtlCompareMemory((const void *)(v1 + 2090), L"MSFT100", 0xEuLL) == 14 )
    {
      v3 = 4077;
      *(_BYTE *)(v1 + 2060) = *(_BYTE *)(v1 + 2104);
      return v3;
    }
  }
  else
  {
    v2 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_DWORD *)(v1 + 264);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x5Bu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v5);
    }
  }
  v3 = 4065;
  if ( (byte_140070D49 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)v2,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_DESCRIPTOR,
      (const GUID *)(v1 + 1524),
      *(_QWORD *)(v1 + 24));
  return v3;
}
