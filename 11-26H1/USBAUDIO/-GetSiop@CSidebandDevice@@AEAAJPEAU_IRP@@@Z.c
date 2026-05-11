/*
 * XREFs of ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007F18
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006ED8 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140007DE8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     _scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____::_2_::scope_exit::_scope_exit @ 0x1400088D4 (_scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____--_2_--scope_exit--_scope_exit.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _lambda_9623573e77ecd9e21901cd71a385e3bc_::operator() @ 0x1400151D4 (_lambda_9623573e77ecd9e21901cd71a385e3bc_--operator().c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CSidebandDevice::GetSiop(CSidebandDevice *this, struct _IRP *a2, ULONG *a3)
{
  __int64 v3; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v6; // rdi
  char v7; // bl
  char v8; // al
  bool v9; // zf
  unsigned int v10; // edi
  PDEVICE_OBJECT v11; // rcx
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  unsigned int *p_NamedPipeType; // rsi
  __int64 v15; // rax
  CSidebandDevice *v16; // rcx
  int PinFromEpIndex; // eax
  int v18; // edx
  PDEVICE_OBJECT v19; // r10
  ULONG *v20; // r8
  _QWORD *Context; // r8
  int v22; // eax
  ULONG_PTR v23; // rcx
  ULONG v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  unsigned int v28; // ebx
  int v30; // [rsp+20h] [rbp-59h]
  struct _KSPIN *v31; // [rsp+60h] [rbp-19h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v32; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-9h] BYREF
  char v34; // [rsp+80h] [rbp+7h]
  int v35; // [rsp+E0h] [rbp+67h] BYREF
  struct _IRP *v36; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG Length; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v38; // [rsp+F8h] [rbp+7Fh] BYREF

  v36 = a2;
  v3 = *((_QWORD *)this + 4);
  v35 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v38 = -1;
  v6 = *(_QWORD *)(v3 + 16);
  v32 = 0LL;
  v31 = 0LL;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( v8 || (_BYTE)a3 )
  {
    LOBYTE(a2) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension);
    a2 = v36;
  }
  a2->IoStatus.Information = 0LL;
  v9 = CurrentStackLocation->Parameters.Create.Options == 32;
  v33[0] = &v36;
  v33[1] = &v35;
  v34 = 1;
  if ( !v9 )
  {
    v10 = -1073741306;
    v35 = -1073741306;
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    goto LABEL_18;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v15 = *((_QWORD *)p_NamedPipeType + 1) - *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1;
  if ( !v15 )
    v15 = *((_QWORD *)p_NamedPipeType + 2) - *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4;
  if ( v15 )
  {
    v25 = *((_QWORD *)p_NamedPipeType + 1) - SIDEBANDAUDIO_PARAMS_SET_USB_CONTROLLER;
    if ( !v25 )
      v25 = *((_QWORD *)p_NamedPipeType + 2) + 0x2D9F6AF8E8BCAC48LL;
    if ( v25 )
    {
      v10 = -1073741637;
      v35 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_GLOBAL_Control->DeviceExtension);
        v10 = v35;
      }
      lambda_9623573e77ecd9e21901cd71a385e3bc_::operator()(v33, a2, a3);
      return v10;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v26 = *((_QWORD *)this + 4);
    Length = CurrentStackLocation->Parameters.Read.Length;
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID, ULONG *))(pExtBusDeviceDispatchTable + 96))(
            p_NamedPipeType[6],
            v26,
            v36->UserBuffer,
            &Length);
    v35 = v27;
    if ( (int)(v27 + 0x80000000) >= 0 && v27 != -1073741789 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v30,
          9u,
          0x76u,
          (__int64)&WPP_e329219d3dc83e7ef4f1a166489f6e61_Traceguids);
    }
    v23 = Length;
    goto LABEL_86;
  }
  v16 = (CSidebandDevice *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( !CSidebandDevice::IsValidEndpointIndex(v16, (struct _KSFILTER_DESCRIPTOR *)(v6 + 128), *p_NamedPipeType) )
  {
    v10 = -1073741811;
    v35 = -1073741811;
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    a3 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
LABEL_18:
    DeviceExtension = v11->DeviceExtension;
    AttachedDevice = v11->AttachedDevice;
LABEL_64:
    LOBYTE(a2) = v7;
    WPP_RECORDER_AND_TRACE_SF_dd((_DWORD)AttachedDevice, (_DWORD)a2, (_DWORD)a3, (_DWORD)DeviceExtension);
    v10 = v35;
    goto LABEL_65;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v38, &v32);
  v35 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    v20 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v20) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    goto LABEL_44;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v38, &v31);
  v35 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    Context = v31->Context;
    Length = CurrentStackLocation->Parameters.Read.Length;
    v22 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, PVOID, ULONG *))(*(_QWORD *)(Context[18] + 128LL) + 88LL))(
            p_NamedPipeType[6],
            v31,
            v36->UserBuffer,
            &Length);
    v23 = Length;
    v35 = v22;
    v24 = CurrentStackLocation->Parameters.Read.Length;
    if ( !v24 )
    {
      v10 = -1073741789;
      v36->IoStatus.Information = Length;
      v35 = -1073741789;
      goto LABEL_65;
    }
    if ( v24 != Length )
    {
      v10 = -1073741811;
      v35 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      a3 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
      goto LABEL_64;
    }
LABEL_86:
    v36->IoStatus.Information = v23;
    v28 = v35;
    scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____::_2_::scope_exit::_scope_exit(v33);
    return v28;
  }
  v19 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  v20 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v20) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_45;
LABEL_44:
  LOBYTE(v18) = v7;
  WPP_RECORDER_AND_TRACE_SF_d(v19->AttachedDevice, v18, (_DWORD)v20, v19->DeviceExtension);
  PinFromEpIndex = v35;
LABEL_45:
  v10 = PinFromEpIndex;
LABEL_65:
  scope_exit__lambda_9623573e77ecd9e21901cd71a385e3bc____::_2_::scope_exit::_scope_exit(v33);
  return v10;
}
