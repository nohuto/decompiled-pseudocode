/*
 * XREFs of ?FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z @ 0x14001CBE8
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x140066F64 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall FlipManagerGetTracingIdFromToken(struct CFlipManagerToken *a1)
{
  __int64 v1; // rdi
  unsigned int TracingId; // ebx

  v1 = *((_QWORD *)a1 + 11);
  TracingId = 0;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40)) >= 0 )
  {
    TracingId = CFlipManager::GetTracingId((CFlipManager *)(v1 + 32));
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
  return TracingId;
}
