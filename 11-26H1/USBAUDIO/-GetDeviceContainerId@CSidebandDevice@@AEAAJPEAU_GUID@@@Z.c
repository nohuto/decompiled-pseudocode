/*
 * XREFs of ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1400103D0
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400156B4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140014D38 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceContainerId(CSidebandDevice *this, struct _GUID *a2)
{
  __int64 Pool2; // rax
  int v5; // edx
  unsigned __int64 v6; // r8
  void *v7; // rsi
  NTSTATUS DeviceProperty; // edi
  bool v9; // bl
  char v10; // bl
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  char *v13; // rdi
  __int16 v14; // ax
  _WORD *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v20; // rcx
  int ResultLength; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  ULONG v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-0000-000000000000}");
  Pool2 = ExAllocatePool2(64LL, DestinationString.MaximumLength, 878868549LL);
  v7 = (void *)Pool2;
  if ( Pool2 )
  {
    v10 = 1;
    v11 = (unsigned __int64)DestinationString.MaximumLength >> 1;
    if ( v11 )
    {
      v12 = Pool2;
      v6 = 2147483646 - v11;
      v13 = (char *)L"{00000000-0000-0000-0000-000000000000}" - Pool2;
      do
      {
        if ( !(v6 + v11) )
          break;
        v14 = *(_WORD *)&v13[v12];
        if ( !v14 )
          break;
        *(_WORD *)v12 = v14;
        v12 += 2LL;
        --v11;
      }
      while ( v11 );
      v15 = (_WORD *)(v12 - 2);
      if ( v11 )
        v15 = (_WORD *)v12;
      v16 = -(__int64)v11;
      DeviceProperty = v16 == 0 ? 0x80000005 : 0;
      *v15 = 0;
      v17 = DeviceProperty;
      if ( v16 )
      {
        DeviceProperty = IoGetDeviceProperty(
                           *(PDEVICE_OBJECT *)(*((_QWORD *)this + 4) + 32LL),
                           DevicePropertyContainerID,
                           DestinationString.MaximumLength,
                           v7,
                           &v24);
        if ( DeviceProperty < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v10 = 0;
          }
          LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_50;
          DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
          AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
          goto LABEL_49;
        }
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v7);
        DeviceProperty = RtlGUIDFromString(&DestinationString, a2);
        if ( DeviceProperty >= 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v10 = 0;
          }
          if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = v10;
            LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_s(
              WPP_GLOBAL_Control->AttachedDevice,
              v17,
              v6,
              WPP_GLOBAL_Control->DeviceExtension,
              ResultLength);
          }
          goto LABEL_50;
        }
        v20 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_50:
          ExFreePool(v7);
          return (unsigned int)DeviceProperty;
        }
LABEL_48:
        DeviceExtension = v20->DeviceExtension;
        AttachedDevice = v20->AttachedDevice;
LABEL_49:
        LOBYTE(v17) = v10;
        WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v17, v6, (_DWORD)DeviceExtension);
        goto LABEL_50;
      }
    }
    else
    {
      DeviceProperty = -1073741811;
      v17 = -1073741811;
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    goto LABEL_48;
  }
  DeviceProperty = -1073741664;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = v9;
    LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, v6, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)DeviceProperty;
}
