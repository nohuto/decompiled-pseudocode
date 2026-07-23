/*
 * XREFs of IoWMICompleteRequest @ 0x140AC67B8
 * Callers:
 *     IoWMISystemControl @ 0x140AC63D4 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140AC6630 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 */

__int64 __fastcall IoWMICompleteRequest(__int64 a1, __int64 a2, IRP *a3, int a4, int a5)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r10
  int v6; // ebx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rdx
  unsigned int CompletionMode; // r9d
  unsigned int v11; // r8d
  __int64 MaximumInstances; // rdi
  bool v14; // zf
  unsigned int *p_OutboundQuota; // r10
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r9d

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a4;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( CurrentStackLocation->MinorFunction == 1 )
    {
      v11 = Parameters[1].InboundQuota + a5;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v11;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        goto LABEL_5;
      }
    }
    else
    {
      if ( CurrentStackLocation->MinorFunction != 9 )
        goto LABEL_8;
      v11 = a5 + Parameters[1].OutboundQuota;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v11;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        Parameters[1].DefaultTimeout.LowPart = a5;
        goto LABEL_5;
      }
    }
    v14 = a4 == -1073741789;
LABEL_10:
    if ( v14 )
      goto LABEL_4;
LABEL_8:
    v11 = 0;
    goto LABEL_5;
  }
  CompletionMode = Parameters[1].CompletionMode;
  v11 = CompletionMode + a5;
  MaximumInstances = Parameters[1].MaximumInstances;
  if ( v6 < 0 )
  {
    v14 = a4 == -1073741789;
    goto LABEL_10;
  }
  if ( v11 > CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
LABEL_4:
    Parameters[1].CompletionMode = v11;
    Parameters->NamedPipeType = 56;
    v11 = 56;
    Parameters[1].ReadMode = 32;
    v6 = 0;
    goto LABEL_5;
  }
  p_OutboundQuota = &Parameters[1].OutboundQuota;
  *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
  Parameters->NamedPipeType = v11;
  v16 = MaximumInstances;
  if ( (_DWORD)MaximumInstances )
  {
    do
    {
      --v16;
      p_OutboundQuota[2 * v16 + 1] = p_OutboundQuota[v16];
    }
    while ( v16 );
    v17 = MaximumInstances;
    do
    {
      *p_OutboundQuota = CompletionMode;
      v18 = p_OutboundQuota[1] + CompletionMode + 7;
      p_OutboundQuota += 2;
      CompletionMode = v18 & 0xFFFFFFF8;
      --v17;
    }
    while ( v17 );
  }
LABEL_5:
  a3->IoStatus.Information = v11;
  a3->IoStatus.Status = v6;
  IofCompleteRequest(a3, 0);
  return (unsigned int)v6;
}
