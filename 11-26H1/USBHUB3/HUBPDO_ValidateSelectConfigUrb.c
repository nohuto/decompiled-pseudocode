/*
 * XREFs of HUBPDO_ValidateSelectConfigUrb @ 0x14001C108
 * Callers:
 *     HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x140025EA0 (HUBDSM_ValidatingSelectConfigUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014B8C (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x14001BF04 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     WMI_FireNotification @ 0x14008FAC0 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x140090190 (WMI_FireNotificationOld.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectConfigUrb(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdx
  unsigned __int16 *v4; // r12
  __int64 v5; // r13
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int16 *v14; // r9
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // r10
  unsigned __int16 *v18; // rcx
  int v19; // eax
  __int64 result; // rax
  _OWORD v21[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 464);
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  LOWORD(v21[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v21);
  v4 = (unsigned __int16 *)*((_QWORD *)&v21[0] + 1);
  v5 = *(_QWORD *)(*((_QWORD *)&v21[0] + 1) + 24LL);
  if ( !v5 )
  {
    *(_DWORD *)(v1 + 36) = 0;
    return 4077LL;
  }
  v7 = HUBPDO_ValidateConfigurationDescriptor(
         a1,
         *(unsigned __int8 **)(*((_QWORD *)&v21[0] + 1) + 24LL),
         *(unsigned __int16 *)(v5 + 2));
  if ( !v7 )
  {
    v9 = *(_QWORD *)(v1 + 16);
    v10 = 2 * *(unsigned __int8 *)(v5 + 8);
    *(_DWORD *)(v1 + 36) = v10;
    v11 = (unsigned int *)(v9 + 92);
    if ( *(_BYTE *)(v9 + 240) && v10 > *v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          (_DWORD)v11,
          5,
          28,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
      v8 = -1073741670;
      v7 = -1073737728;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 5;
      if ( (unsigned int)Feature_UH3WET__private_IsEnabledDeviceUsageNoInline() )
        WMI_FireNotification(*(_QWORD *)(a1 + 8), 2LL);
      else
        WMI_FireNotificationOld(*(_QWORD *)a1, *(unsigned __int16 *)(v1 + 48), 2LL);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 1464) & 0x800) != 0 )
      {
        v12 = 150;
        if ( *v11 != 100 )
          v12 = 900;
        if ( 8 * (unsigned int)*(unsigned __int8 *)(v5 + 8) > v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 3;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              (_DWORD)v11,
              5,
              29,
              (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
          }
          v13 = *(_QWORD *)(v1 + 24);
          if ( (*(_DWORD *)(v13 + 2444) & 0x1000) != 0 )
            HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetConfigTooMuchPowerRequired", v13 + 512);
        }
      }
      v14 = v4 + 20;
      v15 = (unsigned __int64)v4 + *v4;
      v16 = 0;
      if ( (unsigned __int64)(v4 + 21) < v15 )
      {
        while ( v16 < *(unsigned __int8 *)(v5 + 4) )
        {
          v17 = *v14;
          if ( (unsigned int)v17 < 0x18
            || (v18 = (unsigned __int16 *)((char *)v14 + v17), v14 = v18, (unsigned __int64)v18 > v15) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                3u,
                5u,
                0x1Eu,
                (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
                v17);
            goto LABEL_55;
          }
          ++v16;
          if ( (unsigned __int64)(v18 + 1) >= v15 )
            break;
        }
      }
      v19 = *(unsigned __int8 *)(v5 + 4);
      if ( (_BYTE)v19 )
      {
        if ( v16 == v19 && v16 )
          return 4077LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            3u,
            5u,
            0x20u,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            *(unsigned __int8 *)(v5 + 4),
            v16);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v16,
          5,
          31,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
LABEL_55:
      v7 = -1073737984;
      v8 = -1073741823;
    }
    goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      v6,
      5,
      27,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
  }
  if ( v7 <= -1073737728 )
  {
    switch ( v7 )
    {
      case -1073737728:
        v8 = -1073741670;
        goto LABEL_23;
      case -2147483136:
      case -2147482880:
      case -2147482112:
      case -1073739264:
        v8 = -1073741811;
        goto LABEL_23;
      case -1073738240:
        v8 = -1073741637;
        goto LABEL_23;
    }
    goto LABEL_19;
  }
  switch ( v7 )
  {
    case -1073713152:
      v8 = -1073741810;
      break;
    case -1073676288:
      v8 = -1073741536;
      break;
    case 1:
      v8 = 0;
      break;
    default:
LABEL_19:
      v8 = -1073741823;
      break;
  }
LABEL_23:
  if ( v8 >= 0 )
    return 4077LL;
LABEL_56:
  result = 4065LL;
  *(_DWORD *)(a1 + 1568) = v8;
  *(_DWORD *)(a1 + 1572) = v7;
  return result;
}
