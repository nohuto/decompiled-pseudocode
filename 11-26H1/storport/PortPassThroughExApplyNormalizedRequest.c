/*
 * XREFs of PortPassThroughExApplyNormalizedRequest @ 0x14012FE24
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x14003B4BC (PortPassThroughExMarshalResultsFromSrbEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PortPassThroughExApplyNormalizedRequest(__int128 *a1, IRP *a2)
{
  _IRP *MasterIrp; // rdi
  _IRP *v5; // rax
  __int128 v6; // xmm0

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LOBYTE(v5) = IoIs32bitProcess(a2);
  v6 = *a1;
  if ( (_BYTE)v5 )
  {
    v5 = a2->AssociatedIrp.MasterIrp;
    *(_OWORD *)&v5->Type = v6;
    *(_OWORD *)&v5->Flags = a1[1];
    v5->ThreadListEntry.Flink = (_LIST_ENTRY *)*((_QWORD *)a1 + 4);
  }
  else
  {
    *(_OWORD *)&MasterIrp->Type = v6;
    *(_OWORD *)&MasterIrp->Flags = a1[1];
    MasterIrp->ThreadListEntry = (_LIST_ENTRY)a1[2];
    MasterIrp->IoStatus = (_IO_STATUS_BLOCK)a1[3];
  }
  return (char)v5;
}
