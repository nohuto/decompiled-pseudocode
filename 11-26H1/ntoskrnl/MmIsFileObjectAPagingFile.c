/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14026B890
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     FsRtlIsSystemPagingFile @ 0x14026B2E0 (FsRtlIsSystemPagingFile.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_BOOL8 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v4; // eax
  int v5; // ett
  signed __int32 v6; // edx
  _QWORD *v7; // rax
  BOOL v8; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( KeGetCurrentIrql() == 2 )
  {
    CurrentIrql = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E360C8);
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
      _m_prefetchw(&dword_140E360C8);
      v5 = dword_140E360C8 & 0x7FFFFFFF;
      v4 = _InterlockedCompareExchange(
             &dword_140E360C8,
             (dword_140E360C8 & 0x7FFFFFFF) + 1,
             dword_140E360C8 & 0x7FFFFFFF);
      if ( v5 != v4 )
      {
        while ( v4 >= 0 )
        {
          v6 = v4;
          v4 = _InterlockedCompareExchange(&dword_140E360C8, v4 + 1, v4);
          if ( v4 == v6 )
            goto LABEL_15;
        }
        ExpWaitForSpinLockSharedAndAcquire(&dword_140E360C8, CurrentIrql);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E360C8, CurrentIrql);
    }
  }
LABEL_15:
  v7 = (_QWORD *)qword_140E360C0;
  if ( qword_140E360C0 )
  {
    do
    {
      if ( a1 < *(v7 - 26) )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( a1 <= *(v7 - 26) )
          break;
        v7 = (_QWORD *)v7[1];
      }
    }
    while ( v7 );
  }
  v8 = v7 != 0LL;
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&dword_140E360C8, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E360C8);
      return v7 != 0LL;
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E360C8, retaddr);
      return v8;
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&dword_140E360C8, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E360C8);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E360C8, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v8;
  }
}
