/*
 * XREFs of _lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator() @ 0x18043A07C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___::Run @ 0x18043E000 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18006A914 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043BA24 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator()(WindowWrapperBase **a1)
{
  __int64 v2; // rcx
  WindowWrapperBase *v3; // rcx
  int v4; // edi
  WindowWrapperBase *v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  bool v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    LOBYTE(v9) = 0;
    v3 = *a1;
    v10 = (*((_DWORD *)*a1 + 45) & 0x40) != 0;
    v11 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v3 + 2) + 288LL))((__int64)v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v11, (char *)&v10, (char *)&v9);
    v4 = *((_DWORD *)*a1 + 45) & 0x40;
    *((_DWORD *)*a1 + 45) &= ~0x40u;
    v5 = *a1;
    if ( (*((_WORD *)*a1 + 126) & 0xC0) == 0xC0 && (*((_DWORD *)v5 + 45) & 0x100) == 0 )
    {
      *((_WORD *)v5 + 126) = *((_WORD *)*a1 + 126) & 0xFFBF;
      WindowWrapperBase::CommitImportanceVector(*a1);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 35) + 240LL))(*((_QWORD *)*a1 + 35));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x859,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return 0LL;
}
