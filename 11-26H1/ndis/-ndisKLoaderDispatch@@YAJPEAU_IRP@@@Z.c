/*
 * XREFs of ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x14008C490
 * Callers:
 *     ndisDriverDispatch @ 0x14000AF80 (ndisDriverDispatch.c)
 * Callees:
 *     ndisKLoaderIrpCloseHandler @ 0x1400DF208 (ndisKLoaderIrpCloseHandler.c)
 *     ndisKLoaderIrpCreateHandler @ 0x1400DF28C (ndisKLoaderIrpCreateHandler.c)
 */

NTSTATUS __fastcall ndisKLoaderDispatch(PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  PDEVICE_OBJECT *FsContext; // rcx
  int Handler; // eax
  int v7; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction != 18 )
  {
    if ( MajorFunction )
    {
      if ( MajorFunction != 2 )
      {
        if ( MajorFunction != 14 )
        {
          Irp->IoStatus.Status = -1073741637;
          IofCompleteRequest(Irp, 2);
          return -1073741637;
        }
        FsContext = (PDEVICE_OBJECT *)CurrentStackLocation->FileObject->FsContext;
        if ( !FsContext || *(_DWORD *)FsContext != 183160574 )
          return -1073741811;
        goto LABEL_16;
      }
      Handler = ndisKLoaderIrpCloseHandler();
    }
    else
    {
      Handler = ndisKLoaderIrpCreateHandler(Irp);
    }
    Irp->IoStatus.Status = Handler;
    v7 = Handler;
    IofCompleteRequest(Irp, 2);
    return v7;
  }
  FsContext = (PDEVICE_OBJECT *)CurrentStackLocation->FileObject->FsContext;
  if ( !FsContext || *(_DWORD *)FsContext != 183160574 )
    return -1073741811;
LABEL_16:
  ++Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return IofCallDriver(FsContext[2], Irp);
}
