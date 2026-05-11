/*
 * XREFs of CsInsertIrp @ 0x14000D740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsInsertIrp(struct _IO_CSQ *Csq, PIRP Irp)
{
  PIO_CSQ_REMOVE_IRP CsqRemoveIrp; // rax
  struct _LIST_ENTRY *p_CsqInsertIrp; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdx

  CsqRemoveIrp = Csq[1].CsqRemoveIrp;
  p_CsqInsertIrp = (struct _LIST_ENTRY *)&Csq[1].CsqInsertIrp;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
  if ( *(struct _LIST_ENTRY **)CsqRemoveIrp != p_CsqInsertIrp )
    __fastfail(3u);
  p_ListEntry->ListEntry.Flink = p_CsqInsertIrp;
  p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)CsqRemoveIrp;
  *(_QWORD *)CsqRemoveIrp = p_ListEntry;
  p_CsqInsertIrp->Blink = &p_ListEntry->ListEntry;
}
