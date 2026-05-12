/*
 * XREFs of sub_140018DDC @ 0x140018DDC
 * Callers:
 *     sub_140019D84 @ 0x140019D84 (sub_140019D84.c)
 *     sub_14001A23C @ 0x14001A23C (sub_14001A23C.c)
 *     sub_1400CD01C @ 0x1400CD01C (sub_1400CD01C.c)
 *     sub_1400D67D4 @ 0x1400D67D4 (sub_1400D67D4.c)
 *     sub_140178FA0 @ 0x140178FA0 (sub_140178FA0.c)
 *     sub_14018D660 @ 0x14018D660 (sub_14018D660.c)
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 */

__int64 __fastcall sub_140018DDC(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 result; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  result = sub_140018E30(a1, a2);
  if ( (int)result >= 0 )
    return (unsigned int)a2->IoStatus.Status;
  return result;
}
