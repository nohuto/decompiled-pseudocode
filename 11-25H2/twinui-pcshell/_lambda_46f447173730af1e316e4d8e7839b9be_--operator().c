/*
 * XREFs of _lambda_46f447173730af1e316e4d8e7839b9be_::operator() @ 0x1801C5030
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___::Run @ 0x180229400 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_46f447173730af1e316e4d8e7839b9be_::operator()(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rax
  bool v4; // dl
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(a1[1] + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = a1[3];
    v4 = 0;
    v6 = v3;
    if ( (int)v3 > 0 )
      v4 = SHIDWORD(v3) > 0;
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1[2] + 120LL) + 200LL))(
      *(_QWORD *)(a1[2] + 120LL),
      (unsigned __int64)&v6 & -(__int64)v4);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(a1[1] + 208LL);
  ReleaseSRWLockExclusive(v5);
}
