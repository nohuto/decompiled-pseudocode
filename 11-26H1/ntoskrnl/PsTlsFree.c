/*
 * XREFs of PsTlsFree @ 0x140802AE0
 * Callers:
 *     PsTlsAlloc @ 0x140802A80 (PsTlsAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     RtlpFlsFree @ 0x14080F514 (RtlpFlsFree.c)
 */

void __fastcall PsTlsFree(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( (int)RtlpFlsFree(a1, (unsigned int)a1) < 0 )
    __fastfail(0x46u);
  KeLeaveGuardedRegion();
}
