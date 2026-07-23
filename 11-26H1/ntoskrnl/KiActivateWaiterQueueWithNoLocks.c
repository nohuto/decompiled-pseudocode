/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1402249B0
 * Callers:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402394F0 (KiPriQueueThreadPriorityChanged.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiWakePriQueueWaiter @ 0x1403826C0 (KiWakePriQueueWaiter.c)
 *     KiAttemptFastRemovePriQueue @ 0x1403F0270 (KiAttemptFastRemovePriQueue.c)
 *     KiActivateWaiterKQueue @ 0x1403F0370 (KiActivateWaiterKQueue.c)
 */

__int64 __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  int v7; // ett
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v16; // [rsp+30h] [rbp+8h] BYREF

  v5 = (_DWORD *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v5);
    LODWORD(result) = *v5 & 0x7FFFFFFF;
    while ( 1 )
    {
      v7 = result;
      result = (unsigned int)_InterlockedCompareExchange(v5, result + 1, result);
      if ( v7 == (_DWORD)result )
        break;
      if ( (int)result < 0 )
      {
        LOBYTE(a2) = -1;
        result = ExpWaitForSpinLockSharedAndAcquire(v5, a2);
        break;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, a2);
  }
  v8 = *(_QWORD *)(a1 + 232);
  if ( v8 )
  {
    KiAcquireKobjectLockSafe(*(_QWORD *)(a1 + 232));
    result = *(_QWORD *)(a1 + 232);
    if ( !result )
    {
      _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
      v8 = 0LL;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(v5, 0xBFFFFFFF);
    _InterlockedDecrement(v5);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
  }
  if ( v8 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      {
        v16 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v16);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v14 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v14 + 536));
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 40));
      }
      v9 = *a3;
      v10 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v10 != a3 )
LABEL_28:
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
    {
      result = v8 + 8;
      v16 = 0;
      if ( *(_QWORD *)result != result )
      {
        if ( *(_DWORD *)(v8 + 4) )
        {
          result = KiAttemptFastRemovePriQueue(v8);
          v13 = (_QWORD *)result;
          if ( result )
          {
            v11 = (int)v16;
            result = KiWakePriQueueWaiter(KeGetCurrentPrcb(), v8, result, v16);
            if ( !(_BYTE)result )
            {
              ++*(_DWORD *)(v8 + 4);
              v12 = (__int64 *)(v8 + 16 * v11 + 24);
              result = *v12;
              if ( *(__int64 **)(*v12 + 8) != v12 )
                goto LABEL_28;
              *v13 = result;
              v13[1] = v12;
              *(_QWORD *)(result + 8) = v13;
              *v12 = (__int64)v13;
            }
          }
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
    }
    else
    {
      return KiActivateWaiterKQueue(v8);
    }
  }
  return result;
}
