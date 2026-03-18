/*
 * XREFs of PsTlsFree @ 0x1407FD0B0
 * Callers:
 *     PsTlsAlloc @ 0x1407FD050 (PsTlsAlloc.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     RtlpFlsFree @ 0x140809A84 (RtlpFlsFree.c)
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
