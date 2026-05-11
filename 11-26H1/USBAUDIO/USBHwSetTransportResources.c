/*
 * XREFs of USBHwSetTransportResources @ 0x140036660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall USBHwSetTransportResources(int a1, _QWORD *a2, int *a3, int a4)
{
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // rbp
  PKSDEVICE Device; // rax
  int v11; // edx
  char v12; // di
  ULONG *v13; // r8
  _DWORD *Context; // r15
  PDEVICE_OBJECT v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  int v17; // eax

  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(a2[2] + 144LL);
  Device = KsGetDevice(a2);
  v12 = 1;
  v13 = &WPP_RECORDER_INITIALIZED;
  if ( Device )
  {
    Context = Device->Context;
    if ( a1 != 2 )
    {
      if ( a1 == 4 )
      {
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          goto LABEL_26;
        goto LABEL_27;
      }
      if ( a1 == 8 )
      {
        v8 = 1;
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_26:
          WPP_RECORDER_AND_TRACE_SF_(v15->AttachedDevice, v11, (_DWORD)v13, v15->DeviceExtension);
LABEL_27:
        if ( Context[217] == 2 )
        {
          if ( a4 == 4 )
          {
            v17 = *a3;
            v13 = &WPP_RECORDER_INITIALIZED;
            if ( v8 )
              *(_DWORD *)(v9 + 228) = v17;
            else
              *(_DWORD *)(v9 + 224) = v17;
            goto LABEL_50;
          }
          v16 = WPP_GLOBAL_Control;
          LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          {
LABEL_36:
            v7 = -1073741811;
            v13 = &WPP_RECORDER_INITIALIZED;
            goto LABEL_50;
          }
        }
        else
        {
          v16 = WPP_GLOBAL_Control;
          LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_36;
        }
        WPP_RECORDER_AND_TRACE_SF_(v16->AttachedDevice, v11, (_DWORD)v13, v16->DeviceExtension);
        goto LABEL_36;
      }
    }
    v7 = -1073741811;
    goto LABEL_50;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      (_DWORD)v13,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  v7 = -1073741437;
  v13 = &WPP_RECORDER_INITIALIZED;
LABEL_50:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)v11 || v12 )
  {
    LOBYTE(v13) = v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      (_DWORD)v13,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return v7;
}
