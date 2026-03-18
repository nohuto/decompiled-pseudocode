/*
 * XREFs of ?FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z @ 0x1400A425C
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x140066F64 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 */

void __fastcall FlipManagerMarkAsLost(struct CFlipManagerToken *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *((_QWORD *)a1 + 11);
  v2 = *((_QWORD *)a1 + 12);
  CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40));
  CFlipManager::MarkAsLost(v1 + 32, -1073741823, 24, v2);
  CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
}
