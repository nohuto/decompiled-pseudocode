/*
 * XREFs of sub_140065E20 @ 0x140065E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 */

void __fastcall sub_140065E20(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( !(unsigned int)sub_14000D2F0(v4, 0, 0) )
    sub_14000C6B0(v4, 0);
}
