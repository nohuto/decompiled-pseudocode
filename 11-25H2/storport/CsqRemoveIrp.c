/*
 * XREFs of CsqRemoveIrp @ 0x1401316A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsqRemoveIrp(char *Csq, PIRP Irp)
{
  volatile signed __int16 *v2; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx

  if ( Csq )
  {
    if ( Irp )
    {
      v2 = (volatile signed __int16 *)(Csq - 80);
      if ( v2 )
      {
        p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
        Flink = Irp->Tail.Overlay.ListEntry.Flink;
        if ( (PVOID *)Flink->Blink != &Irp->Tail.CompletionKey + 6
          || (Blink = Irp->Tail.Overlay.ListEntry.Blink,
              (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Blink->Flink != p_ListEntry) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        _InterlockedDecrement16(v2 + 18);
      }
    }
  }
}
