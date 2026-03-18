/*
 * XREFs of ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x140220A7C
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1402207D0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1401B8FF0 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x14020AE78 (RIMSetExtendedPointerDeviceProperty.c)
 *     ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x140220F74 (-MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA-AUReportDescriptor@1@AEBUtagRECT@@0@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::CreateRimDevice(VirtualTouchpadProcessor *this, struct VPTPTouchpad *a2)
{
  int v2; // eax
  char *v4; // r14
  int GenericHidDevice; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // rcx
  _BYTE Buffer[20]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v20[8]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v21; // [rsp+C0h] [rbp+40h] BYREF
  int v22; // [rsp+C8h] [rbp+48h]
  char *v23; // [rsp+D0h] [rbp+50h] BYREF

  v2 = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 11);
  v21 = 1282;
  *((_DWORD *)a2 + 48) = v2;
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 13);
  *((_DWORD *)a2 + 49) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 12);
  *((_DWORD *)a2 + 51) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 14);
  VirtualTouchpadProcessor::MakeReportDescriptor(this, Buffer, (char *)a2 + 192, (char *)a2 + 124);
  v4 = *(char **)Buffer;
  if ( !*(_QWORD *)Buffer )
    return 3221225495LL;
  memset(v20, 0, sizeof(v20));
  LOWORD(v20[5]) = *(_WORD *)&Buffer[8];
  v20[4] = *(_QWORD *)Buffer;
  v20[6] = &v21;
  LOWORD(v20[7]) = 2;
  v23 = 0LL;
  GenericHidDevice = RIMIDE_CreateGenericHidDevice((__int64)v20, (__int64)&v23);
  if ( GenericHidDevice >= 0 )
  {
    GenericHidDevice = RawInputManagerDeviceObjectResolveHandle(v23, 3u, 1, (PVOID *)a2 + 4);
    if ( GenericHidDevice >= 0 )
    {
      v10 = *((_QWORD *)a2 + 4);
      *(_DWORD *)&Buffer[4] = *((_DWORD *)a2 + 39);
      *(_QWORD *)&Buffer[8] = 0LL;
      v11 = v10 + 528;
      *(_DWORD *)&Buffer[16] = 0;
      if ( !v10 )
        v11 = 456LL;
      *(_DWORD *)Buffer = 3;
      RIMSetExtendedPointerDeviceProperty(*(_QWORD *)v11, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v12 = *(_QWORD *)v11;
      *(_QWORD *)Buffer = 2LL;
      *(_DWORD *)&Buffer[8] = 0;
      RIMSetExtendedPointerDeviceProperty(v12, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v13 = *(_OWORD *)((char *)a2 + 140);
      v14 = *(_QWORD *)v11;
      *(_DWORD *)Buffer = 4;
      *(_OWORD *)&Buffer[4] = v13;
      RIMSetExtendedPointerDeviceProperty(v14, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v15 = *((_OWORD *)a2 + 10);
      v16 = *(_QWORD *)v11;
      *(_DWORD *)Buffer = 5;
      *(_OWORD *)&Buffer[4] = v15;
      RIMSetExtendedPointerDeviceProperty(v16, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v17 = *((_OWORD *)a2 + 11);
      v18 = *(_QWORD *)v11;
      *(_DWORD *)Buffer = 6;
      *(_OWORD *)&Buffer[4] = v17;
      RIMSetExtendedPointerDeviceProperty(v18, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
    }
  }
  else
  {
    v22 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 432);
  }
  GreDeleteFastMutex(v4, v7, v8, v9);
  return (unsigned int)GenericHidDevice;
}
