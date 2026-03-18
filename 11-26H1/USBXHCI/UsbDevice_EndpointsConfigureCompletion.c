/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x14003B660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalErrorEx @ 0x140021FAC (Controller_ReportFatalErrorEx.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dqL @ 0x1400247EC (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     WPP_RECORDER_SF_dqq @ 0x140034648 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqd @ 0x140034850 (WPP_RECORDER_SF_dqd.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140035D98 (UsbDevice_SetConfigureRequestStatus.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x140039014 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x140039948 (UsbDevice_GetEndpointOffloadInformation.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004E410 (UsbDevice_GetDeviceSpeedEx.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int128 *a3)
{
  _QWORD *v3; // rdi
  int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rsi
  _BYTE *v15; // r15
  char v16; // r14
  int v17; // ebp
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rcx
  unsigned int i; // r15d
  __int64 v26; // rax
  char v27; // al
  unsigned int j; // r14d
  __int64 v29; // rax
  unsigned int k; // r15d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned int v35; // r15d
  unsigned int *m; // r14
  __int64 v37; // rcx
  int v38; // edx
  __int64 result; // rax
  unsigned int n; // r14d
  __int64 v41; // rax
  _QWORD *v42; // rax
  unsigned int *v43; // r15
  __int64 v44; // rcx
  unsigned int *v45; // r14
  int DeviceSpeed; // eax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rdx
  unsigned int ii; // ebp
  __int64 v55; // rax
  __int64 *v56; // rax
  char v57; // cl
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // [rsp+20h] [rbp-98h]
  __int64 v63; // [rsp+30h] [rbp-88h]
  char v64; // [rsp+40h] [rbp-78h]
  int v65; // [rsp+44h] [rbp-74h] BYREF
  __int64 v66; // [rsp+48h] [rbp-70h]
  __int64 v67; // [rsp+50h] [rbp-68h]
  __int64 v68; // [rsp+58h] [rbp-60h]
  _OWORD v69[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v70; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD **)(a1 + 48);
  v4 = 0;
  v65 = 0;
  v64 = 0;
  v8 = v3[1];
  v9 = v3[56];
  v66 = v9;
  v10 = *(_QWORD *)(v8 + 88);
  v68 = *(_QWORD *)(v8 + 144);
  memset(v69, 0, sizeof(v69));
  v67 = v10;
  v70 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v69[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v11 = -1;
  }
  else
  {
    v11 = 40;
  }
  LOWORD(v69[0]) = v11;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    v9,
    v69);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v9,
          off_14006AE88);
  v14 = *((_QWORD *)&v69[0] + 1);
  v15 = (_BYTE *)v12;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(*((_QWORD *)&v69[0] + 1) + 24LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(v3[1] + 72LL),
          4u,
          0xCu,
          0x42u,
          (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
          *((unsigned __int8 *)v3 + 143),
          *v3,
          *(_DWORD *)(*((_QWORD *)&v69[0] + 1) + 40LL));
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(v3[1] + 72LL),
        4u,
        0xCu,
        0x43u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *((unsigned __int8 *)v3 + 143),
        *v3,
        *(_DWORD *)(*((_QWORD *)&v69[0] + 1) + 24LL));
LABEL_13:
    v16 = 1;
    v17 = -1073741823;
    goto LABEL_35;
  }
  v18 = *(_BYTE *)(a1 + 60);
  if ( v18 == 1 )
  {
    v19 = *(_QWORD *)(v3[1] + 136LL);
    v20 = *(_QWORD *)(v19 + 88);
    v21 = v19 + 16;
    v22 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)(v21 + 64) && (*((_BYTE *)v3 + 664) && *(_DWORD *)(v22 + 1008) == 2 || *(_DWORD *)(v22 + 1008) == 1) )
    {
      XilDeviceSlot_SendQuerySlotContextInfoRequest((__int64 *)v21, (__int64)v3, 0LL, &v65);
    }
    else
    {
      v24 = (__int64)(v3 + 78);
      if ( !*((_BYTE *)v3 + 665) )
        v24 = (__int64)(v3 + 77);
      XilCoreUsbDevice_GetDeviceContextBufferVA(v24);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqL(*(_QWORD *)(v3[1] + 72LL), 4u, v23, 0x44u, v62);
    *(_DWORD *)(v14 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v15 || v15[1] )
    {
      v17 = -1073741823;
LABEL_34:
      v16 = 0;
LABEL_35:
      for ( i = 0; i < *(_DWORD *)(v14 + 40); ++i )
      {
        v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * i),
                off_14006AFE8);
        Endpoint_Disable(v26, 0LL);
      }
      if ( v16 != 1 )
        goto LABEL_56;
      goto LABEL_54;
    }
    v64 = 1;
LABEL_33:
    v17 = 0;
    goto LABEL_34;
  }
  if ( v18 == 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v3[1] + 72LL),
        4u,
        0xCu,
        0x45u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(unsigned __int8 *)(a1 + 61),
        *v3);
    if ( !*(_DWORD *)(v14 + 24) )
      goto LABEL_33;
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v63 = *v3;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v3[1] + 72LL), 2u, v13, 0x46u, v62);
  }
  v27 = *(_BYTE *)(a1 + 60);
  switch ( v27 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 4u;
      *(_DWORD *)(v14 + 76) = *(_DWORD *)(a1 + 64);
      break;
  }
  if ( !*(_DWORD *)(v14 + 40) )
  {
    v17 = -1073741823;
LABEL_54:
    for ( j = 0; j < *(_DWORD *)(v14 + 24); ++j )
    {
      v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * j),
              off_14006AFE8);
      Endpoint_Disable(v29, 0LL);
    }
LABEL_56:
    if ( v64 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v14 + 24); v3[*(unsigned int *)(v33 + 152) + 22] = v33 )
      {
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * k),
                off_14006AFE8);
        v33 = v31;
        v34 = v3[*(unsigned int *)(v31 + 152) + 22];
        if ( v34 && v34 != v31 )
        {
          LOBYTE(v32) = 1;
          Endpoint_Disable(v34, v32);
          v3[*(unsigned int *)(v33 + 152) + 22] = 0LL;
        }
        ++k;
      }
    }
    if ( v17 >= 0 )
    {
      v35 = 0;
      for ( m = *(unsigned int **)(v14 + 88); v35 < *(_DWORD *)(v14 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation((__int64)v3, v14, (__int64)m);
        ++v35;
      }
    }
    UsbDevice_SetConfigureRequestStatus((__int64)v3, v17);
    if ( v17 < 0 )
      v38 = 2;
    else
      v38 = 1;
    return UsbDevice_QueueConfigureEndpointEvent(v37, v38);
  }
  if ( !*(_DWORD *)(v14 + 24) || *v15 == 1 || v15[1] == 1 )
  {
    UsbDevice_SetConfigureRequestStatus((__int64)v3, -1073741823);
    Controller_HwVerifierBreakIfEnabled(
      v3[1],
      *v3,
      0,
      0x80000LL,
      "Configure Endpoints command failed when only disabling endpoints",
      (__int128 *)(a1 + 24),
      a3);
    return Controller_ReportFatalErrorEx(v3[1], 2u, 4119, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15[1] = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v63) = HIDWORD(v66);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(v3[1] + 72LL), *((unsigned __int8 *)v3 + 143), v13, 0x47u, v62);
  }
  for ( n = 0; n < *(_DWORD *)(v14 + 24); ++n )
  {
    v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * n),
            off_14006AFE8);
    Endpoint_Disable(v41, 0LL);
  }
  v42 = v3 + 82;
  if ( !*((_BYTE *)v3 + 665) )
    v42 = v3 + 81;
  if ( *v42 )
    v43 = *(unsigned int **)(*v42 + 16LL);
  else
    v43 = 0LL;
  if ( (*(_DWORD *)(v67 + 104) & 4) != 0 )
  {
    memset(v43, 0, 0x840uLL);
    v45 = v43 + 16;
  }
  else
  {
    memset(v43, 0, 0x420uLL);
    v45 = v43 + 8;
  }
  v43[1] |= 1u;
  if ( *((_BYTE *)v3 + 144) )
  {
    v44 = *v45;
    LODWORD(v44) = v44 | 0x4000000;
    *v45 = v44;
    *((_BYTE *)v45 + 7) = *((_BYTE *)v3 + 148);
    if ( *((_DWORD *)v3 + 5) == 2 )
    {
      if ( *((_DWORD *)v3 + 38) > 1u )
        *v45 = v44 | 0x2000000;
      v44 = v45[2] ^ (v45[2] ^ (*((_DWORD *)v3 + 39) << 16)) & 0x30000;
      v45[2] = v44;
    }
  }
  if ( (*(_QWORD *)(v3[1] + 744LL) & 0x20000000LL) != 0 )
  {
    Feature_UISCSF__private_ReportDeviceUsage(v44);
    DeviceSpeed = UsbDevice_GetDeviceSpeedEx(v3);
    if ( DeviceSpeed )
    {
      v48 = DeviceSpeed - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          v50 = v49 - 1;
          if ( v50 )
          {
            v51 = v50 - 1;
            if ( v51 )
            {
              result = (unsigned int)(v51 - 1);
              if ( (_DWORD)result )
              {
                if ( (_DWORD)result != 1 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v63) = UsbDevice_GetDeviceSpeedEx(v47);
                    return WPP_RECORDER_SF_DD(
                             *(_QWORD *)(v3[1] + 72LL),
                             2u,
                             0xCu,
                             0x48u,
                             (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                             *((unsigned __int8 *)v3 + 143),
                             v63);
                  }
                  return result;
                }
                v52 = *v45 & 0xFF0FFFFF | 0x700000;
              }
              else
              {
                v52 = *v45 & 0xFF0FFFFF | 0x600000;
              }
            }
            else
            {
              v52 = *v45 & 0xFF0FFFFF | 0x500000;
            }
          }
          else
          {
            v52 = *v45 & 0xFF0FFFFF | 0x400000;
          }
        }
        else
        {
          v52 = *v45 & 0xFF0FFFFF | 0x300000;
        }
      }
      else
      {
        v52 = *v45 & 0xFF0FFFFF | 0x100000;
      }
    }
    else
    {
      v52 = *v45 & 0xFF0FFFFF | 0x200000;
    }
    *v45 = v52;
  }
  if ( _bittest64((const signed __int64 *)(v3[1] + 736LL), 0x3Du) )
  {
    if ( !*((_BYTE *)v3 + 144) )
    {
      v53 = v3[3];
      if ( v53 )
      {
        if ( *((int *)v3 + 5) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                           WdfDriverGlobals,
                           v53,
                           off_14006B128)
                       + 152) > 1u )
        {
          *v45 |= 0x2000000u;
        }
      }
    }
  }
  for ( ii = 0; ii < *(_DWORD *)(v14 + 40); *v43 |= 1 << *(_DWORD *)(v55 + 152) )
    v55 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * ii++),
            off_14006AFE8);
  memset(v3 + 58, 0, 0x60uLL);
  v3[64] = v3;
  v3[63] = UsbDevice_EndpointsConfigureCompletion;
  *((_DWORD *)v3 + 125) = *((_DWORD *)v3 + 125) & 0xFFFF01FF | 0x3000;
  *((_BYTE *)v3 + 503) = *((_BYTE *)v3 + 143);
  v56 = v3 + 82;
  v57 = *((_BYTE *)v3 + 665);
  if ( !v57 )
    v56 = v3 + 81;
  v58 = *v56;
  if ( v58 )
    v59 = *(_QWORD *)(v58 + 24);
  else
    v59 = 0LL;
  v3[61] = v59;
  v60 = v3 + 82;
  v3[67] = v43;
  if ( !v57 )
    v60 = v3 + 81;
  if ( *v60 )
    v4 = *(_DWORD *)(*v60 + 44LL);
  v61 = v68;
  *((_DWORD *)v3 + 136) = v4;
  *((_DWORD *)v3 + 137) = 1;
  v3[69] = v3;
  return Command_SendCommand(v61, (__int64)(v3 + 58));
}
