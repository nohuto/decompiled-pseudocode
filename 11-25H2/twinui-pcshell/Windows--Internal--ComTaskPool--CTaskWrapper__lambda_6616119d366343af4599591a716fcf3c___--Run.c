/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6616119d366343af4599591a716fcf3c___::Run @ 0x180309B50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_33958d0dde9f83a94f3b5da467006c79_::operator() @ 0x180308BE4 (_lambda_33958d0dde9f83a94f3b5da467006c79_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6616119d366343af4599591a716fcf3c___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_33958d0dde9f83a94f3b5da467006c79_::operator()((_QWORD *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
