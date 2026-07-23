/*
 * XREFs of MiInitializeInPageSupport @ 0x140398FF0
 * Callers:
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     MiPfIssueCoalescedSupport @ 0x1404C5220 (MiPfIssueCoalescedSupport.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MiGetReadyInPageBlock @ 0x140B3EB1C (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

int __fastcall MiInitializeInPageSupport(struct _LIST_ENTRY *a1, char a2, volatile signed __int64 *a3)
{
  char v6; // di
  unsigned __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int Queue; // ecx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned int v12; // edx

  *a1 = 0LL;
  BYTE3(a1[2].Flink) = 0;
  BYTE3(a1[3].Blink) = 0;
  v6 = 0;
  memset_0(&a1[5], 0, 0x60uLL);
  memset_0((char *)&a1[11].Flink + 4, 0, 0x8CuLL);
  LOWORD(a1[2].Flink) = 0;
  BYTE2(a1[2].Flink) = 6;
  HIDWORD(a1[2].Flink) = 0;
  a1[3].Flink = (struct _LIST_ENTRY *)((char *)a1 + 40);
  a1[2].Blink = (struct _LIST_ENTRY *)((char *)a1 + 40);
  LOWORD(a1[3].Blink) = 0;
  BYTE2(a1[3].Blink) = 6;
  HIDWORD(a1[3].Blink) = 0;
  a1[4].Blink = a1 + 4;
  a1[4].Flink = a1 + 4;
  LODWORD(v7) = 0;
  LODWORD(a1[11].Flink) = 1;
  if ( (a2 & 1) != 0 )
    LODWORD(v7) = 256;
  a1[1].Blink = a1 + 1;
  a1[1].Flink = a1 + 1;
  CurrentThread = KeGetCurrentThread();
  a1[9].Blink = (struct _LIST_ENTRY *)CurrentThread;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v10 = (Queue >> 9) & 7;
  }
  else
  {
    v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v11 = CurrentThread->Process[1].Padding[3];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 1092);
      if ( v10 >= v12 )
        v10 = v12;
    }
  }
  if ( v10 > 5 )
  {
    LOBYTE(v10) = 5;
    v6 = 5;
  }
  else
  {
    LODWORD(v7) = v7 | 0x100000;
    if ( v10 )
      v6 = v10 - 1;
  }
  HIDWORD(a1[11].Blink) = v7 | ((v10 & 7 | (8 * (v6 & 7))) << 11);
  if ( (a2 & 2) == 0 )
  {
    if ( a3 && _InterlockedIncrement64(a3) <= 1 )
      __fastfail(0xEu);
    goto LABEL_15;
  }
  v7 = KeAbPreAcquire((__int64)a1, 0LL, 0LL, (struct _KLOCK_ENTRIES *)1);
  if ( !v7 )
  {
LABEL_15:
    a1[14].Flink = (struct _LIST_ENTRY *)a3;
    return v7;
  }
  if ( (KiAbpGlobalState & 1) != 0 )
    *(_BYTE *)(v7 + 33) |= 2u;
  else
    *(_BYTE *)(v7 + 10) = 1;
  a1[14].Flink = a1;
  return v7;
}
