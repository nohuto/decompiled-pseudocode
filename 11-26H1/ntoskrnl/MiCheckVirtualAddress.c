/*
 * XREFs of MiCheckVirtualAddress @ 0x1403A7340
 * Callers:
 *     MiIsFaultPteIntact @ 0x14031E538 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, int *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 Process; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  _DWORD *v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _KPROCESS *v13; // r10
  __int64 Flink; // r8
  char v15; // dl
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  _KPROCESS *v20; // rcx
  volatile signed __int32 *v21; // r8
  __int64 v22; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
  {
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 4;
      return 0LL;
    }
LABEL_56:
    *a2 = 24;
    return 0LL;
  }
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  if ( (*(_DWORD *)(Process + 1532) & 1) == 0 )
  {
    v8 = a1 & 0x7FFFFFFFF000LL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140E2D7A8;
      *a2 = 1;
      return result;
    }
    if ( v8 == qword_140E2D7B8 && v8 )
    {
      result = qword_140E2D7B0;
      *a2 = 1;
      return result;
    }
  }
  v10 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v10);
    v12 = *v10 & 0x7FFFFFFF;
    v11 = _InterlockedCompareExchange(v10, v12 + 1, v12);
    if ( v12 != v11 )
    {
      while ( v11 >= 0 )
      {
        Process = (unsigned int)v11;
        v11 = _InterlockedCompareExchange(v10, v11 + 1, v11);
        if ( v11 == (_DWORD)Process )
          goto LABEL_18;
      }
      LOBYTE(Process) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v10, Process, (__int64)v10);
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, 0xFFu);
  }
LABEL_18:
  v13 = KeGetCurrentThread()->ApcState.Process;
  Flink = (__int64)v13[3].Header.WaitListHead.Flink;
  if ( !Flink )
  {
    v15 = 1;
    goto LABEL_40;
  }
  v16 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
    || (v17 = *(unsigned int *)(Flink + 28), v16 > (v17 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32))) )
  {
    Flink = *(_QWORD *)&v13[3].Header.Lock;
    if ( !Flink )
      goto LABEL_29;
    do
    {
      v17 = *(unsigned int *)(Flink + 28);
      if ( v16 <= (v17 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
      {
        v17 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
        if ( v16 >= v17 )
          break;
        Flink = *(_QWORD *)Flink;
      }
      else
      {
        Flink = *(_QWORD *)(Flink + 8);
      }
    }
    while ( Flink );
    if ( !Flink )
    {
LABEL_29:
      v15 = 1;
      goto LABEL_40;
    }
    v13[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
  }
  v3 = Flink;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)(Flink + 64));
    v19 = *(_DWORD *)(Flink + 64) & 0x7FFFFFFF;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v19 + 1, v19);
    if ( v19 != v18 )
    {
      while ( v18 >= 0 )
      {
        v17 = (unsigned int)v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v18 + 1, v18);
        if ( v18 == (_DWORD)v17 )
          goto LABEL_39;
      }
      LOBYTE(v17) = -1;
      ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(Flink + 64), v17, Flink);
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(Flink + 64), 0xFFu);
  }
LABEL_39:
  v15 = 9;
LABEL_40:
  v20 = KeGetCurrentThread()->ApcState.Process;
  v21 = (volatile signed __int32 *)&v20[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (v15 & 8) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&v20[2].ActiveProcessors[4].StaticBitmap[8] + 1);
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v21, 0xBFFFFFFF);
    _InterlockedDecrement(v21);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v21, retaddr);
  }
  if ( !v3 )
    goto LABEL_56;
  result = MiCheckUserVirtualAddress(a1, v3, 1, a2);
  v22 = result;
  if ( a3 )
  {
    *a3 = v3;
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 64));
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v3 + 64), retaddr);
    return v22;
  }
  return result;
}
