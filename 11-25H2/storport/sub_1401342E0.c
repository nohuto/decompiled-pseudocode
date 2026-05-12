/*
 * XREFs of sub_1401342E0 @ 0x1401342E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140134250 @ 0x140134250 (sub_140134250.c)
 */

void __fastcall sub_1401342E0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  sub_140134250(*((PVOID *)DeferredContext + 1), (PSLIST_HEADER)DeferredContext + 4);
  _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 21);
}
