/*
 * XREFs of XilDeviceSlot_QueryEndpointContextInfo @ 0x1400241F4
 * Callers:
 *     UsbDevice_GetEndpointState @ 0x14002276C (UsbDevice_GetEndpointState.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1400472BC (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 */

__int64 __fastcall XilDeviceSlot_QueryEndpointContextInfo(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r11
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 DeviceContextBufferVA; // rdx
  _DWORD *v15; // r9
  __int64 result; // rax
  __int64 v17; // rdx

  v5 = *(_QWORD *)(a1 + 88);
  v6 = a1 + 16;
  v9 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v6 + 64) && (*(_BYTE *)(a2 + 664) && *(_DWORD *)(v9 + 1008) == 2 || *(_DWORD *)(v9 + 1008) == 1) )
    return XilDeviceSlot_SendQueryEndpointContextInfoRequest(v6, a2, a3, a4, (__int64)a5);
  v10 = a2 + 616;
  v11 = *(_BYTE *)(a2 + 665);
  v12 = a2 + 624;
  v13 = (unsigned int)(a3 - 1);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 88LL) + 104LL) & 4) != 0 )
  {
    if ( !v11 )
      v12 = v10;
    result = XilCoreUsbDevice_GetDeviceContextBufferVA(v12);
    DeviceContextBufferVA = (v13 + 1) << 6;
  }
  else
  {
    if ( !v11 )
      v12 = v10;
    DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v12);
    result = 32 * (v13 + 1);
  }
  v17 = result + DeviceContextBufferVA;
  if ( v15 )
  {
    result = *(_DWORD *)v17 & 7;
    *v15 = result;
  }
  if ( a5 )
  {
    result = *(_QWORD *)(v17 + 8);
    *a5 = result;
  }
  return result;
}
