/*
 * XREFs of sub_140128DA8 @ 0x140128DA8
 * Callers:
 *     sub_14012A868 @ 0x14012A868 (sub_14012A868.c)
 * Callees:
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 */

NTSTATUS __fastcall sub_140128DA8(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v5; // rax

  sub_1400CA35C(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  v5[-1].Context = 0LL;
  v5[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_140128E40;
  v5[-1].Control = -32;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
}
