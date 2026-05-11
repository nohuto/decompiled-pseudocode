/*
 * XREFs of ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400180DC
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006ED8 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____::_2_::scope_exit::_scope_exit @ 0x14000B84C (_scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____--_2_--scope_exit--_scope_exit.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CSidebandDevice::SetSiop(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IRP *v3; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rdi
  CSidebandDevice *v7; // rcx
  char v8; // bl
  char v9; // r8
  bool v10; // cf
  unsigned int v11; // edi
  PDEVICE_OBJECT v12; // rcx
  bool v13; // r8
  unsigned int *p_NamedPipeType; // rsi
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  struct _KSPIN *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned int v22; // ebx
  struct _KSPIN_DESCRIPTOR_EX *v24; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-20h] BYREF
  char v26; // [rsp+68h] [rbp-10h]
  int PinFromEpIndex; // [rsp+C0h] [rbp+48h] BYREF
  struct _IRP *v28; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+D0h] [rbp+58h] BYREF
  struct _KSPIN *v30; // [rsp+D8h] [rbp+60h] BYREF

  v28 = a2;
  v2 = *((_QWORD *)this + 4);
  PinFromEpIndex = 0;
  v3 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v29 = -1;
  v6 = *(_QWORD *)(v2 + 16);
  v24 = 0LL;
  v30 = 0LL;
  v7 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( (_BYTE)a2 || v9 )
  {
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v9, WPP_GLOBAL_Control->DeviceExtension);
    v3 = v28;
  }
  v3->IoStatus.Information = 0LL;
  v10 = CurrentStackLocation->Parameters.Create.Options < 0x20;
  v25[0] = &v28;
  v25[1] = &PinFromEpIndex;
  v26 = 1;
  if ( v10 )
  {
    v11 = -1073741811;
    PinFromEpIndex = -1073741811;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_69;
    goto LABEL_18;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                        v7,
                        (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                        *p_NamedPipeType) )
  {
    v11 = -1073741811;
    PinFromEpIndex = -1073741811;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_69;
LABEL_18:
    LOBYTE(a2) = v8;
    WPP_RECORDER_AND_TRACE_SF_dd(v12->AttachedDevice, (_DWORD)a2, v13, v12->DeviceExtension);
LABEL_68:
    v11 = PinFromEpIndex;
LABEL_69:
    scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____::_2_::scope_exit::_scope_exit((__int64)v25);
    return v11;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v15,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v29, &v24);
  v11 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_69;
    goto LABEL_67;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v29, &v30);
  v11 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_69;
    goto LABEL_67;
  }
  v19 = v30;
  v20 = *((_QWORD *)p_NamedPipeType + 1) - *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1;
  v21 = *(_QWORD *)(*((_QWORD *)v30->Context + 18) + 128LL);
  if ( !v20 )
    v20 = *((_QWORD *)p_NamedPipeType + 2) - *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4;
  if ( v20 )
  {
    v11 = -1073741637;
    PinFromEpIndex = -1073741637;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_69;
LABEL_67:
    LOBYTE(v16) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(v18->AttachedDevice, v16, v17, v18->DeviceExtension);
    goto LABEL_68;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  PinFromEpIndex = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, unsigned int *, _QWORD))(v21 + 96))(
                     p_NamedPipeType[6],
                     v19,
                     p_NamedPipeType + 8,
                     p_NamedPipeType[7]);
  v22 = PinFromEpIndex;
  scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____::_2_::scope_exit::_scope_exit((__int64)v25);
  return v22;
}
