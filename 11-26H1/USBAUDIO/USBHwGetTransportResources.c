/*
 * XREFs of USBHwGetTransportResources @ 0x140041CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x14001C7C0 (memmove.c)
 */

__int64 __fastcall USBHwGetTransportResources(int a1, _QWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v7; // ebx
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // r13
  PKSDEVICE Device; // rax
  _DWORD *v12; // rdx
  PDEVICE_OBJECT *v13; // r8
  char v14; // bp
  __int64 v15; // r12
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  PDEVICE_OBJECT v21; // rcx
  int v22; // r8d
  size_t v23; // rdi
  size_t v24; // r8

  v4 = a2[2];
  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 152);
  v10 = *(_QWORD *)(v4 + 144);
  Device = KsGetDevice(a2);
  v13 = &WPP_GLOBAL_Control;
  v14 = 1;
  if ( !Device )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v13,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_9;
  }
  v15 = *((_QWORD *)Device->Context + 9);
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v13,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v12 = *(_DWORD **)(v10 + 136);
    if ( !v12 )
    {
      *a4 = 0;
LABEL_9:
      v7 = -1073741437;
LABEL_84:
      v22 = 0;
      goto LABEL_85;
    }
    v23 = *(unsigned __int8 *)v12;
    if ( !*a4 )
    {
      v7 = -1073741789;
      goto LABEL_83;
    }
    if ( *a4 < (unsigned int)v23 )
    {
      v22 = 0;
      goto LABEL_109;
    }
    goto LABEL_81;
  }
  v16 = a1 - 1;
  if ( !v16 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v12 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
LABEL_45:
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v12,
      (_DWORD)v13,
      WPP_GLOBAL_Control->DeviceExtension);
LABEL_46:
    v12 = *(_DWORD **)(v10 + 168);
    v22 = 0;
    if ( v8 )
      v12 = *(_DWORD **)(v10 + 176);
    if ( !v12 )
      goto LABEL_49;
    v23 = *(unsigned __int8 *)v12;
    if ( !*a4 )
    {
LABEL_38:
      *a4 = v23;
      v7 = -1073741789;
      goto LABEL_85;
    }
    if ( *a4 < (unsigned int)v23 )
      goto LABEL_109;
LABEL_81:
    v24 = v23;
    goto LABEL_82;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    goto LABEL_32;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v12 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_57;
    goto LABEL_56;
  }
  v19 = v18 - 2;
  if ( !v19 )
  {
    v8 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v12 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    goto LABEL_45;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v8 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_31:
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        (_DWORD)v13,
        WPP_GLOBAL_Control->DeviceExtension);
LABEL_32:
    v12 = *(_DWORD **)(v9 + 96);
    v22 = 0;
    if ( v8 )
      v12 = *(_DWORD **)(v9 + 104);
    if ( v12 )
    {
      LODWORD(v23) = 82;
      if ( *v12 < 0x52u )
        LODWORD(v23) = *v12;
      if ( !*a4 )
        goto LABEL_38;
      if ( *a4 >= (unsigned int)v23 )
      {
        v24 = (unsigned int)v23;
LABEL_82:
        memmove(a3, v12, v24);
LABEL_83:
        *a4 = v23;
        goto LABEL_84;
      }
LABEL_109:
      v7 = -1073741811;
      goto LABEL_85;
    }
LABEL_49:
    *a4 = 0;
    v7 = -1073741437;
    goto LABEL_85;
  }
  if ( v20 != 1 )
  {
    v7 = -1073741811;
    *a4 = 0;
    goto LABEL_84;
  }
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v12) = 0;
  }
  LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v12 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_57;
LABEL_56:
  WPP_RECORDER_AND_TRACE_SF_(v21->AttachedDevice, (_DWORD)v12, (_DWORD)v13, v21->DeviceExtension);
LABEL_57:
  v22 = 0;
  if ( !*a4 )
  {
    v7 = -1073741789;
LABEL_62:
    *a4 = 4;
    goto LABEL_85;
  }
  if ( *a4 >= 4u )
  {
    *(_WORD *)a3 = *(_WORD *)(v15 + 8);
    a3[2] = *(_BYTE *)(v10 + 186);
    a3[3] = *(_BYTE *)(v10 + 187);
    goto LABEL_62;
  }
  v7 = -1073741811;
LABEL_85:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v14 = 0;
  if ( (_BYTE)v12 || v14 )
  {
    LOBYTE(v22) = v14;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v12,
      v22,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return v7;
}
