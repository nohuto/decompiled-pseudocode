/*
 * XREFs of PiSwDispatch @ 0x140A8C570
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     PiSwIrpGetAttributes @ 0x1407B3330 (PiSwIrpGetAttributes.c)
 *     PiSwIrpSetAttributes @ 0x1407B33D0 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B350C (PiSwIrpSetLifetime.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1409AE6BC (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x140A8C538 (PiSwDeviceDereference.c)
 *     PiSwIrpStartCreate @ 0x140A8C99C (PiSwIrpStartCreate.c)
 *     PiSwIrpPropertySet @ 0x140B071FC (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140B12678 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140B3B48C (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  IRP *v9; // rcx
  __int64 v10; // rcx
  PVOID FsContext2; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = PiAuDoesClientHaveAccess(0x80u) == 0 ? 0xC0000022 : 0;
LABEL_15:
    v9 = a2;
    a2->IoStatus.Status = Status;
LABEL_16:
    IofCompleteRequest(v9, 0);
    return Status;
  }
  switch ( MajorFunction )
  {
    case 0xEu:
      switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
      {
        case 0x470400u:
          return (unsigned int)PiSwIrpStartCreate(a2);
        case 0x470404u:
          return (unsigned int)PiSwIrpPropertySet(a2);
        case 0x470408u:
          return (unsigned int)PiSwIrpInterfaceRegister(a2, (__int64)a2, a3);
        case 0x47040Cu:
          return (unsigned int)PiSwIrpInterfaceSetState(a2);
        case 0x470410u:
          return (unsigned int)PiSwIrpInterfacePropertySet(a2, (__int64)a2, a3);
        case 0x470414u:
          return (unsigned int)PiSwIrpSetLifetime(a2, (__int64)a2, a3);
        case 0x470418u:
          return (unsigned int)PiSwIrpGetLifetime(a2);
        case 0x47041Cu:
          return (unsigned int)PiSwIrpSetAttributes(a2, (__int64)a2, a3);
        default:
          v9 = a2;
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654112 )
          {
            Status = -1073741637;
            a2->IoStatus.Status = -1073741637;
            goto LABEL_16;
          }
          return (unsigned int)PiSwIrpGetAttributes(a2);
      }
    case 2u:
      FsContext2 = CurrentStackLocation->FileObject->FsContext2;
      if ( FsContext2 )
      {
        PiSwDeviceDereference(FsContext2);
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
      goto LABEL_29;
    case 0x12u:
      v10 = (__int64)CurrentStackLocation->FileObject->FsContext2;
      if ( v10 )
        PiSwIrpCleanup(v10, (__int64)a2, a3);
LABEL_29:
      Status = 0;
      goto LABEL_15;
  }
  return Status;
}
