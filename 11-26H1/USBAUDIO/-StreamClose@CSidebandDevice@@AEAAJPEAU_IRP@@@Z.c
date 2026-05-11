/*
 * XREFs of ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018AD4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006ED8 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _scope_exit__lambda_816a228c8b7d8639ab7e561e4adfa3ec____::_2_::scope_exit::_scope_exit @ 0x140014EAC (_scope_exit__lambda_816a228c8b7d8639ab7e561e4adfa3ec____--_2_--scope_exit--_scope_exit.c)
 */

__int64 __fastcall CSidebandDevice::StreamClose(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v2; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v5; // rdi
  CSidebandDevice *v6; // rcx
  char v7; // bl
  char v8; // r8
  bool v9; // zf
  unsigned int v10; // edi
  PDEVICE_OBJECT v11; // rcx
  bool v12; // r8
  unsigned int NamedPipeType; // esi
  int v14; // r8d
  int PinFromEpIndex; // eax
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // r10
  struct _KSPIN_DESCRIPTOR_EX *v20; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-20h] BYREF
  char v22; // [rsp+68h] [rbp-10h]
  int v23; // [rsp+C0h] [rbp+48h] BYREF
  struct _IRP *v24; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+D0h] [rbp+58h] BYREF
  struct _KSPIN *v26; // [rsp+D8h] [rbp+60h] BYREF

  v24 = a2;
  v2 = *((_QWORD *)this + 4);
  v23 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v25 = -1;
  v5 = *(_QWORD *)(v2 + 16);
  a2->IoStatus.Information = 0LL;
  v20 = 0LL;
  v26 = 0LL;
  v6 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
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
  v9 = CurrentStackLocation->Parameters.Create.Options == 4;
  v21[0] = &v24;
  v21[1] = &v23;
  v22 = 1;
  if ( v9 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                          v6,
                          (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                          NamedPipeType) )
    {
      v10 = -1073741811;
      v23 = -1073741811;
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      goto LABEL_53;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        v14,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v25, &v20);
    v23 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v25, &v26);
      v23 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        ObfDereferenceObject(*((PVOID *)v26->Context + 6));
        goto LABEL_52;
      }
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
    }
    LOBYTE(v16) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(v18->AttachedDevice, v16, v17, v18->DeviceExtension);
    PinFromEpIndex = v23;
LABEL_42:
    v10 = PinFromEpIndex;
    goto LABEL_53;
  }
  v10 = -1073741306;
  v23 = -1073741306;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
LABEL_18:
    LOBYTE(a2) = v7;
    WPP_RECORDER_AND_TRACE_SF_dd(v11->AttachedDevice, (_DWORD)a2, v12, v11->DeviceExtension);
LABEL_52:
    v10 = v23;
  }
LABEL_53:
  scope_exit__lambda_816a228c8b7d8639ab7e561e4adfa3ec____::_2_::scope_exit::_scope_exit((__int64)v21);
  return v10;
}
