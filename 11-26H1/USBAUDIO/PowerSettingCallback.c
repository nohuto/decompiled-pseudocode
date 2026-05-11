/*
 * XREFs of PowerSettingCallback @ 0x14000C1D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x14000C480 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdD @ 0x14000C73C (WPP_RECORDER_AND_TRACE_SF_qdD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x14000C918 (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 */

__int64 __fastcall PowerSettingCallback(_OWORD *SettingGuid, int *Value, __int64 ValueLength, PVOID Context)
{
  unsigned int v4; // ebx
  int *v6; // r14
  char v7; // cl
  __int64 v8; // rdi
  char v9; // cl
  char v10; // cl
  int v11; // edx

  v4 = 0;
  v6 = Value;
  if ( *SettingGuid == *(_OWORD *)&GUID_LOW_POWER_EPOCH )
  {
    if ( Context )
    {
      v8 = *((_QWORD *)Context + 2);
      if ( (_DWORD)ValueLength == 4 )
      {
        if ( Value )
        {
          KeWaitForSingleObject((PVOID)(v8 + 1016), Executive, 0, 0, 0LL);
          v11 = *v6;
          *(_DWORD *)(v8 + 1080) = *v6 != 0;
          if ( !*(_DWORD *)(v8 + 716) )
            *(_QWORD *)(v8 + 528) = PoRegisterDeviceForIdleDetection(
                                      *((PDEVICE_OBJECT *)Context + 4),
                                      *(_DWORD *)((v11 != 0 ? 4 : 0) + v8 + 544),
                                      *(_DWORD *)((v11 != 0 ? 4 : 0) + v8 + 552),
                                      (DEVICE_POWER_STATE)*(_DWORD *)(v8 + 540));
          KeReleaseMutex((PRKMUTEX)(v8 + 1016), 0);
        }
        else
        {
          v4 = -1073741811;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (v10 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v10 = 0;
          }
          if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(Value) = v10;
            LOBYTE(ValueLength) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqD(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)Value,
              ValueLength,
              WPP_GLOBAL_Control->DeviceExtension);
          }
        }
      }
      else
      {
        v4 = -1073741811;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (v9 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v9 = 0;
        }
        if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Value) = v9;
          LOBYTE(ValueLength) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdD(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)Value,
            ValueLength,
            WPP_GLOBAL_Control->DeviceExtension);
        }
      }
    }
    else
    {
      v4 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v7 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v7 = 0;
      }
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Value) = v7;
        LOBYTE(ValueLength) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          Value,
          ValueLength,
          WPP_GLOBAL_Control->DeviceExtension);
      }
    }
  }
  else
  {
    LOBYTE(Value) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)Value || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(ValueLength) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)Value,
        ValueLength,
        WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return v4;
}
