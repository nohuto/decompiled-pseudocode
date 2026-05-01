/*
 * XREFs of ?GetUwpWindowContext@UwpWindowWrapperBase@@UEAAJPEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18020ED10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetUwpWindowContext(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext **a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 232LL))(v4);
    v6 = (struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *)*((_QWORD *)this + 12);
    if ( v6 )
    {
      *a2 = v6;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6E9,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
