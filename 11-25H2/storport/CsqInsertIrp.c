/*
 * XREFs of CsqInsertIrp @ 0x1401315D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsqInsertIrp(struct _IO_CSQ *Csq, PIRP Irp)
{
  PIO_CSQ_COMPLETE_CANCELED_IRP *p_CsqCompleteCanceledIrp; // rax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rcx
  struct _LIST_ENTRY *v4; // r8

  if ( Csq )
  {
    if ( Irp )
    {
      p_CsqCompleteCanceledIrp = &Csq[-2].CsqCompleteCanceledIrp;
      if ( Csq != (struct _IO_CSQ *)80 )
      {
        p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
        v4 = (struct _LIST_ENTRY *)p_CsqCompleteCanceledIrp[20];
        if ( (PIO_CSQ_COMPLETE_CANCELED_IRP *)v4->Flink != p_CsqCompleteCanceledIrp + 19 )
          __fastfail(3u);
        p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(p_CsqCompleteCanceledIrp + 19);
        Irp->Tail.Overlay.ListEntry.Blink = v4;
        v4->Flink = &p_ListEntry->ListEntry;
        p_CsqCompleteCanceledIrp[20] = (PIO_CSQ_COMPLETE_CANCELED_IRP)p_ListEntry;
        _InterlockedIncrement16((volatile signed __int16 *)p_CsqCompleteCanceledIrp + 18);
      }
    }
  }
}
