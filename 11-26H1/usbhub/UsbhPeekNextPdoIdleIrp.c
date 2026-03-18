/*
 * XREFs of UsbhPeekNextPdoIdleIrp @ 0x140035670
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoIdleIrp(PIO_CSQ Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  _LIST_ENTRY **p_CsqCompleteCanceledIrp; // r8
  _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  if ( Csq == (PIO_CSQ)1464 )
    UsbhTrapFatal_Dbg(MEMORY[0x4A0], 1464LL);
  p_CsqCompleteCanceledIrp = (_LIST_ENTRY **)&Csq[-1].CsqCompleteCanceledIrp;
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = *p_CsqCompleteCanceledIrp;
  while ( Flink != (_LIST_ENTRY *)p_CsqCompleteCanceledIrp )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(Csq[-5].CsqReleaseLock, Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(Csq[-5].CsqReleaseLock, Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
