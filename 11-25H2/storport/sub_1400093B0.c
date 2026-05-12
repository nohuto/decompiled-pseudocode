/*
 * XREFs of sub_1400093B0 @ 0x1400093B0
 * Callers:
 *     sub_140008EE0 @ 0x140008EE0 (sub_140008EE0.c)
 * Callees:
 *     sub_140009524 @ 0x140009524 (sub_140009524.c)
 *     sub_140033C18 @ 0x140033C18 (sub_140033C18.c)
 *     sub_14007AD1C @ 0x14007AD1C (sub_14007AD1C.c)
 *     sub_14007ADBC @ 0x14007ADBC (sub_14007ADBC.c)
 */

NTSTATUS __fastcall sub_1400093B0(__int64 a1, IRP *a2, int a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int LowPart; // ebx
  ULONG Options; // ebp
  const char *v8; // r14
  int v9; // eax
  int v10; // ebx
  struct _IO_STACK_LOCATION *v12; // rax
  const char *v13; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = "System";
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    v13 = "System";
    if ( Options )
      v13 = "Device";
    sub_14007AD1C(off_140168120->AttachedDevice, 15, a3, a1, (char)a2, (__int64)v13);
  }
  if ( !Options )
  {
    if ( LowPart > 6 )
    {
      v12 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
      *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
      v12[-1].FileObject = v12->FileObject;
      v12[-1].Control = 0;
      return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v9 = sub_140033C18(a1, a2);
    goto LABEL_6;
  }
  if ( Options == 1 )
  {
    v9 = sub_140009524(a1, a2);
LABEL_6:
    v10 = v9;
    goto LABEL_7;
  }
  v10 = -1073741823;
LABEL_7:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    if ( Options )
      v8 = "Device";
    sub_14007ADBC(off_140168120->AttachedDevice, 16, a3, a1, (char)a2, (__int64)v8, v10);
  }
  return v10;
}
