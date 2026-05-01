/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::Run @ 0x180309C90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x180308F18 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_e7bc64b627cbb54866febc88068197a7_::operator()((struct IImmersiveApplication **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
