/*
 * XREFs of _lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator() @ 0x18042DE14
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___::Run @ 0x180431C90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180070048 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18042F734 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // edi
  unsigned int v6; // edx
  __int16 v7; // ax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  bool v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    LOBYTE(v11) = 0;
    v3 = *a1;
    v12 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v13, (char *)&v12, (char *)&v11);
    v4 = *a1;
    v5 = *(_DWORD *)(*a1 + 180) & 0x40;
    v6 = *(_DWORD *)(*a1 + 180) & 0xFFFFFFBF;
    *(_DWORD *)(v4 + 180) = v6;
    v7 = *(_WORD *)(v4 + 252);
    if ( (v7 & 0x40) != 0 && (v7 & 0x80u) != 0 && (v6 & 0x100) == 0 )
    {
      *(_WORD *)(v4 + 252) = v7 & 0xFFBF;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v4);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 280) + 240LL))(*(_QWORD *)(*a1 + 280));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x859,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return 0LL;
}
