/*
 * XREFs of ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400156B4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x14000570C (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1400103D0 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x140010758 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1400112A8 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011E48 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140012230 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     _scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____::_2_::scope_exit::_scope_exit @ 0x140014E90 (_scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____--_2_--scope_exit--_scope_exit.c)
 *     __security_check_cookie @ 0x14001C6A0 (__security_check_cookie.c)
 *     memset @ 0x14001CAC0 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointDescriptor(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v3; // bl
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _KSFILTER_DESCRIPTOR *v7; // rsi
  unsigned int v8; // edi
  PDEVICE_OBJECT v9; // rcx
  bool v10; // r8
  unsigned int NamedPipeType; // r12d
  int v12; // r8d
  PDEVICE_OBJECT v13; // r10
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  int v16; // esi
  unsigned int v17; // esi
  ULONG Length; // eax
  char *UserBuffer; // r15
  int DeviceContainerId; // eax
  struct _KSPIN_DESCRIPTOR_EX *v21; // rcx
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v22; // xmm0
  unsigned int VolumePropertyBasicSupport; // eax
  PDEVICE_OBJECT v24; // rcx
  unsigned int MutePropertyBasicSupport; // eax
  unsigned int SidetoneVolumePropertyBasicSupport; // eax
  int PinFromEpIndex; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-35h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-31h] BYREF
  struct _IRP *v31; // [rsp+60h] [rbp-29h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v32; // [rsp+68h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v34[2]; // [rsp+80h] [rbp-9h] BYREF
  char v35; // [rsp+90h] [rbp+7h]
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v36; // [rsp+98h] [rbp+Fh] BYREF

  v31 = a2;
  PinFromEpIndex = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 1;
  a2->IoStatus.Information = 0LL;
  v5 = *((_QWORD *)this + 4);
  v32 = 0LL;
  v35 = 1;
  v6 = *(_QWORD *)(v5 + 16);
  v29 = -1;
  v30 = -1;
  v34[0] = &v31;
  DestinationString = 0LL;
  v34[1] = &PinFromEpIndex;
  v7 = (struct _KSFILTER_DESCRIPTOR *)(v6 + 128);
  v36 = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                          this,
                          (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                          NamedPipeType) )
    {
      v8 = -1073741811;
      PinFromEpIndex = -1073741811;
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v3 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      goto LABEL_91;
    }
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v6 + 24));
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v29, &v32);
    v8 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(v7, (const KSTOPOLOGY_CONNECTION *)v29, &v30);
      v8 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v32 = (struct _KSPIN_DESCRIPTOR_EX *)((char *)v7->PinDescriptors + v7->PinDescriptorSize * v30);
        PinFromEpIndex = CSidebandDevice::GetEndpointCapabilities(this, v29, &v36);
        v8 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          v16 = 96;
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2228327 )
            v16 = 88;
          v17 = DestinationString.MaximumLength + v16;
          Length = CurrentStackLocation->Parameters.Read.Length;
          if ( !Length )
          {
            v8 = -1073741789;
            v31->IoStatus.Information = v17;
            PinFromEpIndex = -1073741789;
            goto LABEL_91;
          }
          if ( Length != v17 )
          {
            v8 = -1073741811;
            PinFromEpIndex = -1073741811;
            v9 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              v3 = 0;
            }
            v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              goto LABEL_8;
            goto LABEL_91;
          }
          UserBuffer = (char *)v31->UserBuffer;
          memset(UserBuffer + 4, 0, 0x54uLL);
          *(_DWORD *)UserBuffer = v17;
          DeviceContainerId = CSidebandDevice::GetDeviceContainerId(this, (struct _GUID *)(UserBuffer + 4));
          LODWORD(a2) = 0;
          PinFromEpIndex = DeviceContainerId;
          v8 = DeviceContainerId;
          if ( DeviceContainerId >= 0 )
          {
            v21 = v32;
            *(GUID *)(UserBuffer + 20) = *v32->PinDescriptor.Category;
            *((_DWORD *)UserBuffer + 9) = v21->PinDescriptor.DataFlow;
            v22 = v36;
            *((_WORD *)UserBuffer + 28) = 0;
            *((_QWORD *)UserBuffer + 8) = UserBuffer + 88;
            *(_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *)(UserBuffer + 40) = v22;
            *((_WORD *)UserBuffer + 29) = DestinationString.MaximumLength;
            RtlCopyUnicodeString((PUNICODE_STRING)(UserBuffer + 56), &DestinationString);
            VolumePropertyBasicSupport = CSidebandDevice::GetVolumePropertyBasicSupport(
                                           this,
                                           NamedPipeType,
                                           (unsigned int *)UserBuffer + 18,
                                           0LL);
            PinFromEpIndex = VolumePropertyBasicSupport;
            v8 = VolumePropertyBasicSupport;
            if ( VolumePropertyBasicSupport == -1073741789 || VolumePropertyBasicSupport == -1073741275 )
            {
              PinFromEpIndex = 0;
              MutePropertyBasicSupport = CSidebandDevice::GetMutePropertyBasicSupport(
                                           this,
                                           NamedPipeType,
                                           (unsigned int *)UserBuffer + 20,
                                           0LL);
              PinFromEpIndex = MutePropertyBasicSupport;
              v8 = MutePropertyBasicSupport;
              if ( MutePropertyBasicSupport == -1073741789 || MutePropertyBasicSupport == -1073741275 )
              {
                PinFromEpIndex = 0;
                SidetoneVolumePropertyBasicSupport = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                                                       this,
                                                       NamedPipeType,
                                                       (unsigned int *)UserBuffer + 19,
                                                       0LL);
                PinFromEpIndex = SidetoneVolumePropertyBasicSupport;
                v8 = SidetoneVolumePropertyBasicSupport;
                if ( SidetoneVolumePropertyBasicSupport == -1073741789
                  || SidetoneVolumePropertyBasicSupport == -1073741275 )
                {
                  PinFromEpIndex = 0;
                  v31->IoStatus.Information = v17;
                  goto LABEL_90;
                }
                v24 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                  || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                {
                  v3 = 0;
                }
                LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  goto LABEL_91;
              }
              else
              {
                v24 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                  || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                {
                  v3 = 0;
                }
                LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  goto LABEL_91;
              }
            }
            else
            {
              v24 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
              {
                v3 = 0;
              }
              LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_91;
            }
            DeviceExtension = v24->DeviceExtension;
            AttachedDevice = v24->AttachedDevice;
LABEL_25:
            LOBYTE(a2) = v3;
            WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, (_DWORD)a2, v12, (_DWORD)DeviceExtension);
            goto LABEL_90;
          }
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v3 = 0;
          }
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_91;
        }
        else
        {
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v3 = 0;
          }
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_91;
        }
      }
      else
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v3 = 0;
        }
        LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
      }
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v3 = 0;
      }
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v3 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_91;
    }
    DeviceExtension = v13->DeviceExtension;
    AttachedDevice = v13->AttachedDevice;
    goto LABEL_25;
  }
  v8 = -1073741306;
  PinFromEpIndex = -1073741306;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v3 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_8:
    LOBYTE(a2) = v3;
    WPP_RECORDER_AND_TRACE_SF_dd(v9->AttachedDevice, (_DWORD)a2, v10, v9->DeviceExtension);
LABEL_90:
    v8 = PinFromEpIndex;
  }
LABEL_91:
  scope_exit__lambda_669f6e3777d049d3571e84c335d39a8d____::_2_::scope_exit::_scope_exit((__int64)v34);
  return v8;
}
