/*
 * XREFs of MiLockWorkingSetCoreShared @ 0x1402CFF20
 * Callers:
 *     MiCountWslesInPageTableRange @ 0x14029D9E0 (MiCountWslesInPageTableRange.c)
 *     MiRemoveWsle @ 0x1403273B4 (MiRemoveWsle.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetCoreShared(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // ett

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v3 = &unk_140E379C0;
  else
    v3 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v3);
    LODWORD(result) = *v3 & 0x7FFFFFFF;
    while ( 1 )
    {
      v5 = (unsigned int)(result + 1);
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange(v3, v5, result);
      if ( v6 == (_DWORD)result )
        break;
      if ( (int)result < 0 )
      {
        LOBYTE(v5) = -1;
        return ExpWaitForSpinLockSharedAndAcquire(v3, v5, a3);
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v3, a2);
  }
  return result;
}
