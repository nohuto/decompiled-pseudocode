/*
 * XREFs of CsqPeekNextIrp @ 0x140131620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall CsqPeekNextIrp(PIO_CSQ Csq, PIRP Irp, PVOID PeekContext)
{
  __int64 v3; // r8
  PIO_CSQ_INSERT_IRP *p_CsqInsertIrp; // rax

  v3 = 0LL;
  if ( Csq )
  {
    if ( Csq != (PIO_CSQ)80 )
    {
      p_CsqInsertIrp = &Csq[1].CsqInsertIrp;
      if ( (char *)*p_CsqInsertIrp != (char *)p_CsqInsertIrp )
      {
        if ( Irp )
          return &Irp->Tail.Overlay.ListEntry.Flink[-11].Blink;
        else
          return (struct _LIST_ENTRY **)((char *)*p_CsqInsertIrp - 168);
      }
    }
  }
  return (struct _LIST_ENTRY **)v3;
}
