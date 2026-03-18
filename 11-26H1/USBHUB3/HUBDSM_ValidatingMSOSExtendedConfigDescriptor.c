/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1400258C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x14003E9A8 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // edx
  bool v5; // cf
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  _BOOL8 v17; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  v16 = v1;
  v12 = 0LL;
  v17 = 0LL;
  v4 = *(_DWORD *)(v3 + 4);
  LODWORD(v11) = *(unsigned __int16 *)(v1 + 1998);
  HIDWORD(v11) = *(_DWORD *)(v1 + 172);
  *(_WORD *)((char *)&v12 + 5) = (v4 & 0x20) != 0;
  HIDWORD(v13) = 0;
  HIBYTE(v12) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(unsigned int *)(v1 + 264);
  v7 = (*(_DWORD *)(v1 + 1652) & 0x200000) == 0;
  BYTE4(v12) = v5;
  v8 = *(_QWORD *)(v1 + 8);
  v17 = !v7;
  LODWORD(v13) = *(_DWORD *)(v8 + 220);
  v14 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v15 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (_DWORD)v6 == *(_DWORD *)(v1 + 1740) )
  {
    if ( (unsigned __int8)HUBDESC_ValidateMSOSExtendedConfigDescriptor(
                            *(_QWORD *)(v1 + 2112),
                            v6,
                            &v11,
                            *(_QWORD *)(v8 + 1432)) )
      return v2;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 1432),
      2u,
      5u,
      0x5Cu,
      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
      v6,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v2 = 4065;
  if ( (byte_140070D49 & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v8,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR,
      (const GUID *)(v1 + 1524),
      *(_QWORD *)(v1 + 24));
  v9 = *(void **)(v1 + 2112);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x64334855u);
    *(_QWORD *)(v1 + 2112) = 0LL;
  }
  return v2;
}
