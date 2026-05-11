/*
 * XREFs of PinCreate @ 0x140041530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PinAddPinToList @ 0x1400086F8 (PinAddPinToList.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     PinValidateDataFormat @ 0x14003AE98 (PinValidateDataFormat.c)
 *     GetModeFromAttributeList @ 0x14003ED90 (GetModeFromAttributeList.c)
 */

__int64 __fastcall PinCreate(PKSPIN Pin)
{
  const KSPIN_DESCRIPTOR_EX *Descriptor; // rbp
  char v2; // bl
  __int64 v4; // r15
  char v5; // di
  char v6; // dl
  char v7; // r8
  PKSDATAFORMAT ConnectionFormat; // rdx
  int v9; // r8d
  int v10; // ebx
  unsigned int *v11; // rcx
  int ModeFromAttributeList; // eax
  ULONG v13; // esi
  ULONG DataRangesCount; // r12d
  __int64 v15; // r13
  unsigned int v16; // ecx
  bool v17; // sf
  __int64 v18; // rax
  char *Pool2; // rax
  char *v20; // rsi
  bool v21; // al
  GUID v23; // [rsp+50h] [rbp-48h] BYREF
  char v24; // [rsp+A0h] [rbp+8h]
  union $A4FB595EF421231CAF150DDD3288A6D5 *v25; // [rsp+B0h] [rbp+18h]
  PKSDEVICE Device; // [rsp+B8h] [rbp+20h]

  Descriptor = Pin->Descriptor;
  v2 = 0;
  v24 = 0;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, v6, v7, WPP_GLOBAL_Control->DeviceExtension);
  Device = KsGetDevice(Pin);
  if ( !Device )
  {
    v10 = -1073741811;
    goto LABEL_53;
  }
  if ( HIDWORD(Descriptor[1].Dispatch) >= LODWORD(Descriptor[1].Dispatch) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || (LOBYTE(ConnectionFormat) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(ConnectionFormat) = 0;
    }
    if ( (_BYTE)ConnectionFormat || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)ConnectionFormat,
        v9,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v10 = -1073741670;
    goto LABEL_53;
  }
  ConnectionFormat = Pin->ConnectionFormat;
  v25 = ConnectionFormat;
  if ( (ConnectionFormat->Flags & 2) != 0 )
  {
    v11 = (ULONG *)((char *)&ConnectionFormat->FormatSize + ((ConnectionFormat->FormatSize + 7) & 0xFFFFFFF8));
    ModeFromAttributeList = GetModeFromAttributeList((__int64)v11, *v11, &v23);
    v10 = ModeFromAttributeList;
    if ( ModeFromAttributeList >= 0 )
    {
      LODWORD(ConnectionFormat) = Descriptor[1].PinDescriptor.Interfaces;
      v10 = -1073741198;
      if ( !(_DWORD)ConnectionFormat )
        goto LABEL_53;
      v16 = 0;
      v9 = *(_DWORD *)v23.Data4;
      while ( *(_OWORD *)&v23 != *(_OWORD *)(*(_QWORD *)&Descriptor[1].PinDescriptor.MediumsCount + 16LL * v16) )
      {
        if ( ++v16 >= (unsigned int)ConnectionFormat )
          goto LABEL_53;
      }
    }
    else if ( ModeFromAttributeList != -1073741275 )
    {
      goto LABEL_53;
    }
    ConnectionFormat = v25;
    v2 = 0;
  }
  v13 = 0;
  DataRangesCount = Descriptor->PinDescriptor.DataRangesCount;
  if ( !DataRangesCount )
    goto LABEL_52;
  do
  {
    if ( v2 )
      break;
    v15 = (__int64)Descriptor->PinDescriptor.DataRanges[v13];
    v10 = PinValidateDataFormat((__int64)Descriptor, v15, (__int64)ConnectionFormat);
    if ( v10 < 0 )
    {
      if ( v10 != -1073741198 )
        goto LABEL_53;
    }
    else
    {
      v24 = 1;
    }
    ConnectionFormat = v25;
    v17 = v10 < 0;
    v2 = v24;
    v18 = v15;
    if ( v17 )
      v18 = v4;
    v4 = v18;
    v13 += ((*(_DWORD *)(v15 + 4) & 2) != 0) + 1;
  }
  while ( v13 < DataRangesCount );
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 112) >= 0xFFFFFF50 )
    {
      v10 = -1073741811;
    }
    else
    {
      Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(*(_DWORD *)(v4 + 112) + 176), 1096972357LL);
      Pin->Context = Pool2;
      v20 = Pool2;
      if ( Pool2 )
      {
        v10 = KsAddItemToObjectBag(Pin->Bag, Pool2, ExFreePool);
        if ( v10 >= 0 )
        {
          *((_QWORD *)v20 + 18) = v4;
          *((_QWORD *)v20 + 19) = v20 + 176;
          *((_QWORD *)v20 + 9) = v20 + 64;
          *((_QWORD *)v20 + 8) = v20 + 64;
          *((_QWORD *)v20 + 3) = Pin;
          *((_QWORD *)v20 + 2) = Device;
          v20[47] = 0;
          *((_QWORD *)v20 + 4) = Descriptor;
          KeInitializeSpinLock((PKSPIN_LOCK)v20 + 14);
          KeInitializeEvent((PRKEVENT)v20 + 5, NotificationEvent, 0);
          v10 = (**(__int64 (__fastcall ***)(PKSPIN))(*((_QWORD *)v20 + 18) + 128LL))(Pin);
          if ( v10 >= 0 )
          {
            ++HIDWORD(Descriptor[1].Dispatch);
            v21 = !(unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline()
               || Device->DevicePowerState == PowerDeviceD0;
            v20[168] = v21;
            KsPinRegisterPowerCallbacks(Pin, (PFNKSPINPOWER)PinGoToLowPowerState, (PFNKSPINPOWER)PinGoToFullPowerState);
            v10 = PinAddPinToList(Pin);
            if ( v10 >= 0 )
              return (unsigned int)v10;
          }
        }
        else
        {
          ExFreePool(v20);
        }
      }
      else
      {
        v10 = -1073741670;
      }
    }
  }
  else
  {
LABEL_52:
    v10 = -1073741198;
  }
LABEL_53:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v5 = 0;
  }
  if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConnectionFormat) = v5;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)ConnectionFormat,
      v9,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v10;
}
