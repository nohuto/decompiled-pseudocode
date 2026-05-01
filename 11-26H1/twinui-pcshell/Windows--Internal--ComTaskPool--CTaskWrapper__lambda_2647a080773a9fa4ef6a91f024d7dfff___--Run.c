/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___::Run @ 0x180305760
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x1801AC688 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    CFrameApplicationPresentation::_DestroyFrameIfPossible(*(CFrameApplicationPresentation **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
