/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C9CC
 * Callers:
 *     HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x140025020 (HUBDSM_ValidatingAlternateBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x140036368 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptorHeader(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  int v7; // edx
  bool v8; // cf
  __int64 v9; // rdx
  bool v10; // zf
  _OWORD v12[4]; // [rsp+40h] [rbp-69h] BYREF
  _OWORD v13[3]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+7h]
  __int64 v15; // [rsp+B8h] [rbp+Fh]
  __int64 v16; // [rsp+C0h] [rbp+17h]
  int v17; // [rsp+C8h] [rbp+1Fh]
  int v18; // [rsp+CCh] [rbp+23h]
  _OWORD *v19; // [rsp+D0h] [rbp+27h]
  int v20; // [rsp+D8h] [rbp+2Fh]
  __int16 v21; // [rsp+DCh] [rbp+33h]
  int v22; // [rsp+110h] [rbp+67h] BYREF

  v1 = a1 + 1740;
  v3 = 4077;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  v6 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v12[0] + 1) = 0LL;
  *(_QWORD *)&v12[3] = 0LL;
  v7 = *(_DWORD *)(v4 + 4);
  LODWORD(v12[0]) = *(unsigned __int16 *)(a1 + 1998);
  DWORD1(v12[0]) = *(_DWORD *)(a1 + 172);
  *(_WORD *)((char *)v12 + 13) = (v7 & 0x20) != 0;
  DWORD1(v12[1]) = 0;
  HIBYTE(v12[0]) = (v7 & 0x2000) != 0;
  v8 = (v7 & 0x4000) != 0;
  v9 = *(unsigned int *)(a1 + 264);
  v10 = (*(_DWORD *)(a1 + 1652) & 0x200000) == 0;
  BYTE12(v12[0]) = v8;
  *((_QWORD *)&v12[2] + 1) = a1;
  *(_QWORD *)&v12[3] = !v10;
  LODWORD(v12[1]) = *(_DWORD *)(v6 + 220);
  *((_QWORD *)&v12[1] + 1) = HUBMISC_LogDescriptorValidationErrorForDevice;
  *(_QWORD *)&v12[2] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned int)v9 >= 5 )
  {
    v17 = v9;
    v18 = 0;
    v20 = 0;
    v21 = 0;
    v13[0] = v12[0];
    v22 = 0;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v14 = *(_QWORD *)&v12[3];
    v15 = v1;
    v16 = v1 + v9;
    memset(v12, 0, sizeof(v12));
    v19 = v12;
    if ( (unsigned __int8)HUBDESC_InternalValidateBOSDescriptor(
                            v1,
                            (unsigned int)v13,
                            (unsigned int)&v22,
                            0,
                            *(_QWORD *)(v6 + 1432)) )
      return v3;
    *(_DWORD *)(a1 + 2440) = 1073807378;
  }
  else
  {
    *(_DWORD *)(a1 + 2440) = 1073807378;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v6 + 1432),
        2u,
        5u,
        0x3Cu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v9,
        5);
  }
  v3 = 4065;
  if ( (byte_140070D49 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v5,
      &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR_HEADER,
      (const GUID *)(a1 + 1524),
      *(_QWORD *)(a1 + 24));
  return v3;
}
