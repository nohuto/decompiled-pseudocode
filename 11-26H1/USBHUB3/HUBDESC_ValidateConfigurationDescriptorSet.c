/*
 * XREFs of HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40
 * Callers:
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x140006504 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x14001BF04 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002CBE0 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036A6C (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x140036CFC (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037990 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateHighSpeedIsochEndpointCompanionDescriptor @ 0x140039000 (HUBDESC_InternalValidateHighSpeedIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateIADescriptor @ 0x140039364 (HUBDESC_InternalValidateIADescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x140039798 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x140039EA8 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003B28C (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003C5E4 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

char __fastcall HUBDESC_ValidateConfigurationDescriptorSet(
        unsigned __int8 *a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rdi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  void *v12; // rdx
  __int64 v13; // rdx
  int v14; // edx
  char v15; // bl
  unsigned __int8 *v16; // rbx
  char v17; // di
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20[3]; // [rsp+44h] [rbp-BCh] BYREF
  _OWORD v21[17]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = a2;
  v19 = 0;
  v20[0] = 0;
  if ( a5 )
    *a5 = 0;
  memset(v21, 0, 0x108uLL);
  *((_QWORD *)&v21[13] + 1) = &v21[14];
  *(_QWORD *)&v21[6] = (char *)&v21[6] + 8;
  LODWORD(v21[13]) = 256;
  DWORD2(v21[5]) = 256;
  DWORD2(v21[8]) = 256;
  *(_QWORD *)&v21[9] = (char *)&v21[9] + 8;
  RtlClearAllBits((PRTL_BITMAP)&v21[13]);
  RtlClearAllBits((PRTL_BITMAP)((char *)&v21[5] + 8));
  RtlClearAllBits((PRTL_BITMAP)((char *)&v21[8] + 8));
  v9 = *a3;
  *((_QWORD *)&v21[3] + 1) = a1;
  v10 = a3[1];
  *(_QWORD *)&v21[4] = &a1[v5];
  v21[0] = v9;
  v11 = a3[2];
  DWORD2(v21[4]) = v5;
  v21[1] = v10;
  *(_QWORD *)&v10 = *((_QWORD *)a3 + 6);
  v21[2] = v11;
  *(_QWORD *)&v21[3] = v10;
  v12 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(a4, (_DWORD)v12, 5, 135, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    v13 = 60LL;
LABEL_7:
    (*((void (__fastcall **)(_QWORD, __int64))a3 + 3))(*((_QWORD *)a3 + 5), v13);
    goto LABEL_8;
  }
  if ( (unsigned int)v5 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x88u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v5, 9);
    v13 = 56LL;
    goto LABEL_7;
  }
  HUBDESC_InternalValidateConfigDescriptor(a1, (__int64)v21, v20, &v19, a4);
  if ( v19 == 1 )
    goto LABEL_8;
  v16 = a1 + 9;
  v17 = v19 != 2;
  while ( (unsigned __int64)v16 < *(_QWORD *)&v21[4] )
  {
    v20[0] = 0;
    v19 = 0;
    HUBDESC_InternalValidateCommonDescriptorHeader(v16, (__int64)v21, v20, &v19, a4);
    if ( v19 == 1 )
      goto LABEL_8;
    if ( v19 == 2 )
      v17 = LOBYTE(v21[3]) != 0 ? v17 : 0;
    v19 = 0;
    if ( v16[1] == 4 )
    {
      LODWORD(v21[16]) &= ~4u;
      HUBDESC_InternalValidateInterfaceDescriptor(v16, (__int64)v21, v20, &v19, a4);
      if ( v19 == 1 )
        goto LABEL_8;
      if ( v19 == 2 )
        v17 = 0;
    }
    else
    {
      switch ( v16[1] )
      {
        case 5u:
          HUBDESC_InternalValidateEndpointDescriptor(v16, (__int64)v21, v20, &v19, a4);
          break;
        case 0xBu:
          LODWORD(v21[16]) &= 0xFFFFFFF3;
          HUBDESC_InternalValidateIADescriptor(v16, (__int64)v21, v20, &v19, a4);
          break;
        case 0x12u:
          if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
          {
            LODWORD(v21[16]) &= 0xFFFFFFF3;
            goto LABEL_39;
          }
          LODWORD(v21[16]) &= ~0x80u;
          HUBDESC_InternalValidateHighSpeedIsochEndpointCompanionDescriptor(v16, (__int64)v21, v20, &v19, a4);
          break;
        case 0x30u:
          LODWORD(v21[16]) &= ~8u;
          HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(v16, (__int64)v21, v20, &v19, a4, a5);
          break;
        case 0x31u:
          HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(v16, (__int64)v21, v20, &v19, a4);
          break;
        default:
          LODWORD(v21[16]) &= 0xFFFFFFF3;
          if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
            LODWORD(v21[16]) &= ~0x10u;
          goto LABEL_39;
      }
      if ( v19 == 1 )
        goto LABEL_8;
      if ( v19 == 2 )
        v17 = 0;
    }
LABEL_39:
    if ( !*v16 )
      break;
    v16 += v20[0];
  }
  v19 = 0;
  HUBDESC_InternalValidateLastInterface((__int64)v21, &v19, a4);
  if ( v19 != 1 )
  {
    v15 = v17;
    if ( v19 == 2 )
      v15 = 0;
    if ( WORD5(v21[12]) == a1[4] || !HUBDESC_ShouldEnforceWin8ValidationImmutable((__int64)v21) && !BYTE13(v21[0]) )
    {
      if ( !v15 )
        goto LABEL_49;
      return v15;
    }
  }
LABEL_8:
  v15 = 0;
LABEL_49:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(a4, v14, 5, 137, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v15;
}
