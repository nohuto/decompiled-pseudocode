/*
 * XREFs of _lambda_732b9d0d4e46444a8cf28034daf59b80_::operator() @ 0x180439428
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___::Run @ 0x18043AF90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180070048 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18011209C (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_732b9d0d4e46444a8cf28034daf59b80_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int16 v8; // ax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  bool v13; // [rsp+48h] [rbp+10h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    LOBYTE(v12) = 0;
    v3 = *a1;
    v13 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16, &v14);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(v4, (char *)&v13, (char *)&v12);
    v5 = *a1;
    v6 = *(_DWORD *)(*a1 + 180) & 0x40;
    v7 = *(_DWORD *)(*a1 + 180) & 0xFFFFFFBF;
    *(_DWORD *)(v5 + 180) = v7;
    v8 = *(_WORD *)(v5 + 252);
    if ( (v8 & 0x40) != 0 && (v8 & 0x80u) != 0 && (v7 & 0x100) == 0 )
    {
      *(_WORD *)(v5 + 252) = v8 & 0xFFBF;
      UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v5);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 280) + 248LL))(*(_QWORD *)(*a1 + 280));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x900,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return 0LL;
}
