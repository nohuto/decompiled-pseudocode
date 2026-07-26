/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1400302B0
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x140030330 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx
  struct _KDPC *v1; // r8

  if ( !_InterlockedExchange((volatile __int32 *)qword_14011D438 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0.QuadPart = -1LL;
    v1 = (struct _KDPC *)((char *)qword_14011D430 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
    if ( DueTime.QuadPart )
      v0 = DueTime;
    KeSetTimer((PKTIMER)qword_14011D430 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number, v0, v1);
  }
}
