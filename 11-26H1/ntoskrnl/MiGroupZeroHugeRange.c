/*
 * XREFs of MiGroupZeroHugeRange @ 0x140709CF4
 * Callers:
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 *     MiUseThreads @ 0x1403CD544 (MiUseThreads.c)
 *     MiDereferencePageChains @ 0x1403CD5A4 (MiDereferencePageChains.c)
 *     KeIsThreadedDpcThread @ 0x14047AFA4 (KeIsThreadedDpcThread.c)
 *     MiSoloZeroHugeRange @ 0x14070A054 (MiSoloZeroHugeRange.c)
 */

void __fastcall MiGroupZeroHugeRange(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4, unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // eax
  volatile signed __int32 *PageChains; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( !a2
    || KeGetCurrentIrql() == 2
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || (MiFlags & 0x30) == 0
    || *(_DWORD *)(a1 + 92)
    || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0
    || KeIsThreadedDpcThread((__int64)CurrentThread)
    || (v10 = MiPageToNode(a3),
        PageChains = (volatile signed __int32 *)MiCreatePageChains(a1, v10, a4, 24LL, 1),
        (v12 = PageChains) == 0LL) )
  {
    MiSoloZeroHugeRange(a2, a3, a4, a5);
  }
  else
  {
    v13 = *((_QWORD *)PageChains + 62);
    *(_DWORD *)(v13 + 16) = a5;
    *(_QWORD *)v13 = a2;
    *(_QWORD *)(v13 + 8) = a3;
    *((_QWORD *)PageChains + 65) = 512LL;
    *((_QWORD *)PageChains + 63) = MiZeroHugeRangeWorker;
    MiUseThreads((__int64)PageChains);
    MiDereferencePageChains(v12);
  }
}
