/*
 * XREFs of sub_140123D54 @ 0x140123D54
 * Callers:
 *     sub_1401269C0 @ 0x1401269C0 (sub_1401269C0.c)
 * Callees:
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 */

void __fastcall sub_140123D54(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        volatile signed __int32 *SystemArgument1,
        char *SystemArgument2)
{
  KIRQL v8; // bl

  v8 = KfRaiseIrql(2u);
  sub_140115650(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
  KeLowerIrql(v8);
}
