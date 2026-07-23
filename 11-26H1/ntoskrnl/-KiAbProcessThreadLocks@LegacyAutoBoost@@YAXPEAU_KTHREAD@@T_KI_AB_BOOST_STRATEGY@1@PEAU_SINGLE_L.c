/*
 * XREFs of ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC
 * Callers:
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbpDeferredProcessingWorker@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x14026FB90 (-KiAbpDeferredProcessingWorker@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?KiAbPropagateBoosts@LegacyAutoBoost@@YAXPEAU_SINGLE_LIST_ENTRY@@00@Z @ 0x14026FC5C (-KiAbPropagateBoosts@LegacyAutoBoost@@YAXPEAU_SINGLE_LIST_ENTRY@@00@Z.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 *     ?KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026DE68 (-KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z @ 0x14026E9C8 (-KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbCpuBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@CPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EAB0 (-KiAbCpuBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@CPEAU_SINGLE_LIST_ENTRY@@11@Z.c)
 *     ?KiAbIoBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@KPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EBB8 (-KiAbIoBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@KPEAU_SINGLE_LIST_ENTRY@@11@Z.c)
 *     ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026ECC4 (-KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14026F83C (-KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbDetermineMaxWaiterPriority@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@@Z @ 0x14026FB20 (-KiAbDetermineMaxWaiterPriority@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@@Z.c)
 *     KeAbThreadAreAllEntriesFree @ 0x140270FC4 (KeAbThreadAreAllEntriesFree.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299010 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     ?KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x1402998EC (-KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402D2680 (PsBoostThreadOutstandingIoQoS.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1404AAAAC (EtwTraceAutoBoostProcessLockEntry.c)
 */

void __fastcall LegacyAutoBoost::KiAbProcessThreadLocks(
        __int64 a1,
        char a2,
        struct LegacyAutoBoost::_AB_PRIORITY *a3,
        struct _KTHREAD *a4,
        struct _SINGLE_LIST_ENTRY *a5)
{
  __int64 v6; // rbx
  _RTL_BALANCED_NODE *v7; // r8
  _KLOCK_ENTRY_LOCK_STATE v8; // r9
  unsigned int v9; // r10d
  unsigned __int64 Right_low; // rdx
  unsigned __int64 v11; // r11
  unsigned int Root; // esi
  unsigned int v13; // ecx
  int v14; // r15d
  unsigned int SpareFlags; // r12d
  __int64 v16; // rcx
  LegacyAutoBoost *v17; // rsi
  __int64 v18; // rax
  signed __int8 v19; // al
  char v20; // r9
  bool v21; // zf
  _RTL_BALANCED_NODE *v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // eax
  int v25; // esi
  unsigned int v26; // esi
  unsigned int v27; // ecx
  unsigned int v28; // r15d
  int v29; // r12d
  __int64 v30; // rcx
  LegacyAutoBoost *v31; // rsi
  __int64 v32; // rax
  signed __int8 v33; // al
  char v34; // r9
  bool v35; // zf
  unsigned int EntryFlags; // r13d
  unsigned int v37; // ebx
  unsigned __int64 v38; // rax
  struct _KLOCK_ENTRY *v39; // r8
  struct _KLOCK_ENTRY *LockedHeadEntry; // r14
  KSPIN_LOCK *v41; // r14
  _RTL_BALANCED_NODE *Min; // r15
  char v43; // r15
  signed __int8 v44; // al
  char v45; // dl
  struct _KLOCK_ENTRY *v46; // rdx
  struct _KLOCK_ENTRY *v47; // rdx
  unsigned int v48; // r10d
  char CpuPriorityKey; // r12
  struct _KLOCK_ENTRY *v50; // r8
  int v51; // r13d
  unsigned int v52; // ebx
  unsigned __int64 v53; // rax
  struct _KLOCK_ENTRY *v54; // r8
  struct _KLOCK_ENTRY *v55; // r14
  KSPIN_LOCK *v56; // r14
  _RTL_BALANCED_NODE *v57; // r15
  char v58; // r15
  signed __int8 v59; // al
  char v60; // dl
  struct _KLOCK_ENTRY *v61; // rdx
  struct _KLOCK_ENTRY *v62; // rdx
  unsigned int v63; // r10d
  char v64; // r12
  struct _KLOCK_ENTRY *v65; // r8
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  struct _KLOCK_ENTRY var50; // [rsp+30h] [rbp-50h] BYREF

  v6 = a1;
  if ( (unsigned int)KeAbThreadAreAllEntriesFree(a1) )
    return;
  v7 = *(_RTL_BALANCED_NODE **)(v6 + 1136);
  var50.TreeNode.Children[1] = v7;
  v8.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(a2 & 1);
  var50.SpareFlags = 0;
  *(_DWORD *)&var50.LockState.0 = a2 & 1;
  v9 = 30;
  Right_low = LOWORD(v7->Right);
  v11 = 0x8000000000000000uLL;
  Root = (Right_low | WORD1(v7->Right)) ^ ((1LL << BYTE4(v7->Right)) - 1);
  v21 = !_BitScanForward(&v13, Root);
  if ( v21 )
  {
    *(_DWORD *)&var50.LockState.0 = a2 & 1;
    goto LABEL_19;
  }
  v14 = a2 & 2;
  SpareFlags = a2 & 4;
  LODWORD(var50.TreeNode.Children[0]) = v14;
  var50.SpareFlags = SpareFlags;
  do
  {
    v16 = 11LL * v13;
    var50.OwnerTree.Root = (_RTL_BALANCED_NODE *)((Root - 1) & Root);
    v17 = (LegacyAutoBoost *)((char *)&v7->16 + v16 * 8);
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 && (v18 & 2) == 0 && (!*(_BYTE *)&v8.0 || (v18 & 1) == 0) )
    {
      if ( v18 < 0 )
      {
        if ( v8.0 )
        {
          if ( (*((_BYTE *)v17 + 11) & 1) != 0 )
            goto LABEL_17;
          if ( !*((_BYTE *)v17 + 9) )
          {
            v19 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(
                    (LegacyAutoBoost *)((char *)&v7->16 + v16 * 8),
                    (struct _KLOCK_ENTRY *)Right_low);
            v21 = v19 == v20;
            v8.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(a2 & 1);
            if ( v21 )
            {
LABEL_55:
              v7 = var50.TreeNode.Children[1];
              goto LABEL_17;
            }
LABEL_42:
            EntryFlags = 0;
            *(_DWORD *)&var50.Reserved[3] = 0;
            v37 = (a2 & 7) << 6;
            v38 = *(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL;
            var50.EntryFlags = 0;
            var50.TreeNode.ParentValue = v38;
            memset((void *)(&var50.CpuPriorityKey + 8), 0, 24);
            if ( v38 && *((_BYTE *)v17 + 8) < 0x80u )
              var50.TreeNode.ParentValue = v11 | v38;
            LockedHeadEntry = LegacyAutoBoost::KiAbEntryGetLockedHeadEntry(
                                v17,
                                (struct _KLOCK_ENTRY *)*(_DWORD *)&v8.0,
                                (unsigned int)(&var50.CpuPriorityKey + 8),
                                (struct _KLOCK_QUEUE_HANDLE *)v8.LockState);
            if ( !LockedHeadEntry )
              goto LABEL_52;
            v37 |= *((_BYTE *)v17 + 9) != 0 ? 8 : 0;
            if ( !*((_BYTE *)v17 + 9) )
            {
              if ( v14 )
              {
                if ( v17 != (LegacyAutoBoost *)LockedHeadEntry )
                {
                  LegacyAutoBoost::KiAbEntryUpdateOwnerTreePosition(v17, LockedHeadEntry, v39);
                  v37 |= 0x10u;
                }
                LegacyAutoBoost::KiAbDetermineMaxWaiterPriority(
                  (LegacyAutoBoost *)LockedHeadEntry,
                  (struct _KLOCK_ENTRY *)&var50.Reserved[3],
                  (struct LegacyAutoBoost::_AB_PRIORITY *)v39);
                if ( !*(_DWORD *)&var50.Reserved[3] )
                {
                  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(&var50.CpuPriorityKey + 8));
                  v37 |= 1u;
LABEL_52:
                  if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 )
                    EtwTraceAutoBoostProcessLockEntry(
                      *((_QWORD *)v17 - 11 * (*((_BYTE *)v17 + 8) & 0x3F) - 2),
                      var50.TreeNode.ParentValue,
                      v37);
                  v8.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(a2 & 1);
                  SpareFlags = var50.SpareFlags;
                  v11 = 0x8000000000000000uLL;
                  v14 = (int)var50.TreeNode.Children[0];
                  v9 = 30;
                  goto LABEL_55;
                }
                if ( (unsigned int)LegacyAutoBoost::KiAbSetMinimumThreadPriority(
                                     (struct _KLOCK_ENTRY *)v17,
                                     (struct _KLOCK_ENTRY *)&var50.Reserved[3],
                                     a3,
                                     a4,
                                     a5,
                                     (struct _SINGLE_LIST_ENTRY *)&var50.8)
                  && v17 != (LegacyAutoBoost *)LockedHeadEntry )
                {
                  LegacyAutoBoost::KiAbEntryUpdateOwnerTreePosition(v17, LockedHeadEntry, v50);
                  v37 |= 0x20u;
                }
                EntryFlags = var50.EntryFlags;
              }
LABEL_57:
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(&var50.CpuPriorityKey + 8));
              if ( EntryFlags )
              {
                v41 = (KSPIN_LOCK *)*((_QWORD *)v17 - 11 * (*((_BYTE *)v17 + 8) & 0x3F) - 2);
                if ( ObReferenceObjectSafeWithTag((__int64)v41, 0x746C6644u) )
                {
                  if ( (EntryFlags & 1) != 0 )
                    IoBoostThreadIoPriority(v41, 2, 0x80000000);
                  if ( (EntryFlags & 2) != 0 )
                    PsBoostThreadOutstandingIoQoS(v41);
                  ObDereferenceObjectDeferDeleteWithTag(v41, 0x746C6644u);
                }
              }
              goto LABEL_52;
            }
            if ( !SpareFlags )
              goto LABEL_57;
            if ( v17 != (LegacyAutoBoost *)LockedHeadEntry )
            {
              LegacyAutoBoost::KiAbEntryUpdateWaiterTreePosition(v17, LockedHeadEntry, v39);
              v37 |= 0x20u;
            }
            Min = LockedHeadEntry->OwnerTree.Min;
            if ( Min )
              v43 = (char)Min[1].Children[0];
            else
              v43 = 30;
            if ( !LockedHeadEntry->WaitingByte )
            {
              v44 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(
                      (LegacyAutoBoost *)LockedHeadEntry,
                      (struct _KLOCK_ENTRY *)Right_low);
              v45 = v43;
              if ( v44 < v43 )
                v45 = v44;
              v43 = v45;
            }
            LegacyAutoBoost::KiAbTryIncrementIoWaiterCounts(v17, LockedHeadEntry, v39);
            CpuPriorityKey = LegacyAutoBoost::KiAbEntryGetCpuPriorityKey((struct _KLOCK_ENTRY *)v17, v46);
            if ( v43 < CpuPriorityKey )
            {
              if ( !v48 )
              {
LABEL_77:
                LOBYTE(v47) = CpuPriorityKey;
                LegacyAutoBoost::KiAbCpuBoostOwners(LockedHeadEntry, v47, a3, a4, a5);
                goto LABEL_57;
              }
            }
            else if ( !v48 )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(&var50.CpuPriorityKey + 8));
              v37 |= 2u;
              goto LABEL_52;
            }
            LegacyAutoBoost::KiAbIoBoostOwners(LockedHeadEntry, (struct _KLOCK_ENTRY *)v48, a3, a4, a5);
            goto LABEL_77;
          }
          v66 = *(unsigned __int8 *)(*((_QWORD *)&v7->Children[v16] - 11 * ((__int64)v7[1].Children[v16] & 0x3F)) + 195LL);
          Right_low = v66;
          if ( (char)v66 > (char)v9 )
            Right_low = v9;
          v21 = (_BYTE)Right_low == *((_BYTE *)v17 + 40);
        }
        else if ( *((_BYTE *)v17 + 9) )
        {
          v21 = SpareFlags == 0;
        }
        else
        {
          v21 = v14 == 0;
        }
        if ( v21 )
          goto LABEL_17;
        goto LABEL_42;
      }
      if ( !*(_BYTE *)&v8.0 )
        goto LABEL_17;
      goto LABEL_42;
    }
LABEL_17:
    Root = (unsigned int)var50.OwnerTree.Root;
    v21 = !_BitScanForward(&v13, (unsigned int)var50.OwnerTree.Root);
  }
  while ( !v21 );
  v6 = a1;
LABEL_19:
  v22 = *(_RTL_BALANCED_NODE **)(v6 + 1144);
  var50.TreeNode.Children[1] = v22;
  if ( v22 )
  {
    v23 = LOWORD(v22->Right);
    v24 = v23 | WORD1(v22->Right);
    v25 = (1LL << BYTE4(v22->Right)) - 1;
    var50.SpareFlags = 0;
    v26 = v24 ^ v25;
    v21 = !_BitScanForward(&v27, v26);
    if ( !v21 )
    {
      v28 = a2 & 2;
      v29 = a2 & 4;
      var50.SpareFlags = v28;
      LODWORD(var50.TreeNode.Children[0]) = v29;
      do
      {
        v30 = 11LL * v27;
        var50.OwnerTree.Root = (_RTL_BALANCED_NODE *)((v26 - 1) & v26);
        v31 = (LegacyAutoBoost *)((char *)&v22->16 + v30 * 8);
        v32 = *(_QWORD *)v31;
        if ( !*(_QWORD *)v31 || (v32 & 2) != 0 || *(_BYTE *)&v8.0 && (v32 & 1) != 0 )
          goto LABEL_34;
        if ( v32 >= 0 )
        {
          if ( v8.0 )
            goto LABEL_84;
        }
        else
        {
          if ( v8.0 )
          {
            if ( (*((_BYTE *)v31 + 11) & 1) != 0 )
              goto LABEL_34;
            if ( !*((_BYTE *)v31 + 9) )
            {
              v33 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(
                      (LegacyAutoBoost *)((char *)&v22->16 + v30 * 8),
                      (struct _KLOCK_ENTRY *)v23);
              if ( v33 == v34 )
                goto LABEL_97;
              v8.0 = var50.LockState.0;
LABEL_84:
              v51 = 0;
              var50.EntryFlags = 0;
              v52 = (a2 & 7) << 6;
              v53 = *(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL;
              *(_DWORD *)&var50.Reserved[3] = 0;
              var50.TreeNode.ParentValue = v53;
              memset((void *)(&var50.CpuPriorityKey + 8), 0, 24);
              if ( v53 && *((_BYTE *)v31 + 8) < 0x80u )
                var50.TreeNode.ParentValue = v11 | v53;
              v55 = LegacyAutoBoost::KiAbEntryGetLockedHeadEntry(
                      v31,
                      (struct _KLOCK_ENTRY *)*(_DWORD *)&v8.0,
                      (unsigned int)(&var50.CpuPriorityKey + 8),
                      (struct _KLOCK_QUEUE_HANDLE *)v8.LockState);
              if ( !v55 )
                goto LABEL_94;
              v52 |= *((_BYTE *)v31 + 9) != 0 ? 8 : 0;
              if ( !*((_BYTE *)v31 + 9) )
              {
                if ( v28 )
                {
                  if ( v31 != (LegacyAutoBoost *)v55 )
                  {
                    LegacyAutoBoost::KiAbEntryUpdateOwnerTreePosition(v31, v55, v54);
                    v52 |= 0x10u;
                  }
                  LegacyAutoBoost::KiAbDetermineMaxWaiterPriority(
                    (LegacyAutoBoost *)v55,
                    (struct _KLOCK_ENTRY *)&var50.8,
                    (struct LegacyAutoBoost::_AB_PRIORITY *)v54);
                  if ( !var50.EntryFlags )
                  {
                    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(&var50.CpuPriorityKey + 8));
                    v52 |= 1u;
                    goto LABEL_94;
                  }
                  if ( (unsigned int)LegacyAutoBoost::KiAbSetMinimumThreadPriority(
                                       (struct _KLOCK_ENTRY *)v31,
                                       (struct _KLOCK_ENTRY *)&var50.8,
                                       a3,
                                       a4,
                                       a5,
                                       (struct _SINGLE_LIST_ENTRY *)&var50.Reserved[3])
                    && v31 != (LegacyAutoBoost *)v55 )
                  {
                    LegacyAutoBoost::KiAbEntryUpdateOwnerTreePosition(v31, v55, v65);
                    v52 |= 0x20u;
                  }
                  v51 = *(_DWORD *)&var50.Reserved[3];
                }
LABEL_99:
                KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(&var50.CpuPriorityKey + 8));
                if ( v51 )
                {
                  v56 = (KSPIN_LOCK *)*((_QWORD *)v31 - 11 * (*((_BYTE *)v31 + 8) & 0x3F) - 2);
                  if ( ObReferenceObjectSafeWithTag((__int64)v56, 0x746C6644u) )
                  {
                    if ( (v51 & 1) != 0 )
                      IoBoostThreadIoPriority(v56, 2, 0x80000000);
                    if ( (v51 & 2) != 0 )
                      PsBoostThreadOutstandingIoQoS(v56);
                    ObDereferenceObjectDeferDeleteWithTag(v56, 0x746C6644u);
                  }
                }
LABEL_94:
                if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 )
                  EtwTraceAutoBoostProcessLockEntry(
                    *((_QWORD *)v31 - 11 * (*((_BYTE *)v31 + 8) & 0x3F) - 2),
                    var50.TreeNode.ParentValue,
                    v52);
                v29 = (int)var50.TreeNode.Children[0];
                v28 = var50.SpareFlags;
LABEL_97:
                v22 = var50.TreeNode.Children[1];
                goto LABEL_34;
              }
              if ( !v29 )
                goto LABEL_99;
              if ( v31 != (LegacyAutoBoost *)v55 )
              {
                LegacyAutoBoost::KiAbEntryUpdateWaiterTreePosition(v31, v55, v54);
                v52 |= 0x20u;
              }
              v57 = v55->OwnerTree.Min;
              if ( v57 )
                v58 = (char)v57[1].Children[0];
              else
                v58 = 30;
              if ( !v55->WaitingByte )
              {
                v59 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(
                        (LegacyAutoBoost *)v55,
                        (struct _KLOCK_ENTRY *)v23);
                v60 = v58;
                if ( v59 < v58 )
                  v60 = v59;
                v58 = v60;
              }
              LegacyAutoBoost::KiAbTryIncrementIoWaiterCounts(v31, v55, v54);
              v64 = LegacyAutoBoost::KiAbEntryGetCpuPriorityKey((struct _KLOCK_ENTRY *)v31, v61);
              if ( v58 < v64 )
              {
                if ( v63 )
                  goto LABEL_118;
              }
              else
              {
                if ( !v63 )
                {
                  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(&var50.CpuPriorityKey + 8));
                  v52 |= 2u;
                  goto LABEL_94;
                }
LABEL_118:
                LegacyAutoBoost::KiAbIoBoostOwners(v55, (struct _KLOCK_ENTRY *)v63, a3, a4, a5);
              }
              LOBYTE(v62) = v64;
              LegacyAutoBoost::KiAbCpuBoostOwners(v55, v62, a3, a4, a5);
              goto LABEL_99;
            }
            v67 = *(unsigned __int8 *)(*((_QWORD *)&v22->Children[v30] - 11 * ((__int64)v22[1].Children[v30] & 0x3F))
                                     + 195LL);
            v23 = v67;
            if ( (char)v67 > (char)v9 )
              v23 = v9;
            v35 = (_BYTE)v23 == *((_BYTE *)v31 + 40);
          }
          else if ( *((_BYTE *)v31 + 9) )
          {
            v35 = v29 == 0;
          }
          else
          {
            v35 = v28 == 0;
          }
          if ( !v35 )
            goto LABEL_84;
        }
LABEL_34:
        v26 = (unsigned int)var50.OwnerTree.Root;
        v9 = 30;
        v21 = !_BitScanForward(&v27, (unsigned int)var50.OwnerTree.Root);
        v8.0 = var50.LockState.0;
        v11 = 0x8000000000000000uLL;
      }
      while ( !v21 );
    }
  }
}
