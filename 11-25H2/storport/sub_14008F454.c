/*
 * XREFs of sub_14008F454 @ 0x14008F454
 * Callers:
 *     sub_14008A698 @ 0x14008A698 (sub_14008A698.c)
 *     sub_140130F80 @ 0x140130F80 (sub_140130F80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14008F454(__int64 a1, struct _LIST_ENTRY *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      return (unsigned int)-1073741436;
    }
    else
    {
      ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 128), a2, (PKSPIN_LOCK)(a1 + 144));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 152)) == 1 )
      {
        KeClearEvent((PRKEVENT)(a1 + 168));
        IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 160), sub_1401A8380, DelayedWorkQueue, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
