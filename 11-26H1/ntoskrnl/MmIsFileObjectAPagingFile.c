/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14026C320
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026B4C4 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026B9F0 (IoSynchronousPageWriteEx.c)
 *     FsRtlIsSystemPagingFile @ 0x14026BD70 (FsRtlIsSystemPagingFile.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x14026E454 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35F48);
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw(&dword_140E35F48);
      v5 = dword_140E35F48 & 0x7FFFFFFF;
      v4 = _InterlockedCompareExchange(
             &dword_140E35F48,
             (dword_140E35F48 & 0x7FFFFFFF) + 1,
             dword_140E35F48 & 0x7FFFFFFF);
      if ( v5 != v4 )
      {
        while ( v4 >= 0 )
        {
          v6 = v4;
          v4 = _InterlockedCompareExchange(&dword_140E35F48, v4 + 1, v4);
          if ( v4 == v6 )
            goto LABEL_15;
        }
        ExpWaitForSpinLockSharedAndAcquire(&dword_140E35F48, CurrentIrql);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E35F48, CurrentIrql);
    }
  }
LABEL_15:
  v7 = (_QWORD *)qword_140E35F40;
  if ( qword_140E35F40 )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd(&dword_140E35F48, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E35F48);
      return v7 != 0LL;
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E35F48, retaddr);
      return v8;
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd(&dword_140E35F48, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E35F48);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E35F48, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v8;
  }
}
