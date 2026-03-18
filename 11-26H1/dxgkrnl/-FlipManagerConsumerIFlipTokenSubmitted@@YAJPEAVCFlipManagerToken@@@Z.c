/*
 * XREFs of ?FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z @ 0x140054340
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x140066F64 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x1400543A0 (-ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z.c)
 */

__int64 __fastcall FlipManagerConsumerIFlipTokenSubmitted(struct CFlipManagerToken *a1)
{
  __int64 v1; // rsi
  int v3; // ebx

  v1 = *((_QWORD *)a1 + 11);
  v3 = CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40));
  if ( v3 >= 0 )
  {
    CFlipManager::ConsumerIFlipTokenSubmitted((CFlipManager *)(v1 + 32), a1);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
  return (unsigned int)v3;
}
