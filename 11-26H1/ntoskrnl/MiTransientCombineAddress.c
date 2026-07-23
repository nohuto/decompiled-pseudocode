/*
 * XREFs of MiTransientCombineAddress @ 0x1403A8290
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A4788 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // di
  signed __int32 v6; // eax
  int v7; // ett
  signed __int32 v8; // edx
  _QWORD *v9; // rbx
  unsigned int v10; // esi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  if ( !dword_140E2EBC4 )
    return 0LL;
  if ( (_DWORD)a3 )
  {
    CurrentIrql = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2EBC0);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&dword_140E2EBC0);
      v7 = dword_140E2EBC0 & 0x7FFFFFFF;
      v6 = _InterlockedCompareExchange(
             &dword_140E2EBC0,
             (dword_140E2EBC0 & 0x7FFFFFFF) + 1,
             dword_140E2EBC0 & 0x7FFFFFFF);
      if ( v7 != v6 )
      {
        while ( v6 >= 0 )
        {
          v8 = v6;
          v6 = _InterlockedCompareExchange(&dword_140E2EBC0, v6 + 1, v6);
          if ( v6 == v8 )
            goto LABEL_16;
        }
        ExpWaitForSpinLockSharedAndAcquire(&dword_140E2EBC0, CurrentIrql, a3);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E2EBC0, CurrentIrql);
    }
  }
LABEL_16:
  v9 = (_QWORD *)qword_140E2EBC8;
  if ( qword_140E2EBC8 )
  {
    do
    {
      if ( a1 > v9[3] )
      {
        v9 = (_QWORD *)v9[1];
      }
      else
      {
        if ( a1 >= v9[3] )
          break;
        v9 = (_QWORD *)*v9;
      }
    }
    while ( v9 );
  }
  v10 = 0;
  if ( v9 && v9[5] != ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v9 = 0LL;
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&dword_140E2EBC0, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E2EBC0);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E2EBC0, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&dword_140E2EBC0, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E2EBC0);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E2EBC0, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  LOBYTE(v10) = v9 != 0LL;
  return v10;
}
