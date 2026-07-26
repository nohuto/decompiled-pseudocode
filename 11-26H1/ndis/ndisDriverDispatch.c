/*
 * XREFs of ndisDriverDispatch @ 0x14000AF80
 * Callers:
 *     <none>
 * Callees:
 *     ndisLwmCreateIrpHandler @ 0x14000A790 (ndisLwmCreateIrpHandler.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 *     ndisLwmIoctlIrpHandler @ 0x14000CEA0 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x14008C490 (-ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDriverDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v4; // edi
  unsigned __int8 MajorFunction; // al
  unsigned int IrpHandler; // eax

  if ( a1 == ndisLwmDeviceObject )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    v4 = -1073741637;
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction )
    {
      if ( MajorFunction != 14 )
      {
        if ( MajorFunction == 2 )
        {
          ExFreePoolWithTag(CurrentStackLocation->FileObject->FsContext, 0);
          v4 = 0;
        }
        else if ( MajorFunction == 18 )
        {
          v4 = 0;
        }
        goto LABEL_9;
      }
      IrpHandler = ndisLwmIoctlIrpHandler(a2);
    }
    else
    {
      IrpHandler = ndisLwmCreateIrpHandler(a2, CurrentStackLocation);
    }
    v4 = IrpHandler;
    if ( IrpHandler == 259 )
    {
LABEL_10:
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
      return v4;
    }
LABEL_9:
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 0);
    goto LABEL_10;
  }
  if ( a1 == ndisLoaderDeviceObject )
    return ndisKLoaderDispatch(a2);
  else
    return ndisDispatchRequest();
}
