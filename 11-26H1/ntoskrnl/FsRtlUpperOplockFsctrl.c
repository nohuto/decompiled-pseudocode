/*
 * XREFs of FsRtlUpperOplockFsctrl @ 0x140791580
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A9E410 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 */

__int64 __fastcall FsRtlUpperOplockFsctrl(POPLOCK Oplock, PIRP Irp, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v7; // rcx
  PIRP v8; // r11
  UCHAR MajorFunction; // di
  unsigned int v10; // r10d
  ULONG Options; // edx
  struct _IRP *MasterIrp; // rdx

  v4 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  v8 = Irp;
  MajorFunction = CurrentStackLocation->MajorFunction;
  v10 = ((a4 & 6) << 12) | ((a4 & 1) << 12);
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 && (v10 & 0x4000) == 0 || (Options & 0x10000) != 0 && (v10 & 0x2000) == 0 )
      return (unsigned int)-1073741598;
    return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v8, v10);
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x90000u:
      v7 = 2LL;
      break;
    case 0x90004u:
      v7 = 16LL;
      break;
    case 0x90008u:
      v7 = 4LL;
      break;
    case 0x9005Cu:
      v7 = 8LL;
      break;
    case 0x90240u:
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      if ( CurrentStackLocation->Parameters.Create.Options >= 0xC )
      {
        if ( MasterIrp->Type <= 1u )
        {
          if ( ((__int64)MasterIrp->MdlAddress & 2) != 0 )
            return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v8, v10);
          v7 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 1u) << 12);
        }
        else
        {
          v4 = -1073741811;
        }
      }
      else
      {
        v4 = -1073741789;
      }
      break;
    default:
      return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v8, v10);
  }
  if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(v7, v10) )
  {
    if ( !v4 )
      return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v8, v10);
  }
  else
  {
    v4 = -1073741598;
  }
  if ( MajorFunction == 13 )
  {
    v8->IoStatus.Status = v4;
    IofCompleteRequest(v8, 1);
  }
  return v4;
}
