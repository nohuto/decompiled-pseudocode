/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x140025A60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x14003EB54 (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // r9
  int v5; // edx
  bool v6; // cf
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  v4 = *(_QWORD *)(v1 + 8);
  v13 = v1;
  v12 = 0LL;
  v5 = *(_DWORD *)(v3 + 4);
  LODWORD(v11) = *(unsigned __int16 *)(v1 + 1998);
  HIDWORD(v11) = *(_DWORD *)(v1 + 172);
  v14 = 0LL;
  *(_WORD *)((char *)&v12 + 5) = (v5 & 0x20) != 0;
  HIBYTE(v12) = (v5 & 0x2000) != 0;
  v6 = (v5 & 0x4000) != 0;
  v7 = *(unsigned int *)(v1 + 264);
  v8 = (*(_DWORD *)(v1 + 1652) & 0x200000) == 0;
  BYTE4(v12) = v6;
  if ( !(unsigned __int8)HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader(
                           v1 + 1740,
                           v7,
                           &v11,
                           *(_QWORD *)(v4 + 1432),
                           v11,
                           v12,
                           *(unsigned int *)(v4 + 220),
                           HUBMISC_LogDescriptorValidationErrorForDevice,
                           &HUBMISC_LogDescriptorValidationWarningForDevice,
                           v1,
                           !v8) )
  {
    *(_DWORD *)(v1 + 2440) = 1073807382;
    v2 = 4065;
    if ( (byte_140070D49 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v9,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR_HEADER,
        (const GUID *)(v1 + 1524),
        *(_QWORD *)(v1 + 24));
  }
  return v2;
}
