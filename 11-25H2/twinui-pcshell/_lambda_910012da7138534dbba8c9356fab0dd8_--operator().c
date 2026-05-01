/*
 * XREFs of _lambda_910012da7138534dbba8c9356fab0dd8_::operator() @ 0x180308DA4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___::Run @ 0x180309C70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_910012da7138534dbba8c9356fab0dd8_::operator()(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  RTL_SRWLOCK *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v3 + 60) = *(_DWORD *)(a1 + 24);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 120) + 160LL))(*(_QWORD *)(v3 + 120));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6EC,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v4);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 208LL);
  ReleaseSRWLockExclusive(v5);
}
