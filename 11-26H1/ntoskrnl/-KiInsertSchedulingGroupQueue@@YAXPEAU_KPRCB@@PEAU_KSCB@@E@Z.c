/*
 * XREFs of ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140337D50
 * Callers:
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x140337CEC (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

void __fastcall KiInsertSchedulingGroupQueue(struct _KPRCB *a1, struct _KSCB *a2, char a3)
{
  _KSCB *Parent; // r10
  _RTL_RB_TREE *p_ChildScbQueue; // r10
  unsigned __int64 Root; // rdx
  BOOLEAN v8; // r8
  unsigned int Rank; // r11d
  int v10; // eax
  unsigned int ReadySummary; // eax
  unsigned int v12; // r8d
  int v13; // r9d
  int v14; // eax
  _RTL_BALANCED_NODE *v15; // rax

  Parent = a2->Parent;
  a2->PrcbLockFlags |= 1u;
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
  v8 = 0;
  if ( Root )
  {
    Rank = a2->Rank;
    while ( 1 )
    {
      v10 = Rank - *(_DWORD *)(Root + 36);
      if ( Rank != *(_DWORD *)(Root + 36) )
        goto LABEL_13;
      ReadySummary = a2->ReadySummary;
      if ( (_WORD)ReadySummary )
        break;
      if ( Rank || a2->GenerationCycles > *(_QWORD *)(Root - 104) )
      {
LABEL_21:
        v15 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_23;
          v15 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v15);
        }
        if ( !v15 )
        {
LABEL_23:
          v8 = 1;
          goto LABEL_24;
        }
        goto LABEL_18;
      }
LABEL_14:
      v15 = *(_RTL_BALANCED_NODE **)Root;
      if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_34;
        v15 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v15);
      }
      if ( !v15 )
      {
LABEL_34:
        v8 = 0;
        goto LABEL_24;
      }
LABEL_18:
      Root = (unsigned __int64)v15;
    }
    v12 = *(unsigned __int16 *)(Root + 32);
    _BitScanReverse((unsigned int *)&v13, ReadySummary);
    v14 = 0;
    if ( (_WORD)v12 )
      _BitScanReverse((unsigned int *)&v14, v12);
    v10 = v14 - v13;
LABEL_13:
    if ( v10 >= 0 )
      goto LABEL_21;
    goto LABEL_14;
  }
LABEL_24:
  RtlRbInsertNodeEx(p_ChildScbQueue, (PRTL_BALANCED_NODE)Root, v8, &a2->QueueNode);
  if ( a3 )
    a2->InsertTime = MEMORY[0xFFFFF78000000008];
}
