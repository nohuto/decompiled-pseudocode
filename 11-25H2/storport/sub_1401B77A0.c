/*
 * XREFs of sub_1401B77A0 @ 0x1401B77A0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortStallExecution @ 0x1400369E0 (StorPortStallExecution.c)
 */

void __fastcall sub_1401B77A0(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)BugCheckParameter2 > 0x186A0 )
    KeBugCheckEx(0xF1u, 0x2001uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
  StorPortStallExecution(BugCheckParameter2);
}
