/*
 * XREFs of _lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::operator() @ 0x18020F1B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::Run @ 0x18020F1A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___--Run.c)
 * Callees:
 *     _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x1801B59E0 (_lambda_6bdb0a767824ae94d9b9ef25c3406932_--operator().c)
 */

void __fastcall lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_::operator()(__int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator()((_DWORD *)(a1 + 16));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
