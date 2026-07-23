/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140830604
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 */

struct _LIST_ENTRY **EtwpInitializeStackLookasideList()
{
  struct _LIST_ENTRY **result; // rax

  result = &stru_140E285C0.ThreadListEntry.Blink;
  if ( ((unsigned __int8)&stru_140E285C0.ThreadListEntry.Blink & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E285C0.MutantListHead.Blink = 0LL;
  *(_OWORD *)&stru_140E285C0.ThreadListEntry.Blink = 0LL;
  return result;
}
