/*
 * XREFs of sub_140134308 @ 0x140134308
 * Callers:
 *     sub_1401A9C90 @ 0x1401A9C90 (sub_1401A9C90.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140134308(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)sub_1401342E0, DeferredContext);
}
