/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D978 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1400367B8 (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x140037110 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x140038CA8 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x140039FF4 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x14003A640 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003AC88 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003BCDC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003C990 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        _WORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int *v11; // rdi
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  char v19; // r12
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // r8d
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int8 **v30; // rax
  int v32; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+8h]
  int v34; // [rsp+B0h] [rbp+28h]

  v11 = a4;
  v32 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v11 = &v32;
  }
  if ( a5 )
    *a5 = 0;
  v16 = (__int64)a6;
  if ( a6 )
    *a6 = 0;
  v17 = *a1;
  v18 = *(_DWORD *)(a2 + 72);
  v19 = 1;
  *a3 = v17;
  v20 = (unsigned int)((_DWORD)a1 - *(_DWORD *)(a2 + 56));
  v21 = v18 - v20;
  v34 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v33 = v21;
  if ( (unsigned __int8)v17 >= 3u )
  {
    if ( v21 < 3 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, a6, v20) )
        *v11 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(a11, 2u, 5u, 0xE4u, v24, v23);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
      goto LABEL_65;
    }
LABEL_14:
    if ( a1[2] == 2 )
    {
      HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a8, a11);
      if ( *v11 == 1 )
        goto LABEL_65;
      v30 = *(unsigned __int8 ***)(a2 + 80);
      if ( !*v30 )
      {
        *v30 = a1;
        goto LABEL_65;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(a11, v16, 5, 229, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      }
      v26 = 76LL;
      goto LABEL_36;
    }
    if ( a1[2] == 3 )
    {
      HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        (_DWORD)a1,
        a2,
        (_DWORD)a3,
        (_DWORD)v11,
        (__int64)a5,
        v16,
        a7,
        a11);
      if ( *v11 == 1 )
        goto LABEL_65;
      v29 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v29 + 8) )
      {
        *(_QWORD *)(v29 + 8) = a1;
        goto LABEL_65;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(a11, v16, 5, 230, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      }
      v26 = 75LL;
      goto LABEL_36;
    }
    if ( a1[2] != 4 )
    {
      if ( a1[2] == 5 )
      {
        HUBDESC_InternalValidatePlatformCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a11);
        goto LABEL_65;
      }
      if ( a1[2] == 6 )
      {
        HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a11);
        goto LABEL_65;
      }
      if ( a1[2] == 10 )
      {
        HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a11);
        if ( *v11 == 1 )
          goto LABEL_65;
        v27 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v27 + 16) )
        {
          *(_QWORD *)(v27 + 16) = a1;
          goto LABEL_65;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(a11, v16, 5, 231, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        v26 = 203LL;
      }
      else
      {
        if ( a1[2] != 13 )
        {
          if ( a1[2] == 17 )
            HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(
              (_DWORD)a1,
              a2,
              (_DWORD)a3,
              (_DWORD)v11,
              a9,
              a10,
              a11);
          goto LABEL_65;
        }
        HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, a3, v11, a11);
        if ( *v11 == 1 )
          goto LABEL_65;
        v25 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v25 + 32) )
        {
          *(_QWORD *)(v25 + 32) = a1;
          goto LABEL_65;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(a11, v16, 5, 233, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        v26 = 245LL;
      }
      goto LABEL_36;
    }
    HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, (__int64)a3, v11, a11);
    if ( *v11 == 1 )
      goto LABEL_65;
    v28 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v28 + 24) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(a11, v16, 5, 232, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      }
      v26 = 74LL;
LABEL_36:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v26);
      *v11 = 2;
      goto LABEL_66;
    }
    if ( !*(_BYTE *)(v28 + 41) )
      *(_QWORD *)(v28 + 24) = a1;
LABEL_65:
    if ( !*v11 )
      return v19;
    goto LABEL_66;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 72LL);
  if ( v33 >= 3 )
  {
    *v11 = 2;
    *a3 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a11,
        2u,
        5u,
        0xE2u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v34,
        *a1,
        3,
        3);
    v16 = (__int64)a6;
    goto LABEL_14;
  }
  *v11 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a11, 2u, v22, 0xE3u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v34, *a1, 3);
    goto LABEL_65;
  }
LABEL_66:
  v19 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(a11, v16, 5, 234, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v19;
}
