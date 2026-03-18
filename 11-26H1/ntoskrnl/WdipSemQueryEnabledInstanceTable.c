/*
 * XREFs of WdipSemQueryEnabledInstanceTable @ 0x140ADB08C
 * Callers:
 *     WdipSemReserveInstanceTableEntry @ 0x140ADAF30 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140B56724 (WdipSemMarkInstanceForDeletion.c)
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
    for ( i = (struct _KTHREAD *)stru_140F03F40.WaitBlock[0].WaitListEntry.Flink;
          &stru_140F03F40.320 != ($21A6EA393ADDDF0D13424531359FF08A *)i;
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
