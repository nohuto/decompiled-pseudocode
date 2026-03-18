/*
 * XREFs of ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140335D20
 * Callers:
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x140335CBC (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140336618 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 */

void __fastcall KiInsertSchedulingGroupQueue(struct _KPRCB *a1, struct _KSCB *a2, __int64 a3)
{
  _KSCB *Parent; // r10
  char v4; // di
  _RTL_RB_TREE *p_ChildScbQueue; // r10
  unsigned __int64 Root; // rdx
  unsigned int Rank; // r11d
  int v9; // eax
  unsigned int ReadySummary; // eax
  int v11; // r9d
  int v12; // eax
  _RTL_BALANCED_NODE *v13; // rax

  Parent = a2->Parent;
  a2->PrcbLockFlags |= 1u;
  v4 = a3;
  if ( Parent )
  {
    p_ChildScbQueue = &Parent->ChildScbQueue;
  }
  else
  {
    p_ChildScbQueue = &a1->ScbQueue;
    if ( !a1->ScbQueue.Root && !a1->ReadyThreadCount )
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
  }
  Root = (unsigned __int64)p_ChildScbQueue->Root;
  if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)p_ChildScbQueue;
    else
      Root = 0LL;
  }
  LOBYTE(a3) = 0;
  if ( Root )
  {
    Rank = a2->Rank;
    while ( 1 )
    {
      v9 = Rank - *(_DWORD *)(Root + 36);
      if ( Rank != *(_DWORD *)(Root + 36) )
        goto LABEL_13;
      ReadySummary = a2->ReadySummary;
      if ( (_WORD)ReadySummary )
        break;
      if ( Rank || a2->GenerationCycles > *(_QWORD *)(Root - 104) )
      {
LABEL_21:
        v13 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_23;
          v13 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v13);
        }
        if ( !v13 )
        {
LABEL_23:
          LOBYTE(a3) = 1;
          goto LABEL_24;
        }
        goto LABEL_18;
      }
LABEL_14:
      v13 = *(_RTL_BALANCED_NODE **)Root;
      if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_34;
        v13 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v13);
      }
      if ( !v13 )
      {
LABEL_34:
        LOBYTE(a3) = 0;
        goto LABEL_24;
      }
LABEL_18:
      Root = (unsigned __int64)v13;
    }
    a3 = *(unsigned __int16 *)(Root + 32);
    _BitScanReverse((unsigned int *)&v11, ReadySummary);
    v12 = 0;
    if ( (_WORD)a3 )
      _BitScanReverse((unsigned int *)&v12, a3);
    v9 = v12 - v11;
LABEL_13:
    if ( v9 >= 0 )
      goto LABEL_21;
    goto LABEL_14;
  }
LABEL_24:
  RtlRbInsertNodeEx(p_ChildScbQueue, Root, a3, &a2->QueueNode);
  if ( v4 )
    a2->InsertTime = MEMORY[0xFFFFF78000000008];
}
