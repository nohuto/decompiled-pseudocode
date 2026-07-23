/*
 * XREFs of ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299010
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026ECC4 (-KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x14029ABE0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

struct _KLOCK_ENTRY *__fastcall LegacyAutoBoost::KiAbEntryGetLockedHeadEntry(
        LegacyAutoBoost *this,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3,
        struct _KLOCK_QUEUE_HANDLE *a4)
{
  char v5; // al
  int v6; // r12d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdi
  _RTL_RB_TREE *v12; // r15
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int v15; // esi
  _RTL_BALANCED_NODE *v16; // rcx
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  LegacyAutoBoost *v21; // rdi
  volatile __int64 *v22; // rcx
  _RTL_BALANCED_NODE *v24; // rax
  unsigned __int64 v25; // rdx
  BOOLEAN v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r9
  volatile __int64 *v31; // rdx
  volatile __int64 *v32; // rcx
  struct _KLOCK_ENTRY *v33; // rdx
  _RTL_RB_TREE *v34; // r11
  char v35; // r8
  __int64 v36; // rcx
  unsigned __int64 Root; // rdx
  BOOLEAN v38; // r10
  int v39; // ecx
  _RTL_BALANCED_NODE *v40; // rax
  signed __int8 v41; // al
  __int64 v42; // rcx
  signed __int8 v43; // r9
  _RTL_BALANCED_NODE *v44; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v5 = *((_BYTE *)this + 11);
  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v5 & 1) == 0 )
    goto LABEL_2;
  a3->LockQueue.Next = 0LL;
  v31 = (volatile __int64 *)((char *)this + 72);
  a3->LockQueue.Lock = (unsigned __int64 *volatile)((char *)this + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v31, (__int64)a3) )
      KxWaitForLockOwnerShip(a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(a3, v31);
  }
  if ( (*((_BYTE *)this + 11) & 1) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
LABEL_2:
    if ( *(__int64 *)this >= 0 && !v6 )
      return 0LL;
    v8 = *(_QWORD *)this & 0x7FFFFFFFFFFFFFFCLL;
    v9 = v8 >> 4;
    if ( *((char *)this + 8) >= 0 )
    {
      v30 = ((v8 >> 4) & 0x3FF) << 6;
      v12 = (_RTL_RB_TREE *)((char *)&unk_140E16400 + v30 + 16);
      v11 = (__int64)&unk_140E16400 + v30;
    }
    else
    {
      v10 = *(_QWORD *)(*((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2) + 544LL);
      a2 = 3LL * ((unsigned int)v9 % *(_DWORD *)(v10 + 96));
      v11 = *(_QWORD *)(v10 + 88) + 24LL * ((unsigned int)v9 % *(_DWORD *)(v10 + 96));
      v12 = (_RTL_RB_TREE *)(v11 + 16);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v12);
      v13 = (__int64)v12->Root & 0x7FFFFFFF;
      while ( 1 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v13 + 1, v13);
        if ( v14 == v13 )
          break;
        if ( v13 < 0 )
        {
          LOBYTE(a2) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v12, a2);
          break;
        }
      }
    }
    else
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, a2);
    }
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_RTL_BALANCED_NODE **)(v11 + 8);
      v17 = *(_QWORD *)v11;
      if ( ((unsigned __int8)v16 & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_20;
        v17 ^= v11;
      }
      v18 = (unsigned __int8)v16 & 1;
      while ( v17 )
      {
        v19 = *(_QWORD *)(v17 - 16) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v19 < v8 )
        {
          v20 = *(_QWORD *)(v17 + 8);
          if ( !v18 || !v20 )
            goto LABEL_18;
        }
        else
        {
          if ( v19 <= v8 )
            break;
          v20 = *(_QWORD *)v17;
          if ( !v18 || !v20 )
          {
LABEL_18:
            v17 = v20;
            continue;
          }
        }
        v17 ^= v20;
      }
LABEL_20:
      if ( !v6 )
      {
        if ( v17 )
        {
          a3->LockQueue.Next = 0LL;
          v21 = (LegacyAutoBoost *)(v17 - 16);
          v22 = (volatile __int64 *)(v17 - 16 + 72);
          a3->LockQueue.Lock = (unsigned __int64 *volatile)v22;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _InterlockedExchange64(v22, (__int64)a3) )
              KxWaitForLockOwnerShip(a3);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(a3, v22);
          }
          if ( v15 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              LODWORD(v12->Root) = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
          }
          else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
            _InterlockedDecrement((volatile signed __int32 *)v12);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
          }
          if ( this == v21 )
            return (struct _KLOCK_ENTRY *)v21;
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)((char *)this + 72);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _InterlockedExchange64((volatile __int64 *)this + 9, (__int64)&LockHandle) )
              KxWaitForLockOwnerShip(&LockHandle);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(&LockHandle, (char *)this + 72);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v8 == (*(_QWORD *)this & 0x7FFFFFFFFFFFFFFCLL) && *(__int64 *)this < 0 )
            return (struct _KLOCK_ENTRY *)v21;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
        }
        else if ( v15 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            LODWORD(v12->Root) = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v12);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
        }
        return 0LL;
      }
      if ( v17 )
      {
        a3->LockQueue.Next = 0LL;
        v21 = (LegacyAutoBoost *)(v17 - 16);
        v32 = (volatile __int64 *)(v17 - 16 + 72);
        a3->LockQueue.Lock = (unsigned __int64 *volatile)v32;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v33 = (struct _KLOCK_ENTRY *)_InterlockedExchange64(v32, (__int64)a3);
          if ( v33 )
            KxWaitForLockOwnerShip(a3);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(a3, v32);
        }
        if ( v15 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            LODWORD(v12->Root) = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v12);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
        }
        if ( *(__int64 *)this < 0 )
          return (struct _KLOCK_ENTRY *)v21;
        if ( *((_BYTE *)this + 9) )
        {
          v34 = (_RTL_RB_TREE *)((char *)v21 + 56);
          v35 = *(_BYTE *)(*((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2) + 195LL);
          if ( v35 > 30 )
            v35 = 30;
          *((_BYTE *)this + 40) = v35;
          v36 = *((_QWORD *)v21 + 8);
          Root = (unsigned __int64)v34->Root;
          if ( (v36 & 1) == 0 )
            goto LABEL_86;
          if ( Root )
          {
            Root ^= (unsigned __int64)v34;
LABEL_86:
            v38 = 0;
            v39 = v36 & 1;
            if ( Root )
            {
              while ( 1 )
              {
                if ( *(char *)(Root + 24) >= v35 )
                {
                  v40 = *(_RTL_BALANCED_NODE **)(Root + 8);
                  if ( v39 )
                  {
                    if ( !v40 )
                      goto LABEL_97;
                    v40 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v40);
                  }
                  if ( !v40 )
                    goto LABEL_97;
                }
                else
                {
                  v40 = *(_RTL_BALANCED_NODE **)Root;
                  if ( v39 )
                  {
                    if ( !v40 )
                      break;
                    v40 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v40);
                  }
                  if ( !v40 )
                    break;
                }
                Root = (unsigned __int64)v40;
              }
            }
          }
          else
          {
LABEL_135:
            v38 = 0;
          }
        }
        else
        {
          v41 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(this, v33);
          v34 = (_RTL_RB_TREE *)((char *)v21 + 40);
          *((_BYTE *)this + 40) = v41;
          v42 = *((_QWORD *)v21 + 6);
          v43 = v41;
          Root = *((_QWORD *)v21 + 5);
          if ( (v42 & 1) != 0 )
          {
            if ( !Root )
              goto LABEL_135;
            Root ^= (unsigned __int64)v34;
          }
          v38 = 0;
          if ( Root )
          {
            while ( 1 )
            {
              if ( *(char *)(Root + 24) <= v43 )
              {
                v44 = *(_RTL_BALANCED_NODE **)(Root + 8);
                if ( (v42 & 1) != 0 )
                {
                  if ( !v44 )
                    goto LABEL_97;
                  v44 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v44);
                }
                if ( !v44 )
                {
LABEL_97:
                  v38 = 1;
                  break;
                }
              }
              else
              {
                v44 = *(_RTL_BALANCED_NODE **)Root;
                if ( (v42 & 1) != 0 )
                {
                  if ( !v44 )
                    break;
                  v44 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v44);
                }
                if ( !v44 )
                  break;
              }
              Root = (unsigned __int64)v44;
            }
          }
        }
        RtlRbInsertNodeEx(v34, (PRTL_BALANCED_NODE)Root, v38, (PRTL_BALANCED_NODE)((char *)this + 16));
        *((_BYTE *)this + 7) |= 0x80u;
LABEL_56:
        v29 = *((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2);
        if ( *((_BYTE *)this + 9) )
          _InterlockedIncrement8((volatile signed __int8 *)(v29 + 792));
        else
          _InterlockedIncrement8((volatile signed __int8 *)(v29 + 793));
        return (struct _KLOCK_ENTRY *)v21;
      }
      if ( v15 || (v15 = 1, ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)v12)) )
      {
        v24 = *(_RTL_BALANCED_NODE **)(v11 + 8);
        v25 = *(_QWORD *)v11;
        if ( ((unsigned __int8)v24 & 1) != 0 )
        {
          if ( !v25 )
          {
            v26 = 0;
            goto LABEL_50;
          }
          v25 ^= v11;
        }
        v26 = 0;
        v27 = (unsigned __int8)v24 & 1;
        if ( v25 )
        {
          while ( 1 )
          {
            if ( (*(_QWORD *)(v25 - 16) & 0x7FFFFFFFFFFFFFFCuLL) <= v8 )
            {
              v28 = *(_QWORD *)(v25 + 8);
              if ( v27 )
              {
                if ( !v28 )
                  goto LABEL_49;
                v28 ^= v25;
              }
              if ( !v28 )
              {
LABEL_49:
                v26 = 1;
                break;
              }
            }
            else
            {
              v28 = *(_QWORD *)v25;
              if ( v27 )
              {
                if ( !v28 )
                  break;
                v28 ^= v25;
              }
              if ( !v28 )
                break;
            }
            v25 = v28;
          }
        }
LABEL_50:
        RtlRbInsertNodeEx((PRTL_RB_TREE)v11, (PRTL_BALANCED_NODE)v25, v26, (PRTL_BALANCED_NODE)((char *)this + 16));
        a3->LockQueue.Lock = (unsigned __int64 *volatile)((char *)this + 72);
        v21 = this;
        a3->LockQueue.Next = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64((volatile __int64 *)this + 9, (__int64)a3) )
            KxWaitForLockOwnerShip(a3);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(a3, (char *)this + 72);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          LODWORD(v12->Root) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
        *((_BYTE *)this + 7) |= 0x80u;
        *((_BYTE *)this + 11) |= 1u;
        *((_QWORD *)this + 5) = 0LL;
        *((_QWORD *)this + 6) = 0LL;
        *((_QWORD *)this + 7) = 0LL;
        *((_QWORD *)this + 8) = 0LL;
        *((_BYTE *)this + 84) = 0;
        *((_DWORD *)this + 21) &= 0xFFFF80FF;
        goto LABEL_56;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)v12);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v12);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v12);
      }
    }
  }
  return (struct _KLOCK_ENTRY *)this;
}
