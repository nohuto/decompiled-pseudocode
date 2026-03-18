/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x1400048E4
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x1400048C0 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     XilEndpoint_AcquireBuffer @ 0x140004BCC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x140005A68 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_InitializeTransferRing @ 0x14001E72C (Endpoint_InitializeTransferRing.c)
 *     TR_GetDequeuePointer @ 0x14001E818 (TR_GetDequeuePointer.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigure(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  char v8; // cl
  __int64 DeviceContextBufferVA; // rax
  int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rsi
  __int64 DequeuePointer; // rax
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[36];
  v3 = *(_QWORD *)(*a1 + 144LL);
  v4 = *(_QWORD *)(*a1 + 88LL);
  v20 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v2,
         off_14006AE88);
  v6 = a1[2];
  v7 = v5;
  v8 = *(_BYTE *)(v6 + 666);
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( v8 )
    {
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v6 + (*(_BYTE *)(v6 + 665) != 0 ? 624LL : 616LL));
      v11 = DeviceContextBufferVA + (((unsigned int)(v10 - 1) + 1LL) << 6);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = 2112LL;
  }
  else
  {
    if ( v8 )
    {
      v18 = XilCoreUsbDevice_GetDeviceContextBufferVA(v6 + (*(_BYTE *)(v6 + 665) != 0 ? 624LL : 616LL));
      v11 = v18 + 32 * ((unsigned int)(v19 - 1) + 1LL);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = 1056LL;
  }
  v13 = XilEndpoint_AcquireBuffer(a1, v12, a1, 846491717LL);
  *(_QWORD *)(v7 + 8) = v13;
  if ( v13 )
  {
    if ( *((_BYTE *)a1 + 37) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_DD(
          a1[10],
          v14,
          13,
          52,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          *(_BYTE *)(a1[2] + 143LL),
          *((_DWORD *)a1 + 38));
      }
      v15 = v7 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        1,
        (int)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v7,
        *(_QWORD *)(v7 + 8),
        v11,
        0LL,
        (void *)(v7 + 16));
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_DD(
          a1[10],
          v14,
          13,
          53,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          *(_BYTE *)(a1[2] + 143LL),
          *((_DWORD *)a1 + 38));
      }
      v15 = v7 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        2,
        (int)Endpoint_OnResetEndpointConfigureCompletion,
        v7,
        *(_QWORD *)(v7 + 8),
        v11,
        (__int64)&v20,
        (void *)(v7 + 16));
      Endpoint_InitializeTransferRing(a1, 0LL);
      if ( *((_BYTE *)a1 + 37) )
        DequeuePointer = *(_QWORD *)(*(_QWORD *)(a1[18] + 32LL) + 24LL);
      else
        DequeuePointer = TR_GetDequeuePointer(a1[11]);
      *(_QWORD *)(v20 + 8) = DequeuePointer;
    }
    return Command_SendCommand(v3, v15);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_DD(
        a1[10],
        v14,
        13,
        51,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(a1[2] + 143LL),
        *((_DWORD *)a1 + 38));
    }
    *((_DWORD *)a1 + 74) = -1073741670;
    return ESM_AddEsmEvent(a1, 102LL);
  }
}
