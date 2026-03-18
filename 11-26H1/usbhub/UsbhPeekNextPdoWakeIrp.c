/*
 * XREFs of UsbhPeekNextPdoWakeIrp @ 0x140036BE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoWakeIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  _LIST_ENTRY *v4; // rdx
  _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  if ( Irp )
  {
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
    v4 = (_LIST_ENTRY *)(Csq - 16);
  }
  else
  {
    v4 = (_LIST_ENTRY *)(Csq - 16);
    Flink = (_LIST_ENTRY *)*((_QWORD *)Csq - 2);
  }
  while ( Flink != v4 )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(*((_QWORD *)Csq - 137), Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(*((_QWORD *)Csq - 137), Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
