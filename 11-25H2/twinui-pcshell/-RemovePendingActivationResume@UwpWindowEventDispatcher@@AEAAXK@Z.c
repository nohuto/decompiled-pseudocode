/*
 * XREFs of ?RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z @ 0x1800FD13C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::Run @ 0x180221DC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$pair@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAA@XZ @ 0x1800FD254 (--1-$pair@V-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_p.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180196098 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowEventDispatcher::RemovePendingActivationResume(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rsi
  _QWORD *i; // rbx
  int v6; // eax
  _QWORD *Ptr; // r14
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 61;
  AcquireSRWLockExclusive(this + 61);
  for ( i = this[65].Ptr; i != this[66].Ptr; i += 4 )
  {
    if ( *((_DWORD *)i + 6) == a2 )
    {
      try
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)i[1] + 472LL))(i[1]) != 3 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 128LL))(*i, 1LL);
          if ( v6 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x54E,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v6);
        }
        Ptr = this[66].Ptr;
        while ( 1 )
        {
          i += 4;
          if ( i == Ptr )
            break;
          UwpWindowEventDispatcher::PendingActivationResumeData::operator=(i - 4, i);
        }
        std::pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>::~pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>((char *)this[66].Ptr - 32);
        this[66].Ptr = (char *)this[66].Ptr - 32;
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x553,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          v8);
        return;
      }
      break;
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
