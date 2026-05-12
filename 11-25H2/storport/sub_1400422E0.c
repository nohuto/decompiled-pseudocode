/*
 * XREFs of sub_1400422E0 @ 0x1400422E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 */

void __fastcall sub_1400422E0(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)sub_14000D4EC(v4) )
    sub_14000C020(v4, 0);
}
