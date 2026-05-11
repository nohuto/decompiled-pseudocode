/*
 * XREFs of ?staticCsqPeekNextIrp@CSidebandDevice@@SAPEAU_IRP@@PEAU_IO_CSQ@@PEAU2@PEAX@Z @ 0x140014CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall CSidebandDevice::staticCsqPeekNextIrp(
        PIO_CSQ Csq,
        PIRP Irp,
        struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *PeekContext)
{
  struct _LIST_ENTRY **result; // rax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdx
  struct _LIST_ENTRY *Flink; // rdx

  result = 0LL;
  if ( Irp )
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
  else
    p_ListEntry = PeekContext;
  Flink = p_ListEntry->ListEntry.Flink;
  if ( Flink != (struct _LIST_ENTRY *)PeekContext )
    return &Flink[-11].Blink;
  return result;
}
