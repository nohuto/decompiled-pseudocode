/*
 * XREFs of UsbDevice_SendConfigureEndpointCommand @ 0x14003BF8C
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003D300 (UsbDevice_HandleAddAndDropEndpointsState.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140035D98 (UsbDevice_SetConfigureRequestStatus.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004E410 (UsbDevice_GetDeviceSpeedEx.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_SendConfigureEndpointCommand(__int64 a1, int a2)
{
  __int64 v3; // r15
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  int DeviceSpeed; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  __int64 (__fastcall *v19)(__int64, int, __int128 *); // rax
  __int64 v20; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  char v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-28h]

  v3 = a1 + 464;
  memset((void *)(a1 + 464), 0, 0x60uLL);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 16);
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v8 + 744) & 0x20000000LL) == 0 )
    goto LABEL_22;
  v9 = *(unsigned int *)(*(_QWORD *)(v8 + 88) + 104LL);
  LOBYTE(v9) = -(v9 & 4);
  v10 = (unsigned int *)(v7 + ((_BYTE)v9 != 0 ? 64LL : 32LL));
  Feature_UISCSF__private_ReportDeviceUsage(v9);
  DeviceSpeed = UsbDevice_GetDeviceSpeedEx(a1);
  if ( !DeviceSpeed )
  {
    v18 = *v10 & 0xFF0FFFFF | 0x200000;
    goto LABEL_21;
  }
  v13 = DeviceSpeed - 1;
  if ( !v13 )
  {
    v18 = *v10 & 0xFF0FFFFF | 0x100000;
    goto LABEL_21;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v18 = *v10 & 0xFF0FFFFF | 0x300000;
    goto LABEL_21;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v18 = *v10 & 0xFF0FFFFF | 0x400000;
    goto LABEL_21;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v18 = *v10 & 0xFF0FFFFF | 0x500000;
    goto LABEL_21;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v18 = *v10 & 0xFF0FFFFF | 0x600000;
    goto LABEL_21;
  }
  if ( v17 == 1 )
  {
    v18 = *v10 & 0xFF0FFFFF | 0x700000;
LABEL_21:
    *v10 = v18;
    goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = UsbDevice_GetDeviceSpeedEx(v12);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xCu,
      0x3Du,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 143),
      v28);
  }
LABEL_22:
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 != 1 )
    {
      UsbDevice_SetConfigureRequestStatus(a1, -1073741595);
      return UsbDevice_QueueConfigureEndpointEvent(v20, 2);
    }
    v19 = (__int64 (__fastcall *)(__int64, int, __int128 *))UsbDevice_DropEndpointsCompletion;
  }
  else
  {
    v19 = UsbDevice_EndpointsConfigureCompletion;
  }
  *(_QWORD *)(a1 + 504) = v19;
  v22 = a1 + 648;
  v23 = *(_DWORD *)(a1 + 500) & 0xFFFF31FF;
  *(_QWORD *)(a1 + 512) = a1;
  *(_DWORD *)(a1 + 500) = v23 | 0x3000;
  *(_BYTE *)(a1 + 503) = *(_BYTE *)(a1 + 143);
  v24 = *(_BYTE *)(a1 + 665);
  v25 = *(_QWORD *)((v24 != 0 ? 8 : 0) + a1 + 648);
  if ( v25 )
    v26 = *(_QWORD *)(v25 + 24);
  else
    v26 = 0LL;
  *(_QWORD *)(a1 + 488) = v26;
  *(_QWORD *)(a1 + 536) = v7;
  if ( v24 )
    v22 = a1 + 656;
  if ( *(_QWORD *)v22 )
    v5 = *(_DWORD *)(*(_QWORD *)v22 + 44LL);
  v27 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 544) = v5;
  *(_DWORD *)(a1 + 548) = 1;
  *(_QWORD *)(a1 + 552) = a1;
  return Command_SendCommand(*(_QWORD *)(v27 + 144), v3);
}
