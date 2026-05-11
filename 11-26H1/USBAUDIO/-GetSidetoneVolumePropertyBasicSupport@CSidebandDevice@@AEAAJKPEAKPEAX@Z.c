/*
 * XREFs of ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011E48
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400156B4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016524 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x14000570C (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140011A98 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     PropertyGetDbBasicSupportSideband @ 0x14003261C (PropertyGetDbBasicSupportSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
        CSidebandDevice *this,
        unsigned int a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int *v5; // r12
  unsigned int v6; // r14d
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // di
  int v11; // edx
  int PinFromEpIndex; // ebx
  int v13; // r8d
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v16; // rcx
  unsigned int v18; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v20; // [rsp+58h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v21; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+30h] BYREF

  v22 = -1;
  v18 = -1;
  v5 = a3;
  v19 = -1;
  v6 = a2;
  v20 = -1;
  v8 = *((_QWORD *)this + 4);
  v21 = 0LL;
  v9 = *(_QWORD *)(v8 + 16);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)a3, WPP_GLOBAL_Control->DeviceExtension);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, v6, &v22, &v21);
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                       (struct _KSFILTER_DESCRIPTOR *)(v9 + 128),
                       (const KSTOPOLOGY_CONNECTION *)v22,
                       &v18);
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(
                         v18,
                         (struct _KSFILTER_DESCRIPTOR *)(v9 + 128),
                         (unsigned __int64)&v19,
                         &v20);
      if ( PinFromEpIndex >= 0 )
      {
        if ( v19 == -1 )
        {
          PinFromEpIndex = -1073741275;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v11) = 0;
          }
          LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_52;
        }
        else
        {
          PinFromEpIndex = PropertyGetDbBasicSupportSideband(
                             *(_QWORD *)(v9 + 200) + *(_DWORD *)(v9 + 196) * v19,
                             v5,
                             a4);
          if ( PinFromEpIndex >= 0 )
            goto LABEL_52;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v11) = 0;
          }
          LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_52;
        }
      }
      else
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v11) = 0;
        }
        LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_52;
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
    }
    DeviceExtension = v16->DeviceExtension;
    AttachedDevice = v16->AttachedDevice;
    goto LABEL_19;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v11) = 0;
  }
  LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_19:
    WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v11, v13, (_DWORD)DeviceExtension);
  }
LABEL_52:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v11 || v10 )
  {
    LOBYTE(v13) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v11, v13, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)PinFromEpIndex;
}
