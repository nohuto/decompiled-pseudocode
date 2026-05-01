/*
 * XREFs of _lambda_910012da7138534dbba8c9356fab0dd8_::operator() @ 0x180304B58
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___::Run @ 0x1803059C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_910012da7138534dbba8c9356fab0dd8___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_910012da7138534dbba8c9356fab0dd8_::operator()(__int64 a1)
{
  int v2; // ebx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 60LL) = *(_DWORD *)(a1 + 24);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 120LL) + 160LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL),
           *(unsigned int *)(a1 + 24));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6EC,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v3);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 208LL);
  ReleaseSRWLockExclusive(v4);
}
