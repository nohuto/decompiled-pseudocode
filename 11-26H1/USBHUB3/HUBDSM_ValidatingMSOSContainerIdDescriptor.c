/*
 * XREFs of HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1400254F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030F10 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rdx
  int v6; // edx
  __int64 v7; // rcx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_14006D2C0);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
  if ( *(_DWORD *)(v1 + 264) == 24 )
  {
    if ( *(_QWORD *)(v1 + 1748) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(v1 + 1756) != *(_QWORD *)GUID_NULL.Data4 )
    {
      *(_OWORD *)(v1 + 2072) = *(_OWORD *)(v1 + 1748);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1640), 8u);
      return v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(v4, v3, 5, 279, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    v5 = 114LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 24;
      v9 = *(_DWORD *)(v1 + 264);
      WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x116u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v9, v10);
    }
    v5 = 117LL;
  }
  HUBMISC_LogDescriptorValidationErrorForDevice(v1, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(v4, v6, 5, 280, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  v2 = 4065;
  if ( (byte_140070D49 & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v7,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR,
      (const GUID *)(v1 + 1524),
      *(_QWORD *)(v1 + 24));
  return v2;
}
