/*
 * XREFs of MiRebuildLargePages @ 0x1402AA1C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiNodeFreeZeroPages @ 0x14028E530 (MiNodeFreeZeroPages.c)
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiGetNodeStandbyPageCount @ 0x1402AAAA8 (MiGetNodeStandbyPageCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiRebuildLargePages(struct _KTHREAD *a1)
{
  struct _LIST_ENTRY *Flink; // r12
  unsigned __int64 v2; // r13
  struct _KTHREAD *v3; // rbx
  char v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 *v10; // r10
  struct _KLOCK_ENTRIES *p_Blink; // r9
  __int64 v12; // r11
  _KLOCK_ENTRY_BOOST_BITMAP v13; // rcx
  _KTHREAD *Thread; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // r11
  unsigned __int64 v18; // rsi
  unsigned __int8 v19; // r12
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r10
  __int64 NodeStandbyPageCount; // rax
  __int64 v25; // r10
  unsigned __int8 v26; // r11
  unsigned __int64 v27; // rdx
  volatile LONG *v28; // rbp
  unsigned __int64 v30; // rax
  volatile unsigned __int8 *v31; // rdx
  unsigned int v32; // r9d
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // al
  unsigned __int64 v38; // [rsp+30h] [rbp-58h]
  char v39; // [rsp+90h] [rbp+8h]
  __int64 v40; // [rsp+98h] [rbp+10h]
  unsigned __int64 v41; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v42; // [rsp+A8h] [rbp+20h]

  Flink = a1[11].QueueListEntry.Flink;
  v2 = 0LL;
  v40 = (__int64)Flink;
  v3 = a1;
  v4 = 8;
  v5 = (unsigned __int128)(((char *)a1 - (char *)Flink[1].Flink) * (__int128)0x4A7904A7904A7905LL) >> 64;
  v6 = ((char *)a1 - (char *)Flink[1].Flink) / 56320;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v5);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v3[11].ThreadListEntry.Flink + 1);
  BYTE1(v3[3].LastXStateSaveDebugInfo) = 2;
  v38 = *(_QWORD *)&v3[11].ThreadFlags2;
  v39 = BYTE3(v3[3].LastXStateSaveDebugInfo);
  v8 = v38 / 0xC8;
  if ( v38 / 0xC8 < (-(__int64)(v39 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
    goto LABEL_22;
  v9 = 0LL;
  v10 = MiPageSizes;
  p_Blink = (struct _KLOCK_ENTRIES *)&v3->Header.WaitListHead.Blink;
  v12 = 3LL;
  do
  {
    v13.AllFields = (unsigned __int64)p_Blink[-1].Entries[0].BoostBitmap;
    Thread = p_Blink->Thread;
    p_Blink = (struct _KLOCK_ENTRIES *)((char *)p_Blink + 1024);
    v15 = *v10;
    v16 = *v10++ * ((_QWORD)Thread + v13.AllFields);
    v9 += v16;
    --v12;
  }
  while ( v12 );
  if ( v9 >= v8 )
    goto LABEL_22;
  v17 = byte_140E2D898;
  v18 = v8 - v9;
  v19 = 0;
  v41 = 0LL;
  if ( byte_140E2D898 )
  {
    v20 = 0LL;
    do
    {
      LOBYTE(v16) = v19;
      v21 = MiNodeFreeZeroPages((__int64)v3, v16, 0);
      v17 = byte_140E2D898;
      v20 += v21;
      ++v19;
    }
    while ( v19 < (unsigned __int8)byte_140E2D898 );
    v41 = v20;
    CurrentIrql = v42;
  }
  v22 = v41;
  if ( v41 < v18 )
  {
    if ( v9 >= 0x400 )
      goto LABEL_21;
    v23 = 0LL;
    LOBYTE(v15) = 0;
    if ( v17 )
    {
      do
      {
        NodeStandbyPageCount = MiGetNodeStandbyPageCount(v40, (unsigned int)v6, v15);
        v23 = NodeStandbyPageCount + v25;
        LOBYTE(v15) = v15 + 1;
      }
      while ( (unsigned __int8)v15 < v26 );
    }
    v27 = v38 < 0x5000A ? 0x8000LL : v38 / 0xA;
    if ( v23 <= v27 || (v22 = v41 + (v23 - v27) / 0xC8, v22 < v18) )
    {
LABEL_21:
      Flink = (struct _LIST_ENTRY *)v40;
LABEL_22:
      v28 = (volatile LONG *)&v3[11].ThreadListEntry.Flink + 1;
      goto LABEL_23;
    }
  }
  BYTE3(v3[3].LastXStateSaveDebugInfo) = 0;
  v30 = KeAbPreAcquire((__int64)v3, 0LL, 0LL, p_Blink);
  v2 = v30;
  if ( v30 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v31) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v30 + 33), v31, 1u, v32);
    }
    else
    {
      *(_BYTE *)(v30 + 10) = 1;
    }
  }
  v28 = (volatile LONG *)&v3[11].ThreadListEntry.Flink + 1;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v3[11].ThreadListEntry.Flink + 1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v33 = v22;
  Flink = (struct _LIST_ENTRY *)v40;
  v36 = MiRebuildLargePage(v40, v6, 2u, v33, 0);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v34) = 2;
    LOBYTE(v35) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v35, v34);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v3[11].ThreadListEntry.Flink + 1);
  if ( !v36 )
  {
    if ( v39 )
      BYTE3(v3[3].LastXStateSaveDebugInfo) = 1;
    v37 = BYTE2(v3[3].LastXStateSaveDebugInfo);
    if ( v37 >= 0x80u )
      v4 = -1;
    else
      v4 = 2 * v37;
  }
LABEL_23:
  BYTE2(v3[3].LastXStateSaveDebugInfo) = v4;
  LOBYTE(v3[3].LastXStateSaveDebugInfo) = v4;
  BYTE1(v3[3].LastXStateSaveDebugInfo) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v28);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v2 )
    KeAbPostRelease((unsigned __int64)v3);
  return PsDereferencePartition(Flink[16].Flink, 1884056909LL);
}
