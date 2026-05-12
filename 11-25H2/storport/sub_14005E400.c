/*
 * XREFs of sub_14005E400 @ 0x14005E400
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 */

void __fastcall sub_14005E400(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  sub_14000C6B0(DeferredContext[8], 0);
}
