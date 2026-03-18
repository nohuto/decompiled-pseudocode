/*
 * XREFs of UsbDevice_GetXhciEndpointDequeuePointer @ 0x1400227B0
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x140022380 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1400472BC (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 */

__int64 __fastcall UsbDevice_GetXhciEndpointDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  __int64 v4; // rax
  char v5; // r10
  __int64 v6; // rdx
  __int64 DeviceContextBufferVA; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  v3 = *(_QWORD *)(v2 + 136);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 88) + 8LL);
  if ( *(_BYTE *)(v3 + 80) && (*(_BYTE *)(a1 + 664) && *(_DWORD *)(v4 + 1008) == 2 || *(_DWORD *)(v4 + 1008) == 1) )
  {
    XilDeviceSlot_SendQueryEndpointContextInfoRequest(v3 + 16, a1, a2, 0, (__int64)&v12);
    return v12;
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 665);
    v6 = a1 + 624;
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 88) + 104LL) & 4) != 0 )
    {
      if ( !v5 )
        v6 = a1 + 616;
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v6);
      v9 = (v11 << 6) + 72;
    }
    else
    {
      if ( !v5 )
        v6 = a1 + 616;
      DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v6);
      v9 = 32 * v8 + 40;
    }
    return *(_QWORD *)(v9 + DeviceContextBufferVA);
  }
}
