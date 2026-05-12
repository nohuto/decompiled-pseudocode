/*
 * XREFs of StorNotificationCsqRemoveIrp @ 0x14012CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorNotificationCsqRemoveIrp(PIO_CSQ Csq, PIRP Irp)
{
  volatile signed __int16 *p_CsqCompleteCanceledIrp; // rax
  _LIST_ENTRY *p_ListEntry; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rcx

  if ( Csq )
  {
    if ( Irp )
    {
      p_CsqCompleteCanceledIrp = (volatile signed __int16 *)&Csq[-2].CsqCompleteCanceledIrp;
      if ( Csq != (PIO_CSQ)80 )
      {
        p_ListEntry = &Irp->Tail.Overlay.ListEntry;
        Flink = p_ListEntry->Flink;
        if ( p_ListEntry->Flink->Blink != p_ListEntry || (Blink = p_ListEntry->Blink, Blink->Flink != p_ListEntry) )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        _InterlockedDecrement16(p_CsqCompleteCanceledIrp + 18);
      }
    }
  }
}
