/*
 * XREFs of ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018E1C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006ED8 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _scope_exit__lambda_383040ae3a0fb7f5886c9fa7f22d00f0____::_2_::scope_exit::_scope_exit @ 0x140014E4C (_scope_exit__lambda_383040ae3a0fb7f5886c9fa7f22d00f0____--_2_--scope_exit--_scope_exit.c)
 *     _scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____::_2_::scope_exit::_scope_exit @ 0x140014E68 (_scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____--_2_--scope_exit--_scope_exit.c)
 *     PinSetDeviceState @ 0x14003D470 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamStart(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IRP *v3; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rdi
  CSidebandDevice *v7; // rcx
  char v8; // bl
  char v9; // r8
  bool v10; // zf
  unsigned int v11; // edi
  PDEVICE_OBJECT v12; // rcx
  bool v13; // r8
  unsigned int NamedPipeType; // esi
  int v15; // r8d
  int PinFromEpIndex; // eax
  int v17; // edx
  int v18; // r8d
  PDEVICE_OBJECT v19; // r10
  PKSPIN v20; // rsi
  int v21; // edx
  int v22; // r8d
  PDEVICE_OBJECT v23; // r10
  PVOID Object; // [rsp+50h] [rbp-19h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *p_Object; // [rsp+58h] [rbp-11h] BYREF
  char v27; // [rsp+60h] [rbp-9h]
  _QWORD v28[2]; // [rsp+68h] [rbp-1h] BYREF
  char v29; // [rsp+78h] [rbp+Fh]
  int v30; // [rsp+D0h] [rbp+67h] BYREF
  struct _IRP *v31; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v32; // [rsp+E0h] [rbp+77h] BYREF
  PKSPIN Pin; // [rsp+E8h] [rbp+7Fh] BYREF

  v31 = a2;
  v2 = *((_QWORD *)this + 4);
  v30 = 0;
  v3 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v32 = -1;
  v6 = *(_QWORD *)(v2 + 16);
  p_Object = 0LL;
  Pin = 0LL;
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
    v3 = v31;
  }
  v3->IoStatus.Information = 0LL;
  v10 = CurrentStackLocation->Parameters.Create.Options == 4;
  v28[0] = &v31;
  v28[1] = &v30;
  v29 = 1;
  if ( v10 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                          v7,
                          (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                          NamedPipeType) )
    {
      v11 = -1073741811;
      v30 = -1073741811;
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_26;
      goto LABEL_78;
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
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v32, &p_Object);
    v30 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      goto LABEL_41;
    }
    PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v32, &Pin);
    v30 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
LABEL_41:
      LOBYTE(v17) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(v19->AttachedDevice, v17, v18, v19->DeviceExtension);
      PinFromEpIndex = v30;
LABEL_42:
      v11 = PinFromEpIndex;
      goto LABEL_78;
    }
    v20 = Pin;
    Object = KsPinGetParentFilter(Pin);
    KsAcquireControl(Object);
    v27 = 1;
    p_Object = (struct _KSPIN_DESCRIPTOR_EX *)&Object;
    v30 = PinSetDeviceState(v20, 1LL, 0LL);
    v11 = v30;
    if ( v30 >= 0 )
    {
      v30 = PinSetDeviceState(v20, 2LL, 1LL);
      v11 = v30;
      if ( v30 >= 0 )
      {
        v30 = PinSetDeviceState(v20, 3LL, 2LL);
        v11 = v30;
        if ( v30 >= 0 )
        {
          KsReleaseControl(Object);
          v27 = 0;
          goto LABEL_76;
        }
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_77;
      }
      else
      {
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_77;
      }
    }
    else
    {
      v23 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      LOBYTE(v22) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_77;
    }
    LOBYTE(v21) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(v23->AttachedDevice, v21, v22, v23->DeviceExtension);
LABEL_76:
    v11 = v30;
LABEL_77:
    scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____::_2_::scope_exit::_scope_exit((__int64)&p_Object);
    goto LABEL_78;
  }
  v11 = -1073741306;
  v30 = -1073741306;
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v8 = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_26:
    LOBYTE(a2) = v8;
    WPP_RECORDER_AND_TRACE_SF_dd(v12->AttachedDevice, (_DWORD)a2, v13, v12->DeviceExtension);
    v11 = v30;
  }
LABEL_78:
  scope_exit__lambda_383040ae3a0fb7f5886c9fa7f22d00f0____::_2_::scope_exit::_scope_exit((__int64)v28);
  return v11;
}
