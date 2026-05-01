/*
 * XREFs of _lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator() @ 0x18043A768
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d0edc6b8eea04ad0c12ef80d845b920d___::Run @ 0x18043E0F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d0edc6b8eea04ad0c12ef80d845b920d___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18004DF74 (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801B1064 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043BA24 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator()(WindowWrapperBase **a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  HWND *v4; // rax
  DWORD WindowThreadProcessId; // eax
  __int64 *v6; // rbx
  WindowWrapperBase *v7; // rax
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
    v3 = (__int64 *)a1[1];
    if ( *((_QWORD *)*a1 + 17) != *v3 && ViewManagerInteropTraceLogging::IsEnabled(*v3) )
    {
      dwProcessId = 0;
      v4 = (HWND *)a1[1];
      if ( *v4 )
        WindowThreadProcessId = GetWindowThreadProcessId(*v4, &dwProcessId);
      else
        WindowThreadProcessId = 0;
      v15 = WindowThreadProcessId;
      v6 = (__int64 *)a1[1];
      v16 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)*a1 + 2) + 288LL))((__int64)*a1 + 16);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        &v16,
        v6,
        (int *)&v15,
        (int *)&dwProcessId);
    }
    *((_QWORD *)*a1 + 17) = *(_QWORD *)a1[1];
    v7 = *a1;
    if ( (*(_BYTE *)a1[2] & 1) != 0 || !*((_QWORD *)v7 + 17) )
      v8 = 0;
    else
      v8 = 128;
    *((_WORD *)v7 + 126) &= ~0x80u;
    *((_WORD *)v7 + 126) |= v8;
    WindowWrapperBase::CommitImportanceVector(*a1);
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
