/*
 * XREFs of ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299AB0
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1405FD774 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026F754 (-KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x14029B680 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 */

struct _KLOCK_ENTRY *__fastcall LegacyAutoBoost::KiAbEntryGetLockedHeadEntry(
        LegacyAutoBoost *this,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_QUEUE_HANDLE *a4)
{
  struct _KLOCK_QUEUE_HANDLE *v4; // rbp
  char v5; // al
  int v6; // r12d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // rdi
  _DWORD *v11; // r15
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int v14; // esi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  LegacyAutoBoost *v20; // rdi
  volatile __int64 *v21; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  volatile __int64 *v29; // rdx
  volatile __int64 *v30; // rcx
  struct _KLOCK_ENTRY *v31; // rdx
  unsigned __int64 v32; // r11
  char v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int8 v36; // r10
  int v37; // ecx
  __int64 v38; // rax
  signed __int8 v39; // al
  __int64 v40; // rcx
  signed __int8 v41; // r9
  __int64 v42; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v4 = (struct _KLOCK_QUEUE_HANDLE *)a3;
  v5 = *((_BYTE *)this + 11);
  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v5 & 1) == 0 )
    goto LABEL_2;
  *(_QWORD *)a3 = 0LL;
  v29 = (volatile __int64 *)((char *)this + 72);
  *(_QWORD *)(a3 + 8) = (char *)this + 72;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _InterlockedExchange64(v29, a3) )
      KxWaitForLockOwnerShip(a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(a3, v29);
  }
  if ( (*((_BYTE *)this + 11) & 1) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
LABEL_2:
    if ( *(__int64 *)this >= 0 && !v6 )
      return 0LL;
    v8 = *(_QWORD *)this & 0x7FFFFFFFFFFFFFFCLL;
    v9 = v8 >> 4;
    if ( *((char *)this + 8) >= 0 )
    {
      v28 = ((v8 >> 4) & 0x3FF) << 6;
      v11 = (_DWORD *)((char *)&unk_140E162C0 + v28 + 16);
      v10 = (__int64)&unk_140E162C0 + v28;
    }
    else
    {
      a3 = *(_QWORD *)(*((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2) + 544LL);
      a2 = 3LL * ((unsigned int)v9 % *(_DWORD *)(a3 + 96));
      v10 = *(_QWORD *)(a3 + 88) + 24LL * ((unsigned int)v9 % *(_DWORD *)(a3 + 96));
      v11 = (_DWORD *)(v10 + 16);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw(v11);
      v12 = *v11 & 0x7FFFFFFF;
      while ( 1 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(v11, v12 + 1, v12);
        if ( v13 == v12 )
          break;
        if ( v12 < 0 )
        {
          LOBYTE(a2) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v11, a2);
          break;
        }
      }
    }
    else
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, a2);
    }
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v10 + 8);
      v16 = *(_QWORD *)v10;
      if ( (v15 & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_20;
        v16 ^= v10;
      }
      v17 = v15 & 1;
      while ( v16 )
      {
        v18 = *(_QWORD *)(v16 - 16) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v18 < v8 )
        {
          v19 = *(_QWORD *)(v16 + 8);
          if ( !v17 || !v19 )
            goto LABEL_18;
        }
        else
        {
          if ( v18 <= v8 )
            break;
          v19 = *(_QWORD *)v16;
          if ( !v17 || !v19 )
          {
LABEL_18:
            v16 = v19;
            continue;
          }
        }
        v16 ^= v19;
      }
LABEL_20:
      if ( !v6 )
      {
        if ( v16 )
        {
          v4->LockQueue.Next = 0LL;
          v20 = (LegacyAutoBoost *)(v16 - 16);
          v21 = (volatile __int64 *)(v16 - 16 + 72);
          v4->LockQueue.Lock = (unsigned __int64 *volatile)v21;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          {
            if ( _InterlockedExchange64(v21, (__int64)v4) )
              KxWaitForLockOwnerShip(v4);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(v4, v21);
          }
          if ( v14 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
              *v11 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
          }
          else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          {
            _InterlockedAnd(v11, 0xBFFFFFFF);
            _InterlockedDecrement(v11);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
          }
          if ( this == v20 )
            return (struct _KLOCK_ENTRY *)v20;
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)((char *)this + 72);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
            return (struct _KLOCK_ENTRY *)v20;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
        }
        else if ( v14 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
            *v11 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          _InterlockedAnd(v11, 0xBFFFFFFF);
          _InterlockedDecrement(v11);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
        }
        return 0LL;
      }
      if ( v16 )
      {
        v4->LockQueue.Next = 0LL;
        v20 = (LegacyAutoBoost *)(v16 - 16);
        v30 = (volatile __int64 *)(v16 - 16 + 72);
        v4->LockQueue.Lock = (unsigned __int64 *volatile)v30;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          v31 = (struct _KLOCK_ENTRY *)_InterlockedExchange64(v30, (__int64)v4);
          if ( v31 )
            KxWaitForLockOwnerShip(v4);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v4, v30);
        }
        if ( v14 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
            *v11 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          _InterlockedAnd(v11, 0xBFFFFFFF);
          _InterlockedDecrement(v11);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
        }
        if ( *(__int64 *)this < 0 )
          return (struct _KLOCK_ENTRY *)v20;
        if ( *((_BYTE *)this + 9) )
        {
          v32 = (unsigned __int64)v20 + 56;
          v33 = *(_BYTE *)(*((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2) + 195LL);
          if ( v33 > 30 )
            v33 = 30;
          *((_BYTE *)this + 40) = v33;
          v34 = *((_QWORD *)v20 + 8);
          v35 = *(_QWORD *)v32;
          if ( (v34 & 1) == 0 )
            goto LABEL_86;
          if ( v35 )
          {
            v35 ^= v32;
LABEL_86:
            v36 = 0;
            v37 = v34 & 1;
            if ( v35 )
            {
              while ( 1 )
              {
                if ( *(char *)(v35 + 24) >= v33 )
                {
                  v38 = *(_QWORD *)(v35 + 8);
                  if ( v37 )
                  {
                    if ( !v38 )
                      goto LABEL_97;
                    v38 ^= v35;
                  }
                  if ( !v38 )
                    goto LABEL_97;
                }
                else
                {
                  v38 = *(_QWORD *)v35;
                  if ( v37 )
                  {
                    if ( !v38 )
                      break;
                    v38 ^= v35;
                  }
                  if ( !v38 )
                    break;
                }
                v35 = v38;
              }
            }
          }
          else
          {
LABEL_135:
            v36 = 0;
          }
        }
        else
        {
          v39 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey(this, v31);
          v32 = (unsigned __int64)v20 + 40;
          *((_BYTE *)this + 40) = v39;
          v40 = *((_QWORD *)v20 + 6);
          v41 = v39;
          v35 = *((_QWORD *)v20 + 5);
          if ( (v40 & 1) != 0 )
          {
            if ( !v35 )
              goto LABEL_135;
            v35 ^= v32;
          }
          v36 = 0;
          if ( v35 )
          {
            while ( 1 )
            {
              if ( *(char *)(v35 + 24) <= v41 )
              {
                v42 = *(_QWORD *)(v35 + 8);
                if ( (v40 & 1) != 0 )
                {
                  if ( !v42 )
                    goto LABEL_97;
                  v42 ^= v35;
                }
                if ( !v42 )
                {
LABEL_97:
                  v36 = 1;
                  break;
                }
              }
              else
              {
                v42 = *(_QWORD *)v35;
                if ( (v40 & 1) != 0 )
                {
                  if ( !v42 )
                    break;
                  v42 ^= v35;
                }
                if ( !v42 )
                  break;
              }
              v35 = v42;
            }
          }
        }
        RtlRbInsertNodeEx(v32, v35, v36, (char *)this + 16);
        *((_BYTE *)this + 7) |= 0x80u;
LABEL_56:
        v27 = *((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2);
        if ( *((_BYTE *)this + 9) )
          _InterlockedIncrement8((volatile signed __int8 *)(v27 + 792));
        else
          _InterlockedIncrement8((volatile signed __int8 *)(v27 + 793));
        return (struct _KLOCK_ENTRY *)v20;
      }
      if ( v14 || (v14 = 1, ExTryConvertSharedSpinLockExclusive(v11)) )
      {
        v23 = *(_QWORD *)(v10 + 8);
        v24 = *(_QWORD *)v10;
        if ( (v23 & 1) != 0 )
        {
          if ( !v24 )
          {
            LOBYTE(a3) = 0;
            goto LABEL_50;
          }
          v24 ^= v10;
        }
        LOBYTE(a3) = 0;
        v25 = v23 & 1;
        if ( v24 )
        {
          while ( 1 )
          {
            if ( (*(_QWORD *)(v24 - 16) & 0x7FFFFFFFFFFFFFFCuLL) <= v8 )
            {
              v26 = *(_QWORD *)(v24 + 8);
              if ( v25 )
              {
                if ( !v26 )
                  goto LABEL_49;
                v26 ^= v24;
              }
              if ( !v26 )
              {
LABEL_49:
                LOBYTE(a3) = 1;
                break;
              }
            }
            else
            {
              v26 = *(_QWORD *)v24;
              if ( v25 )
              {
                if ( !v26 )
                  break;
                v26 ^= v24;
              }
              if ( !v26 )
                break;
            }
            v24 = v26;
          }
        }
LABEL_50:
        RtlRbInsertNodeEx(v10, v24, a3, (char *)this + 16);
        v4->LockQueue.Lock = (unsigned __int64 *volatile)((char *)this + 72);
        v20 = this;
        v4->LockQueue.Next = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          if ( _InterlockedExchange64((volatile __int64 *)this + 9, (__int64)v4) )
            KxWaitForLockOwnerShip(v4);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v4, (char *)this + 72);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v11 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        _InterlockedAnd(v11, 0xBFFFFFFF);
        _InterlockedDecrement(v11);
        ExAcquireSpinLockExclusiveAtDpcLevel(v11);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
        ExAcquireSpinLockExclusiveAtDpcLevel(v11);
      }
    }
  }
  return (struct _KLOCK_ENTRY *)this;
}
