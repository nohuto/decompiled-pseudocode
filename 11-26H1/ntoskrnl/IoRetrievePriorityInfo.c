/*
 * XREFs of IoRetrievePriorityInfo @ 0x14042F1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  _IO_PRIORITY_HINT v4; // r10d
  _DWORD *FileObjectExtension; // rax
  _IO_PRIORITY_HINT v6; // ecx
  unsigned __int64 v7; // rax
  _IO_PRIORITY_HINT v8; // eax
  ULONG Flags; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // rax
  _IO_PRIORITY_HINT v18; // eax
  PETHREAD v19; // rdx

  v4 = IoPriorityNormal;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp )
  {
    Flags = Irp->Flags;
    if ( (Flags & 0xE0000) != 0 )
    {
      v10 = (Flags >> 17) & 7;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 < 2 )
        {
          v19 = Irp->Tail.Overlay.Thread;
          if ( v19 )
          {
            if ( LODWORD(v19[1].Timer.TimerListEntry.Flink) )
              goto LABEL_14;
          }
        }
      }
      else
      {
        v11 = 2;
      }
      v4 = v11;
LABEL_14:
      PriorityInfo->IoPriority = v4;
      goto LABEL_15;
    }
  }
  if ( !FileObject )
  {
    if ( !Thread )
      goto LABEL_41;
    v6 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
    v17 = Thread->Process[1].Padding[3];
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 + 1084);
      if ( v6 >= v18 )
        v6 = v18;
    }
    if ( v6 < IoPriorityNormal && Thread == KeGetCurrentThread() && LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
      v6 = IoPriorityNormal;
    goto LABEL_9;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension || (v16 = FileObjectExtension[22]) == 0 )
  {
    if ( !Thread )
    {
LABEL_41:
      *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
      return 0;
    }
    v6 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
    v7 = Thread->Process[1].Padding[3];
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 1084);
      if ( v6 >= v8 )
        v6 = v8;
    }
    if ( v6 < IoPriorityNormal && Thread == KeGetCurrentThread() )
    {
      if ( LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
        v6 = IoPriorityNormal;
      PriorityInfo->IoPriority = v6;
      goto LABEL_16;
    }
LABEL_9:
    PriorityInfo->IoPriority = v6;
    goto LABEL_16;
  }
  PriorityInfo->IoPriority = v16 - 1;
LABEL_15:
  if ( !Thread )
    goto LABEL_41;
LABEL_16:
  PriorityInfo->ThreadPriority = Thread->BasePriority;
  v12 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
  v13 = Thread->Process[1].Padding[3];
  if ( v13 )
  {
    v15 = *(_DWORD *)(v13 + 1092);
    if ( v12 >= v15 )
      v12 = v15;
  }
  PriorityInfo->PagePriority = v12;
  return 0;
}
