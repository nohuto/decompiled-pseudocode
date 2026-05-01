/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::Run @ 0x180141670
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7bc44750849f411daf11246e0ad82942_::operator() @ 0x1801416F8 (_lambda_7bc44750849f411daf11246e0ad82942_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_7bc44750849f411daf11246e0ad82942_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
