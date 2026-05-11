/*
 * XREFs of ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015D5C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x14000A5F4 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall CSidebandDevice::GetErrorStatusUpdate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int v5; // edx
  unsigned int inserted; // edi
  PDEVICE_OBJECT v7; // rcx
  bool v8; // bl
  bool v9; // r8
  unsigned int *p_NamedPipeType; // r12
  int v11; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 12 )
  {
    v5 = -1073741306;
    inserted = -1073741306;
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
    goto LABEL_9;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(
                        this,
                        (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL),
                        *p_NamedPipeType) )
  {
    inserted = -1073741811;
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
    goto LABEL_9;
  }
  v8 = 1;
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, v11, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( p_NamedPipeType[1] )
  {
    if ( CurrentStackLocation->Parameters.Read.Length == 12 )
    {
      inserted = 0;
      *((_DWORD *)a2->UserBuffer + 2) = 0;
      a2->IoStatus.Information = 12LL;
      goto LABEL_38;
    }
    v5 = -1073741306;
    inserted = -1073741306;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
LABEL_9:
    LOBYTE(v5) = v8;
    WPP_RECORDER_AND_TRACE_SF_dd(v7->AttachedDevice, v5, v9, v7->DeviceExtension);
LABEL_38:
    a2->IoStatus.Status = inserted;
    IofCompleteRequest(a2, 0);
    return inserted;
  }
  inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2, 0LL, (char *)this + 144);
  if ( inserted != 259 )
    goto LABEL_38;
  return inserted;
}
