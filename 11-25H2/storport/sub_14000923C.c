/*
 * XREFs of sub_14000923C @ 0x14000923C
 * Callers:
 *     sub_140008EE0 @ 0x140008EE0 (sub_140008EE0.c)
 * Callees:
 *     sub_14000A824 @ 0x14000A824 (sub_14000A824.c)
 *     sub_14007AD1C @ 0x14007AD1C (sub_14007AD1C.c)
 *     sub_14007ADBC @ 0x14007ADBC (sub_14007ADBC.c)
 */

NTSTATUS __fastcall sub_14000923C(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG Options; // ebp
  const char *v6; // r14
  NTSTATUS v7; // eax
  int v8; // edi
  const char *v10; // rax
  struct _IO_STACK_LOCATION *v11; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart >= 6 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v6 = "System";
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    v10 = "System";
    if ( Options )
      v10 = "Device";
    sub_14007AD1C(off_140168120->AttachedDevice, 13, (_DWORD)CurrentStackLocation, a1, (char)a2, (__int64)v10);
  }
  if ( !Options )
  {
    v7 = sub_14000A824(a1, a2);
LABEL_5:
    v8 = v7;
    goto LABEL_6;
  }
  if ( Options == 1 )
  {
    v11 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
    *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
    v11[-1].FileObject = v11->FileObject;
    v11[-1].Control = 0;
    v7 = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    goto LABEL_5;
  }
  v8 = -1073741823;
LABEL_6:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    if ( Options )
      v6 = "Device";
    sub_14007ADBC(off_140168120->AttachedDevice, 14, (_DWORD)CurrentStackLocation, a1, (char)a2, (__int64)v6, v8);
  }
  return v8;
}
