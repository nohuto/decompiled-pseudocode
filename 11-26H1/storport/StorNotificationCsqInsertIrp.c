/*
 * XREFs of StorNotificationCsqInsertIrp @ 0x14012CB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorNotificationCsqInsertIrp(struct _IO_CSQ *Csq, PIRP Irp)
{
  void (__fastcall *v2)(_IO_CSQ *, _IRP *); // rax
  _LIST_ENTRY *CsqRemoveIrp; // r8

  if ( Csq && Irp && Csq != (struct _IO_CSQ *)80 )
  {
    v2 = (void (__fastcall *)(_IO_CSQ *, _IRP *))(&Irp->Tail.CompletionKey + 6);
    CsqRemoveIrp = (_LIST_ENTRY *)Csq[1].CsqRemoveIrp;
    if ( (void (__fastcall **)(_IO_CSQ *, _IRP *))CsqRemoveIrp->Flink != &Csq[1].CsqInsertIrp )
      __fastfail(3u);
    *(_QWORD *)v2 = (char *)Csq + 72;
    Irp->Tail.Overlay.ListEntry.Blink = CsqRemoveIrp;
    CsqRemoveIrp->Flink = (_LIST_ENTRY *)v2;
    Csq[1].CsqRemoveIrp = v2;
    _InterlockedIncrement16((volatile signed __int16 *)&Csq[-1].CsqRemoveIrp + 2);
  }
}
