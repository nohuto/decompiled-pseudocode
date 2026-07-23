/*
 * XREFs of WheapPfaRetireExpiredMemoryEntries @ 0x1408506D4
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1408503FC (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheapPfaLogPageMonitorRemoval @ 0x140850368 (WheapPfaLogPageMonitorRemoval.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WheapPfaRetireExpiredMemoryEntries(unsigned __int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  struct _KTHREAD *Blink; // rbx
  unsigned __int64 v5; // rsi
  struct _KTHREAD *v6; // rdi
  struct _LIST_ENTRY *Flink; // rax

  v2 = *(unsigned int *)off_140E09438;
  if ( (_DWORD)v2 )
  {
    v3 = 10000000 * v2;
    if ( a1 >= v3 )
    {
      Blink = (struct _KTHREAD *)WheapPfaLock.Header.WaitListHead.Blink;
      v5 = a1 - v3;
      while ( Blink != (struct _KTHREAD *)&WheapPfaLock.Header.WaitListHead.Blink )
      {
        v6 = Blink;
        Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
        if ( v6->QuantumTarget <= v5 )
        {
          if ( (struct _KTHREAD *)Blink->Header.WaitListHead.Flink != v6
            || (Flink = v6->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != v6) )
          {
            __fastfail(3u);
          }
          Flink->Flink = (struct _LIST_ENTRY *)Blink;
          Blink->Header.WaitListHead.Flink = Flink;
          WheapPfaLogPageMonitorRemoval((__int64)v6, 2, a1);
          ExFreePoolWithTag(v6, 0x61656857u);
        }
      }
    }
  }
}
