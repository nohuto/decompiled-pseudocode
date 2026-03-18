/*
 * XREFs of ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x14021D0B8
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x14021CE04 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x14019CF94 (RIMIDE_CreateGenericHidDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1401EC504 (RIMSetExtendedPointerDeviceProperty.c)
 *     ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x14021D55C (-MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA-AUReportDescriptor@1@AEBUtagRECT@@0@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::CreateRimDevice(VirtualTouchpadProcessor *this, struct VPTPTouchpad *a2)
{
  int v2; // eax
  char *v4; // r14
  int GenericHidDevice; // esi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  _BYTE Buffer[20]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v17[8]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v18; // [rsp+C0h] [rbp+40h] BYREF
  int v19; // [rsp+C8h] [rbp+48h]
  char *v20; // [rsp+D0h] [rbp+50h] BYREF

  v2 = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 11);
  v18 = 1282;
  *((_DWORD *)a2 + 48) = v2;
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 13);
  *((_DWORD *)a2 + 49) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 12);
  *((_DWORD *)a2 + 51) = *((_DWORD *)this + 21) * *((_DWORD *)a2 + 14);
  VirtualTouchpadProcessor::MakeReportDescriptor(this, Buffer, (char *)a2 + 192, (char *)a2 + 124);
  v4 = *(char **)Buffer;
  if ( !*(_QWORD *)Buffer )
    return 3221225495LL;
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[5]) = *(_WORD *)&Buffer[8];
  v17[4] = *(_QWORD *)Buffer;
  v17[6] = &v18;
  LOWORD(v17[7]) = 2;
  v20 = 0LL;
  GenericHidDevice = RIMIDE_CreateGenericHidDevice((__int64)v17, (__int64)&v20);
  if ( GenericHidDevice >= 0 )
  {
    GenericHidDevice = RawInputManagerDeviceObjectResolveHandle(v20, 3u, 1, (PVOID *)a2 + 4);
    if ( GenericHidDevice >= 0 )
    {
      v7 = *((_QWORD *)a2 + 4);
      *(_DWORD *)&Buffer[4] = *((_DWORD *)a2 + 39);
      *(_QWORD *)&Buffer[8] = 0LL;
      v8 = v7 + 528;
      *(_DWORD *)&Buffer[16] = 0;
      if ( !v7 )
        v8 = 456LL;
      *(_DWORD *)Buffer = 3;
      RIMSetExtendedPointerDeviceProperty(*(_QWORD *)v8, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v9 = *(_QWORD *)v8;
      *(_QWORD *)Buffer = 2LL;
      *(_DWORD *)&Buffer[8] = 0;
      RIMSetExtendedPointerDeviceProperty(v9, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v10 = *(_OWORD *)((char *)a2 + 140);
      v11 = *(_QWORD *)v8;
      *(_DWORD *)Buffer = 4;
      *(_OWORD *)&Buffer[4] = v10;
      RIMSetExtendedPointerDeviceProperty(v11, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v12 = *((_OWORD *)a2 + 10);
      v13 = *(_QWORD *)v8;
      *(_DWORD *)Buffer = 5;
      *(_OWORD *)&Buffer[4] = v12;
      RIMSetExtendedPointerDeviceProperty(v13, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
      v14 = *((_OWORD *)a2 + 11);
      v15 = *(_QWORD *)v8;
      *(_DWORD *)Buffer = 6;
      *(_OWORD *)&Buffer[4] = v14;
      RIMSetExtendedPointerDeviceProperty(v15, (struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *)Buffer);
    }
  }
  else
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 432);
  }
  GreDeleteFastMutex(v4);
  return (unsigned int)GenericHidDevice;
}
