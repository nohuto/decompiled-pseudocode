/*
 * XREFs of XilCoreDeviceSlot_SetDeviceContext @ 0x140025248
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x140025ADC (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_qdi @ 0x140035988 (WPP_RECORDER_SF_qdi.c)
 *     XilUsbDevice_GetDeviceContextBufferSize @ 0x14003D7E4 (XilUsbDevice_GetDeviceContextBufferSize.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x14005742C (XilCoreUsbDevice_GetDeviceContextBufferLA.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall XilCoreDeviceSlot_SetDeviceContext(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 DeviceContextBufferLA)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v12; // rdx
  size_t DeviceContextBufferSize; // rdx
  __int64 v14; // r12
  int v15; // r8d
  int v16; // r9d
  void *DeviceContextBufferVA; // [rsp+80h] [rbp+8h]
  __int64 v19; // [rsp+88h] [rbp+10h]
  char v20; // [rsp+90h] [rbp+18h]

  v4 = a2 + 616;
  v5 = a3;
  v6 = a2 + 624;
  v20 = *(_BYTE *)(a2 + 665);
  v8 = 0;
  v9 = a2 + 624;
  if ( !v20 )
    v9 = a2 + 616;
  DeviceContextBufferVA = (void *)XilCoreUsbDevice_GetDeviceContextBufferVA(v9);
  DeviceContextBufferSize = (unsigned int)XilUsbDevice_GetDeviceContextBufferSize(v12);
  v19 = a1[7];
  v14 = *(_QWORD *)(a1[3] + 16LL);
  if ( !DeviceContextBufferLA )
  {
    if ( *(_BYTE *)(v4 + 49) )
    {
      if ( !v20 )
        v6 = a2 + 624;
    }
    else
    {
      v6 = v4;
    }
    DeviceContextBufferLA = XilCoreUsbDevice_GetDeviceContextBufferLA(v6, DeviceContextBufferSize);
  }
  memset(DeviceContextBufferVA, 0, DeviceContextBufferSize);
  if ( *(_QWORD *)(v19 + 8 * v5) || *(_QWORD *)(v14 + 8 * v5) )
  {
    v8 = -1073741790;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(a1[1] + 72LL),
        2u,
        0xAu,
        0xCu,
        (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
        v5,
        *(_QWORD *)(v19 + 8 * v5));
  }
  else
  {
    *(_QWORD *)(v19 + 8 * v5) = a2;
    *(_QWORD *)(v14 + 8 * v5) = DeviceContextBufferLA;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdi(*(_QWORD *)(a1[1] + 72LL), 0, v15, v16);
  }
  return v8;
}
