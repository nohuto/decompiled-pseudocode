/*
 * XREFs of ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14043E8C0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x14043D434 (KeSetSchedulingGroupRankBias.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14043E6EC (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 * Callees:
 *     EtwTraceReadyQueueInsertion @ 0x1402260FC (EtwTraceReadyQueueInsertion.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 */

void __fastcall KiMoveScbThreadsToNewReadylist(
        struct _KSCB *a1,
        struct _KSCB *a2,
        struct _KPRCB *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  bool v5; // r13
  char v6; // bp
  char v7; // r15
  unsigned int ReadySummary; // edi
  _LIST_ENTRY *ReadyListHead; // r12
  __int64 v12; // rax
  _LIST_ENTRY *v13; // r10
  _LIST_ENTRY *Flink; // r11
  __int64 p_Blink; // rdx
  bool v16; // zf
  __int64 v17; // rdx
  int v18; // r10d
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // r11
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // r11
  _LIST_ENTRY *v26; // [rsp+30h] [rbp-58h]
  _LIST_ENTRY *v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+98h] [rbp+10h]
  struct _SINGLE_LIST_ENTRY *v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v30 = 0;
  ReadySummary = a1->ReadySummary;
  ReadyListHead = 0LL;
  if ( a2 )
  {
    a2->ReadySummary |= ReadySummary;
    ReadyListHead = a2->ReadyListHead;
    v7 = 1;
  }
  else if ( a3 )
  {
    v6 = 1;
  }
  else
  {
    v5 = a4 != 0LL;
  }
  for ( ; ReadySummary; v13->Flink = v13 )
  {
    _BitScanReverse((unsigned int *)&v12, ReadySummary);
    v29 = v12;
    v31 = ReadySummary ^ (1 << v12);
    v13 = &a1->ReadyListHead[v12];
    v26 = v13;
    Flink = v13->Flink;
    do
    {
      p_Blink = (__int64)&Flink[-14].Blink;
      v28 = (__int64)&Flink[-14].Blink;
      if ( v7 )
      {
        *(_QWORD *)(p_Blink + 944) = a2;
      }
      else
      {
        *(_DWORD *)(p_Blink + 116) &= ~0x2000u;
        v16 = (*(_DWORD *)(p_Blink + 120) & 0x400000) == 0;
        *(_QWORD *)(p_Blink + 944) = 0LL;
        if ( !v16 )
          _InterlockedAnd(*(volatile signed __int32 **)(p_Blink + 968), 0xFFFBFFFF);
      }
      Flink = Flink->Flink;
      v27 = Flink;
      if ( v5 )
      {
        KiInsertDeferredReadyList((__int64 *)a4, p_Blink);
      }
      else if ( v6 )
      {
        if ( KiIsThreadConstrainedBySchedulingGroup(p_Blink) && !KiCheckForMaxOverQuotaScb((__int64)a1) )
        {
          do
          {
            v20 += *(_DWORD *)(v19 + 140);
            if ( v21 )
            {
              v18 += **(_DWORD **)(v19 + 144);
            }
            else if ( v20 )
            {
              break;
            }
            v19 = *(_QWORD *)(v19 + 440);
          }
          while ( v19 );
        }
        KiAddThreadToPrcbQueue((__int64)a3, v17, (unsigned int)*(char *)(v17 + 195), 0, v18 != 0, &v30);
        if ( (WORD2(xmmword_140FC0C10) & 0x800) != 0 )
          EtwTraceReadyQueueInsertion(v28, a3->Number, v30, 0LL);
        Flink = v27;
        v13 = v26;
        a4 = v32;
      }
    }
    while ( Flink != v13 );
    ReadySummary = v31;
    if ( v7 )
    {
      v22 = v13->Flink;
      Blink = v13->Blink;
      if ( v13->Flink->Blink != v13
        || Blink->Flink != v13
        || (Blink->Flink = v22, v22->Blink = Blink,
                                v24 = &ReadyListHead[v29],
                                v25 = v24->Blink,
                                v24->Flink->Blink != v24)
        || v25->Flink != v24
        || v22->Flink->Blink != v22
        || Blink->Flink != v22 )
      {
        __fastfail(3u);
      }
      v25->Flink = v22;
      v24->Blink = v22->Blink;
      v22->Blink->Flink = v24;
      v22->Blink = v25;
    }
    v13->Blink = v13;
  }
  a1->ReadySummary = 0;
}
