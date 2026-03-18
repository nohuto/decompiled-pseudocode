/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x140036438
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140035FF0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048FE0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14001D7AC (UsbDevice_InitializeEndpointContext.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004E410 (UsbDevice_GetDeviceSpeedEx.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64),
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rax
  _DWORD *v16; // rbp
  char v17; // al
  char *v18; // rsi
  int v19; // ecx
  __int64 v20; // rdx
  int DeviceSpeed; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v29; // eax
  int v30; // r14d
  unsigned int *v31; // r8
  unsigned int i; // r8d
  int v33; // eax
  __int64 v34; // r8
  char v35; // dl
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+40h] [rbp-38h]
  __int64 v43; // [rsp+80h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v9 = v6[11];
  v43 = v9;
  v42 = v6[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      v6[9],
      4u,
      0xCu,
      0x5Au,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 143),
      *(_DWORD *)(a2 + 152));
  v10 = 0;
  v11 = a1 + 624;
  if ( !*(_BYTE *)(a1 + 665) )
    v11 = a1 + 616;
  v12 = *(_QWORD *)(v11 + 32);
  if ( v12 )
  {
    v13 = *(void **)(v12 + 16);
    v14 = *(_DWORD *)(v12 + 44);
  }
  else
  {
    v14 = 0;
    v13 = 0LL;
  }
  memset(v13, 0, v14);
  v15 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
  if ( v15 )
    v16 = *(_DWORD **)(v15 + 16);
  else
    v16 = 0LL;
  v17 = -(*(_DWORD *)(v9 + 104) & 4);
  v16[1] |= 1u;
  v18 = (char *)v16 + (v17 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 144) )
  {
    v19 = *(_DWORD *)v18 | 0x4000000;
    *(_DWORD *)v18 = v19;
    v18[7] = *(_BYTE *)(a1 + 148);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 152) > 1u )
        *(_DWORD *)v18 = v19 | 0x2000000;
      *((_DWORD *)v18 + 2) ^= (*((_DWORD *)v18 + 2) ^ (*(_DWORD *)(a1 + 156) << 16)) & 0x30000;
    }
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 736LL), 0x3Du) )
  {
    if ( !*(_BYTE *)(a1 + 144) )
    {
      v20 = *(_QWORD *)(a1 + 24);
      if ( v20 )
      {
        if ( *(int *)(a1 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                           WdfDriverGlobals,
                           v20,
                           off_14006B128)
                       + 152) > 1u )
        {
          *(_DWORD *)v18 |= 0x2000000u;
        }
      }
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x20000000LL) != 0 )
  {
    Feature_UISCSF__private_ReportDeviceUsage();
    DeviceSpeed = UsbDevice_GetDeviceSpeedEx(a1);
    if ( DeviceSpeed )
    {
      v23 = DeviceSpeed - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 != 1 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v41) = UsbDevice_GetDeviceSpeedEx(v22);
                    LODWORD(v40) = *(unsigned __int8 *)(a1 + 143);
                    WPP_RECORDER_SF_DD(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                      2u,
                      0xCu,
                      0x5Bu,
                      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                      v40,
                      v41);
                  }
                  *(_QWORD *)(a1 + 560) = 0LL;
                  *(_QWORD *)(a1 + 568) = 0LL;
                  return a3(a4, 3221225485LL);
                }
                v29 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x700000;
              }
              else
              {
                v29 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x600000;
              }
            }
            else
            {
              v29 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x500000;
            }
          }
          else
          {
            v29 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x400000;
          }
        }
        else
        {
          v29 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x300000;
        }
      }
      else
      {
        v29 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x100000;
      }
    }
    else
    {
      v29 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x200000;
    }
    *(_DWORD *)v18 = v29;
  }
  v30 = *(_DWORD *)(a2 + 152);
  v31 = &v16[16 * (v30 - 1) + 32];
  if ( (*(_DWORD *)(v43 + 104) & 4) == 0 )
    v31 = &v16[8 * (v30 - 1) + 16];
  UsbDevice_InitializeEndpointContext(a1, a2, v31);
  for ( i = 0; i < 0x20; ++i )
  {
    v33 = *(_DWORD *)(a1 + 160);
    if ( _bittest(&v33, i) )
      *(_DWORD *)v18 = (i << 27) | *(_DWORD *)v18 & 0x7FFFFFF;
  }
  v16[1] |= 1 << v30;
  *v16 |= 1 << v30;
  memset((void *)(a1 + 464), 0, 0x60uLL);
  *(_QWORD *)(a1 + 512) = a1;
  *(_QWORD *)(a1 + 504) = UsbDevice_ConfigureEndpointCompletion;
  v34 = a1 + 648;
  *(_DWORD *)(a1 + 500) = *(_DWORD *)(a1 + 500) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 503) = *(_BYTE *)(a1 + 143);
  v35 = *(_BYTE *)(a1 + 665);
  v36 = *(_QWORD *)((v35 != 0 ? 656LL : 648LL) + a1);
  if ( v36 )
    v37 = *(_QWORD *)(v36 + 24);
  else
    v37 = 0LL;
  *(_QWORD *)(a1 + 488) = v37;
  if ( v35 )
    v34 = a1 + 656;
  if ( *(_QWORD *)v34 )
    v38 = *(_QWORD *)(*(_QWORD *)v34 + 16LL);
  else
    v38 = 0LL;
  *(_QWORD *)(a1 + 536) = v38;
  v39 = *(_QWORD *)((v35 != 0 ? 656LL : 648LL) + a1);
  if ( v39 )
    v10 = *(_DWORD *)(v39 + 44);
  *(_DWORD *)(a1 + 544) = v10;
  *(_DWORD *)(a1 + 548) = 1;
  *(_QWORD *)(a1 + 552) = a1;
  *(_QWORD *)(a1 + 560) = a3;
  *(_QWORD *)(a1 + 568) = a4;
  return Command_SendCommand(v42, a1 + 464);
}
