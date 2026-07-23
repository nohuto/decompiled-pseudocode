/*
 * XREFs of AlpcpLocateMessageLog @ 0x140B427D8
 * Callers:
 *     AlpcpEnterFreeEventMessageLog @ 0x140B42720 (AlpcpEnterFreeEventMessageLog.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall AlpcpLocateMessageLog(unsigned int a1)
{
  struct _LIST_ENTRY *v2; // rax
  struct _LIST_ENTRY *i; // rcx

  if ( AlpcpMessageLogLock.Header.WaitListHead.Flink )
  {
    v2 = &AlpcpMessageLogLock.Header.WaitListHead.Flink[(a1 >> 2) & 0x3FF];
    for ( i = v2->Blink; i != v2; i = i->Blink )
    {
      if ( HIDWORD(i[1].Blink) && LODWORD(i[1].Blink) == a1 )
        return i - 1;
    }
  }
  return 0LL;
}
