/*
 * XREFs of WdipSemQueryEnabledInstanceTable @ 0x140AD7B3C
 * Callers:
 *     WdipSemReserveInstanceTableEntry @ 0x140AD79E0 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140B59424 (WdipSemMarkInstanceForDeletion.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall WdipSemQueryEnabledInstanceTable(struct _LIST_ENTRY **a1)
{
  __int64 v1; // r8
  struct _KTHREAD *i; // rdx
  unsigned __int64 v5; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    for ( i = (struct _KTHREAD *)stru_140F049E8.SListFaultAddress;
          &stru_140F049E8.SListFaultAddress != (void **)i;
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      v5 = (char *)*a1 - (char *)i->Header.WaitListHead.Blink;
      if ( *a1 == i->Header.WaitListHead.Blink )
        v5 = (char *)a1[1] - (char *)i->SListFaultAddress;
      if ( !v5 )
        return i;
    }
  }
  return (struct _KTHREAD *)v1;
}
