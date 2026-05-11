/*
 * XREFs of ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007438
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _lambda_1ab46f8d786e437f5124283015cdf2a7_::operator() @ 0x140007724 (_lambda_1ab46f8d786e437f5124283015cdf2a7_--operator().c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____::_2_::scope_exit::_scope_exit @ 0x14000BDE8 (_scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____--_2_--scope_exit--_scope_exit.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x14000FA54 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::StreamOpen(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  __int64 v3; // rax
  struct _IRP *v4; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v7; // rdi
  CSidebandDevice *v8; // rcx
  char v9; // bl
  bool v10; // zf
  unsigned int v11; // edi
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  _QWORD v17[2]; // [rsp+50h] [rbp-20h] BYREF
  char v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+B0h] [rbp+40h] BYREF
  struct _IRP *v20; // [rsp+B8h] [rbp+48h] BYREF
  struct _KSPIN *v21; // [rsp+C0h] [rbp+50h] BYREF

  v20 = a2;
  v3 = *((_QWORD *)this + 4);
  v19 = 0;
  v4 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v21 = 0LL;
  v7 = *(_QWORD *)(v3 + 16);
  v8 = (CSidebandDevice *)WPP_GLOBAL_Control;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
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
  {
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    v4 = v20;
  }
  v4->IoStatus.Information = 0LL;
  v10 = CurrentStackLocation->Parameters.Create.Options == 24;
  v17[0] = &v20;
  v17[1] = &v19;
  v18 = 1;
  if ( v10 )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( CSidebandDevice::IsValidEndpointIndex(v8, (struct _KSFILTER_DESCRIPTOR *)(v7 + 128), Parameters->NamedPipeType) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v13, v14, WPP_GLOBAL_Control->DeviceExtension);
      }
      v15 = CSidebandDevice::CreateKsPin(
              this,
              Parameters->NamedPipeType,
              *(union KSDATAFORMAT **)&Parameters->CompletionMode,
              &v21);
      v19 = v15;
      if ( v15 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = v9;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            WPP_GLOBAL_Control->DeviceExtension);
          v15 = v19;
        }
      }
      v11 = v15;
    }
    else
    {
      v11 = -1073741811;
      v19 = -1073741811;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_dd(WPP_GLOBAL_Control->AttachedDevice, v13, v14, WPP_GLOBAL_Control->DeviceExtension);
        v11 = v19;
      }
    }
    scope_exit__lambda_1ab46f8d786e437f5124283015cdf2a7____::_2_::scope_exit::_scope_exit(v17, v13, v14);
  }
  else
  {
    v11 = -1073741306;
    v19 = -1073741306;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v9;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_GLOBAL_Control->DeviceExtension);
      v11 = v19;
    }
    lambda_1ab46f8d786e437f5124283015cdf2a7_::operator()(v17, a2, a3);
  }
  return v11;
}
