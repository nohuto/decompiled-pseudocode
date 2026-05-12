/*
 * XREFs of sub_1400E0040 @ 0x1400E0040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1400E0040(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
}
