/*
 * XREFs of HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x14002D710
 * Callers:
 *     HUBDSM_ValidatingLanguageSpecificProductIdString @ 0x1400254D0 (HUBDSM_ValidatingLanguageSpecificProductIdString.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x14003A950 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheProductIdStringDescriptor(__int64 a1)
{
  int v1; // ebx
  unsigned __int8 *v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  bool v8; // zf
  int v9; // r9d
  __int64 v10; // rcx
  size_t v11; // rbx
  void *Pool2; // rax
  int v13; // edx
  _WORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+34h] [rbp-3Ch]
  __int64 v17; // [rsp+38h] [rbp-38h]
  int v18; // [rsp+40h] [rbp-30h]
  int v19; // [rsp+44h] [rbp-2Ch]
  __int64 (__fastcall *v20)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-18h]
  _BOOL8 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+A0h] [rbp+30h] BYREF

  v1 = *(_DWORD *)(a1 + 264);
  v2 = (unsigned __int8 *)(a1 + 1740);
  v4 = 4077;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  v6 = *(_QWORD *)(a1 + 8);
  v22 = a1;
  v17 = 0LL;
  v7 = *(_DWORD *)(v5 + 4);
  v15[0] = *(_WORD *)(a1 + 1998);
  v16 = *(_DWORD *)(a1 + 172);
  v23 = 0LL;
  *(_WORD *)((char *)&v17 + 5) = (v7 & 0x20) != 0;
  v15[1] = 0;
  HIBYTE(v17) = (v7 & 0x2000) != 0;
  v19 = 0;
  v8 = (*(_DWORD *)(a1 + 1652) & 0x200000) == 0;
  BYTE4(v17) = (v7 & 0x4000) != 0;
  v24 = 0;
  v23 = !v8;
  v18 = *(_DWORD *)(v6 + 220);
  v20 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v21 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (unsigned __int8)HUBDESC_InternalValidateStringDescriptor(
                          (_DWORD)v2,
                          v1,
                          (unsigned int)&v24,
                          v9,
                          *(_QWORD *)(v6 + 1432),
                          (__int64)v15) )
  {
    v11 = *v2;
    Pool2 = (void *)ExAllocatePool2(64LL, v11, 1681082453LL);
    *(_QWORD *)(a1 + 2040) = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v2, v11);
      return v4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v13,
        5,
        93,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 2440) = 1073807383;
  }
  v4 = 4065;
  if ( (byte_140070D49 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_INVALID_PRODUCT_ID_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1524),
      *(_QWORD *)(a1 + 24));
  return v4;
}
