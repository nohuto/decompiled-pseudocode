/*
 * XREFs of ?_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14003CB60
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x14003E810 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall FxWmiIrpHandler::_ExecuteMethod(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int *p_NamedPipeType; // rbx
  unsigned int v9; // ebp
  unsigned int v10; // edi
  int v11; // eax
  char *v12; // rax
  unsigned int size; // [rsp+68h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  size = 0;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v9 = p_NamedPipeType[16];
  v10 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - p_NamedPipeType[15];
  if ( Instance->IsExecuteMethodSupported(Instance) )
  {
    if ( v9 || v10 )
      v12 = (char *)p_NamedPipeType + p_NamedPipeType[15];
    else
      v12 = 0LL;
    v11 = Instance->ExecuteMethod(Instance, p_NamedPipeType[14], v9, v10, v12, &size);
    if ( v11 == 259 )
    {
      v11 = -1073741823;
      size = 0;
    }
  }
  else
  {
    v11 = -1073741808;
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v11, size);
}
