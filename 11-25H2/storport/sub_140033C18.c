/*
 * XREFs of sub_140033C18 @ 0x140033C18
 * Callers:
 *     sub_1400093B0 @ 0x1400093B0 (sub_1400093B0.c)
 * Callees:
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_140033C18(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  struct _IO_STACK_LOCATION *v5; // rax
  struct _IO_STACK_LOCATION *v6; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (CurrentStackLocation->Parameters.Read.Length & 0x400000) != 0
    && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 6 )
  {
    *(_DWORD *)(a1 + 6140) |= 1u;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 39LL, &unk_14014C778, a1, a2);
  }
  sub_140033D74(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v5[-1].MajorFunction = *(_OWORD *)&v5->MajorFunction;
  *(_OWORD *)&v5[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v5->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v5[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v5->Parameters.SetQuota + 6);
  v5[-1].FileObject = v5->FileObject;
  v5[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].Context = 0LL;
  v6[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_14000B920;
  v6[-1].Control = -32;
  PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 40LL, &unk_14014C778, a1, a2, 259);
  }
  return 259LL;
}
