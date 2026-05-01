/*
 * XREFs of _lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator() @ 0x18042E4F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d0edc6b8eea04ad0c12ef80d845b920d___::Run @ 0x180431D80 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d0edc6b8eea04ad0c12ef80d845b920d___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18011216C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801B6480 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18042F734 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator()(WindowWrapperBase **a1)
{
  __int64 v2; // rcx
  HWND *v3; // rax
  DWORD WindowThreadProcessId; // eax
  __int64 *v5; // rbx
  WindowWrapperBase *v6; // rdx
  __int64 v7; // rcx
  __int16 v8; // cx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  DWORD v15; // [rsp+48h] [rbp+10h] BYREF
  int v16; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    if ( *((_QWORD *)*a1 + 17) != *(_QWORD *)a1[1] && ViewManagerInteropTraceLogging::IsEnabled() )
    {
      dwProcessId = 0;
      v3 = (HWND *)a1[1];
      if ( *v3 )
        WindowThreadProcessId = GetWindowThreadProcessId(*v3, &dwProcessId);
      else
        WindowThreadProcessId = 0;
      v15 = WindowThreadProcessId;
      v5 = (__int64 *)a1[1];
      v16 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)*a1 + 2) + 288LL))((__int64)*a1 + 16);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        &v16,
        v5,
        (int *)&v15,
        (int *)&dwProcessId);
    }
    v6 = *a1;
    v7 = *(_QWORD *)a1[1];
    *((_QWORD *)*a1 + 17) = v7;
    if ( (*(_BYTE *)a1[2] & 1) != 0 || !v7 )
      v8 = 0;
    else
      v8 = 128;
    *((_WORD *)v6 + 126) = v8 | *((_WORD *)v6 + 126) & 0xFF7F;
    WindowWrapperBase::CommitImportanceVector(v6);
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)*a1 + 35) + 248LL))(
           *((_QWORD *)*a1 + 35),
           ((unsigned __int64)*a1 + 16) & -(__int64)(*a1 != 0LL));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9F4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9,
        v12);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9F6,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
  }
  return result;
}
