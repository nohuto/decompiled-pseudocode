/*
 * XREFs of HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1400253B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ValidatingDeviceQualifierDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // eax
  _UNKNOWN **v4; // rcx
  unsigned int v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_14006D2C0);
  v3 = *(_DWORD *)(v1 + 264);
  if ( v3 >= 0xA )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 1640), 0x2000u);
  }
  else
  {
    *(_DWORD *)(v1 + 2440) = 1073807379;
    v4 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x57u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v6);
    }
    v2 = 4065;
    if ( (byte_140070D49 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (__int64)v4,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_QUALIFIER_DESCRIPTOR,
        (const GUID *)(v1 + 1524),
        *(_QWORD *)(v1 + 24));
  }
  return v2;
}
