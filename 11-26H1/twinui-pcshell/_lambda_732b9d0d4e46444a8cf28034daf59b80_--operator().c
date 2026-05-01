/*
 * XREFs of _lambda_732b9d0d4e46444a8cf28034daf59b80_::operator() @ 0x1804459EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___::Run @ 0x1804475F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18006A914 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_732b9d0d4e46444a8cf28034daf59b80_::operator()(UwpWindowWrapperBase **a1)
{
  __int64 v2; // rcx
  UwpWindowWrapperBase *v3; // rcx
  int *v4; // rax
  int v5; // edi
  UwpWindowWrapperBase *v6; // rdx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  bool v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    LOBYTE(v10) = 0;
    v3 = *a1;
    v11 = (*((_DWORD *)*a1 + 45) & 0x40) != 0;
    v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)v3 + 2) + 288LL))((__int64)v3 + 16, &v12);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(v4, (char *)&v11, (char *)&v10);
    v5 = *((_DWORD *)*a1 + 45) & 0x40;
    *((_DWORD *)*a1 + 45) &= ~0x40u;
    v6 = *a1;
    if ( (*((_WORD *)*a1 + 126) & 0xC0) == 0xC0 && (*((_DWORD *)v6 + 45) & 0x100) == 0 )
    {
      *((_WORD *)v6 + 126) = *((_WORD *)*a1 + 126) & 0xFFBF;
      UwpWindowWrapperBase::CommitImportanceVector(*a1);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 35) + 248LL))(*((_QWORD *)*a1 + 35));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x900,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v7);
  }
  return 0LL;
}
