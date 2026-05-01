/*
 * XREFs of _lambda_d64c769bce7fa56fe27855a63f35df80_::operator() @ 0x18042E780
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___::Run @ 0x180431DB0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180070048 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18042F734 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_d64c769bce7fa56fe27855a63f35df80_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // edi
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  bool v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    LOBYTE(v9) = 1;
    v3 = *a1;
    v10 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v11, (char *)&v10, (char *)&v9);
    v4 = *a1;
    v5 = *(_DWORD *)(*a1 + 180) & 0x40;
    *(_DWORD *)(v4 + 180) = *(_DWORD *)(*a1 + 180) | 0xC0;
    if ( (*(_WORD *)(v4 + 252) & 0xC0) != 0xC0 )
    {
      *(_WORD *)(v4 + 252) |= 0xC0u;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v4);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*a1 + 280) + 232LL))(*(_QWORD *)(*a1 + 280), v5 != 0);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return 0LL;
}
