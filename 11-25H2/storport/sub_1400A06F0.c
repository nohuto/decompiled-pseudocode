/*
 * XREFs of sub_1400A06F0 @ 0x1400A06F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 */

void __fastcall sub_1400A06F0(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  sub_14000C020(DeferredContext[8], 0);
}
