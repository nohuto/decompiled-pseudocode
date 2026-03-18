/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x14002D8E8
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x140025EE0 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030F10 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x14003A950 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdi
  int v9; // r9d
  int v10; // edx
  __int64 v11; // rcx
  char v12; // r12
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // r14d
  __int64 v16; // r15
  unsigned __int16 *v17; // rdi
  void *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edi
  __int64 Pool2; // rax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+38h] [rbp-40h]
  int v29; // [rsp+40h] [rbp-38h]
  int v30; // [rsp+44h] [rbp-34h]
  __int64 (__fastcall *v31)(_QWORD, _QWORD); // [rsp+48h] [rbp-30h]
  void *v32; // [rsp+50h] [rbp-28h]
  __int64 v33; // [rsp+58h] [rbp-20h]
  _BOOL8 v34; // [rsp+60h] [rbp-18h]
  unsigned int v35; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v36; // [rsp+C8h] [rbp+50h]
  unsigned int v37; // [rsp+D0h] [rbp+58h]
  __int64 v38; // [rsp+D8h] [rbp+60h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  LODWORD(v27) = *(unsigned __int16 *)(a1 + 1998);
  v3 = *(_DWORD *)(a1 + 172);
  v28 = 0LL;
  HIDWORD(v27) = v3;
  v4 = *(_DWORD *)(v2 + 4);
  v34 = 0LL;
  *(_WORD *)((char *)&v28 + 5) = (v4 & 0x20) != 0;
  v30 = 0;
  HIBYTE(v28) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v33 = a1;
  v7 = (*(_DWORD *)(a1 + 1652) & 0x200000) == 0;
  v8 = *(_QWORD *)(v6 + 1432);
  BYTE4(v28) = v5;
  v38 = v8;
  v34 = !v7;
  v29 = *(_DWORD *)(v6 + 220);
  v31 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v32 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v37 = *(_DWORD *)(a1 + 264);
  v35 = 0;
  v12 = HUBDESC_InternalValidateStringDescriptor((int)a1 + 1740, v37, (unsigned int)&v35, v9, v8, (__int64)&v27);
  if ( !v12 )
    goto LABEL_13;
  v13 = *(unsigned __int8 *)(a1 + 1740);
  v14 = 0;
  v35 = v13;
  v36 = v13 - 2;
  v15 = (v13 - 2) >> 1;
  if ( !v15 )
    goto LABEL_15;
  v16 = v38;
  v17 = (unsigned __int16 *)(a1 + 1742);
  v10 = 0;
  do
  {
    v11 = *v17;
    if ( !(_WORD)v11 )
      break;
    if ( (unsigned __int16)(v11 - 32) > 0x5Fu || (_DWORD)v11 == 44 )
    {
      v12 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = *v17;
        WPP_RECORDER_SF_d(v16, 2u, 5u, 0x124u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v26, v27, v28);
      }
      HUBMISC_LogDescriptorValidationErrorForDevice(a1, 132LL);
      v10 = 0;
    }
    ++v14;
    ++v17;
  }
  while ( v14 < v15 );
  v13 = v35;
  if ( v12 )
  {
LABEL_15:
    v18 = *(void **)(a1 + 2160);
    if ( v18 )
      ExFreePoolWithTag(v18, 0x64334855u);
    v19 = v37 + 12;
    if ( !_bittest((const signed __int32 *)(a1 + 1644), 0xBu) )
      v19 = v37;
    v20 = v19;
    Pool2 = ExAllocatePool2(64LL, v19, 1681082453LL);
    *(_QWORD *)(a1 + 2160) = Pool2;
    v11 = Pool2;
    if ( !Pool2 )
      goto LABEL_28;
    v22 = *(_DWORD *)(a1 + 1640);
    *(_DWORD *)(a1 + 2156) = v20;
    if ( (v22 & 2) != 0 )
    {
      if ( *(_WORD *)(a1 + 1998) < 0x300u )
      {
        *(_QWORD *)v11 = *(_QWORD *)L"MSFT20";
        v23 = *(_DWORD *)L"20";
LABEL_25:
        *(_DWORD *)(v11 + 8) = v23;
        v11 += 12LL;
        goto LABEL_26;
      }
    }
    else if ( !_bittest((const signed __int32 *)(a1 + 1644), 0xBu) )
    {
LABEL_26:
      memmove((void *)v11, (const void *)(a1 + 1742), v13 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x40u);
      return 4077;
    }
    *(_QWORD *)v11 = *(_QWORD *)L"MSFT30";
    v23 = *(_DWORD *)L"30";
    goto LABEL_25;
  }
  LODWORD(v8) = v38;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(v8, v10, 5, 293, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  *(_DWORD *)(a1 + 2440) = 1073807384;
LABEL_28:
  v24 = 4065;
  if ( (byte_140070D49 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v11,
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1524),
      *(_QWORD *)(a1 + 24));
  return v24;
}
