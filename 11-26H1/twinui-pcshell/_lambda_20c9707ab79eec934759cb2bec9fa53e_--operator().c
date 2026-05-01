/*
 * XREFs of _lambda_20c9707ab79eec934759cb2bec9fa53e_::operator() @ 0x180444E74
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_20c9707ab79eec934759cb2bec9fa53e___::Run @ 0x180447440 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_20c9707ab79eec934759cb2bec9fa53e___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18004DF74 (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801B1064 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_20c9707ab79eec934759cb2bec9fa53e_::operator()(UwpWindowWrapperBase **a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  HWND *v4; // rax
  DWORD WindowThreadProcessId; // eax
  __int64 *v6; // rbx
  int *v7; // rax
  UwpWindowWrapperBase *v8; // rax
  __int16 v9; // cx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  DWORD v16; // [rsp+48h] [rbp+10h] BYREF
  char v17; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v3 = (__int64 *)a1[1];
    if ( *((_QWORD *)*a1 + 17) != *v3 && ViewManagerInteropTraceLogging::IsEnabled(*v3) )
    {
      dwProcessId = 0;
      v4 = (HWND *)a1[1];
      if ( *v4 )
        WindowThreadProcessId = GetWindowThreadProcessId(*v4, &dwProcessId);
      else
        WindowThreadProcessId = 0;
      v16 = WindowThreadProcessId;
      v6 = (__int64 *)a1[1];
      v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)*a1 + 2) + 288LL))((__int64)*a1 + 16, &v17);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        v7,
        v6,
        (int *)&v16,
        (int *)&dwProcessId);
    }
    *((_QWORD *)*a1 + 17) = *(_QWORD *)a1[1];
    v8 = *a1;
    if ( (*(_BYTE *)a1[2] & 1) != 0 || !*((_QWORD *)v8 + 17) )
      v9 = 0;
    else
      v9 = 128;
    *((_WORD *)v8 + 126) &= ~0x80u;
    *((_WORD *)v8 + 126) |= v9;
    UwpWindowWrapperBase::CommitImportanceVector(*a1);
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)*a1 + 35) + 256LL))(
            *((_QWORD *)*a1 + 35),
            ((unsigned __int64)*a1 + 16) & -(__int64)(*a1 != 0LL));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA96,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v10,
        v13);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA98,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v11);
  }
  return result;
}
