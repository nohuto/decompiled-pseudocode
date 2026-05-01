/*
 * XREFs of _lambda_d64c769bce7fa56fe27855a63f35df80_::operator() @ 0x18043AA04
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___::Run @ 0x18043E120 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18006A914 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043BA24 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_d64c769bce7fa56fe27855a63f35df80_::operator()(WindowWrapperBase **a1)
{
  __int64 v2; // rcx
  WindowWrapperBase *v3; // rcx
  int v4; // edi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    LOBYTE(v8) = 1;
    v3 = *a1;
    v9 = (*((_DWORD *)*a1 + 45) & 0x40) != 0;
    v10 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v3 + 2) + 288LL))((__int64)v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v10, (char *)&v9, (char *)&v8);
    v4 = *((_DWORD *)*a1 + 45) & 0x40;
    *((_DWORD *)*a1 + 45) |= 0xC0u;
    if ( (*((_WORD *)*a1 + 126) & 0xC0) != 0xC0 )
    {
      *((_WORD *)*a1 + 126) |= 0x40u;
      *((_WORD *)*a1 + 126) |= 0x80u;
      WindowWrapperBase::CommitImportanceVector(*a1);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)*a1 + 35) + 232LL))(*((_QWORD *)*a1 + 35), v4 != 0);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return 0LL;
}
