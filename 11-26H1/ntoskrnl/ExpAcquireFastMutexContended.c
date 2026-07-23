/*
 * XREFs of ExpAcquireFastMutexContended @ 0x14049A508
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(struct _KTHREAD *a1, struct _KLOCK_ENTRY *this)
{
  int v2; // esi
  AutoBoost *v3; // rdi
  int v5; // r14d
  __int64 result; // rax
  int v7; // ett
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // ett

  v2 = 1;
  v3 = (AutoBoost *)this;
  ++LODWORD(a1->Header.WaitListHead.Blink);
  v5 = 4;
LABEL_2:
  LODWORD(result) = a1->Header.LockNV;
  do
  {
    while ( (result & 1) == 0 )
    {
      v7 = result;
      LODWORD(result) = _InterlockedCompareExchange(&a1->Header.Lock, v5 + result, result);
      if ( v7 == (_DWORD)result )
      {
        if ( v3 )
          KeAbPreWait(v3, this);
        KeWaitForSingleObject(&a1->SListFaultAddress, WrFastMutex, 0, 0, 0LL);
        _m_prefetchw(a1);
        v2 = 3;
        v5 = 2;
        if ( v3 )
          v3 = (AutoBoost *)KeAbPreAcquire((__int64)a1, (unsigned __int64)v3, 0LL, v8);
        goto LABEL_2;
      }
    }
    v9 = result;
    result = (unsigned int)_InterlockedCompareExchange(&a1->Header.Lock, v2 ^ result, result);
  }
  while ( v9 != (_DWORD)result );
  return result;
}
