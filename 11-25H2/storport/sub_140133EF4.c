/*
 * XREFs of sub_140133EF4 @ 0x140133EF4
 * Callers:
 *     sub_140035F08 @ 0x140035F08 (sub_140035F08.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140133EF4(__int128 *a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdi
  struct _IRP *v5; // rax
  __int128 v6; // xmm0

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LOBYTE(v5) = IoIs32bitProcess(a2);
  v6 = *a1;
  if ( (_BYTE)v5 )
  {
    v5 = a2->AssociatedIrp.MasterIrp;
    *(_OWORD *)&v5->Type = v6;
    *(_OWORD *)&v5->Flags = a1[1];
    v5->ThreadListEntry.Flink = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 4);
  }
  else
  {
    *(_OWORD *)&MasterIrp->Type = v6;
    *(_OWORD *)&MasterIrp->Flags = a1[1];
    MasterIrp->ThreadListEntry = (LIST_ENTRY)a1[2];
    *(_OWORD *)&MasterIrp->IoStatus.Status = a1[3];
  }
  return (char)v5;
}
