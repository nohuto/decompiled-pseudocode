/*
 * XREFs of _lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator() @ 0x1804450D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___::Run @ 0x1804474D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18006A914 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator()(UwpWindowWrapperBase **a1)
{
  __int64 v2; // rcx
  UwpWindowWrapperBase *v3; // rcx
  int *v4; // rax
  int v5; // edi
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  bool v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    LOBYTE(v9) = 1;
    v3 = *a1;
    v10 = (*((_DWORD *)*a1 + 45) & 0x40) != 0;
    v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)v3 + 2) + 288LL))((__int64)v3 + 16, &v11);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(v4, (char *)&v10, (char *)&v9);
    v5 = *((_DWORD *)*a1 + 45) & 0x40;
    *((_DWORD *)*a1 + 45) |= 0xC0u;
    if ( (*((_WORD *)*a1 + 126) & 0xC0) != 0xC0 )
    {
      *((_WORD *)*a1 + 126) |= 0x40u;
      *((_WORD *)*a1 + 126) |= 0x80u;
      UwpWindowWrapperBase::CommitImportanceVector(*a1);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)*a1 + 35) + 240LL))(*((_QWORD *)*a1 + 35), v5 != 0);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D2,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v6);
  }
  return 0LL;
}
