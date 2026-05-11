/*
 * XREFs of USBMidiOutAllocateRequest @ 0x14003E754
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1400093B8 (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     memset @ 0x14001CAC0 (memset.c)
 */

__int64 __fastcall USBMidiOutAllocateRequest(PKSSTREAM_POINTER StreamPointer, IRP ***a2)
{
  NTSTATUS v4; // r14d
  _QWORD *Context; // rbx
  __int64 v6; // rbp
  __int64 v7; // r15
  IRP **v8; // rax
  IRP **v9; // rsi
  IRP *v10; // rcx
  IRP *v11; // r15
  IRP *v12; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v14; // rax

  v4 = -1073741670;
  Context = StreamPointer->Pin->Context;
  v6 = Context[19];
  v7 = Context[2];
  v8 = (IRP **)ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v6 + 80));
  v9 = v8;
  if ( v8 )
  {
    v10 = v8[2];
    if ( v10 )
      IoInitializeIrp(v10, 72 * *(char *)(*(_QWORD *)(v7 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v7 + 40) + 76LL));
    else
      v8[2] = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
    v11 = v9[2];
    if ( v11 && (v4 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)v9 + 5), v4 >= 0) )
    {
      v12 = v9[3];
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      memset(v12, 0, 0x80uLL);
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v12;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
      v14 = v11->Tail.Overlay.CurrentStackLocation;
      *a2 = v9;
      v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBMidiOutCompleteCallback;
      v14[-1].Context = v9;
      v14[-1].Control = -32;
      *(_DWORD *)&v12->Type = 589952;
      v12->AssociatedIrp.MasterIrp = *(struct _IRP **)(v6 + 56);
      LODWORD(v12->ThreadListEntry.Flink) = 2;
      v12->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v9[6];
    }
    else
    {
      ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v6 + 80), v9);
    }
  }
  return (unsigned int)v4;
}
