/*
 * XREFs of ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140011624
 * Callers:
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016390 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x14000570C (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140011A98 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     PropertyGetBooleanSideband @ 0x140032414 (PropertyGetBooleanSideband.c)
 *     PropertyGetDbLevelSideband @ 0x1400326F0 (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IRP *v2; // r13
  __int64 v4; // r14
  unsigned int v5; // r12d
  CSidebandDevice *v6; // rcx
  char v7; // si
  char v8; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int PinFromEpIndex; // edi
  unsigned int *p_NamedPipeType; // r15
  bool v12; // r8
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v15; // rcx
  _DWORD *UserBuffer; // rbx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // r11d
  __int64 v20; // rbx
  struct _KSPIN_DESCRIPTOR_EX *v22; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  v5 = 0;
  v22 = 0LL;
  v6 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)a2 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v8, WPP_GLOBAL_Control->DeviceExtension);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 20 )
  {
    PinFromEpIndex = -1073741306;
    goto LABEL_62;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(v6, (struct _KSFILTER_DESCRIPTOR *)v4, *p_NamedPipeType) )
  {
    PinFromEpIndex = -1073741811;
    goto LABEL_62;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v23, &v22);
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                       (struct _KSFILTER_DESCRIPTOR *)v4,
                       (const KSTOPOLOGY_CONNECTION *)v23,
                       &v24);
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(v24, (struct _KSFILTER_DESCRIPTOR *)v4, &v25, &v26);
      if ( PinFromEpIndex >= 0 )
      {
        UserBuffer = v2->UserBuffer;
        if ( p_NamedPipeType[2] != -1 )
          v5 = p_NamedPipeType[2];
        memmove(v2->UserBuffer, p_NamedPipeType, 0x14uLL);
        v18 = v25;
        v19 = -1;
        UserBuffer[2] = v5;
        v20 = (__int64)(UserBuffer + 3);
        if ( v18 == -1
          || (PinFromEpIndex = PropertyGetDbLevelSideband(
                                 v17,
                                 *(_DWORD *)(v4 + 72) + *(_DWORD *)(v4 + 68) * v18,
                                 (unsigned int)&v23,
                                 v5,
                                 v20),
              PinFromEpIndex >= 0) )
        {
          if ( v26 == v19
            || (PinFromEpIndex = PropertyGetBooleanSideband(
                                   *(_DWORD *)(v4 + 68) * v26,
                                   *(_DWORD *)(v4 + 72) + *(_DWORD *)(v4 + 68) * v26,
                                   (unsigned int)&v23,
                                   v5,
                                   v20 + 4),
                PinFromEpIndex >= 0) )
          {
            v2->IoStatus.Information = 20LL;
            goto LABEL_62;
          }
          v15 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(a2) = 0;
          }
          v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
        }
        else
        {
          v15 = WPP_GLOBAL_Control;
          LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
        }
      }
      else
      {
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
      }
    }
    else
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
    }
    DeviceExtension = v15->DeviceExtension;
    AttachedDevice = v15->AttachedDevice;
    goto LABEL_23;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(a2) = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_23:
    WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, (_DWORD)a2, v12, (_DWORD)DeviceExtension);
  }
LABEL_62:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)a2 || v7 )
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v7, WPP_GLOBAL_Control->DeviceExtension);
  return (unsigned int)PinFromEpIndex;
}
