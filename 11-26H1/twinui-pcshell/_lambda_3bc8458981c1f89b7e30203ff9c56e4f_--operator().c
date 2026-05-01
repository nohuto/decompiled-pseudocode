/*
 * XREFs of _lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator() @ 0x180445270
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___::Run @ 0x180447530 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___--.c)
 * Callees:
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801C9FA0 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator()(UwpWindowWrapperBase **a1)
{
  UwpWindowWrapperBase *v1; // rax
  UwpWindowWrapperBase *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[1];
  *((_BYTE *)*a1 + 463) = *(_DWORD *)v1 == 1;
  v2 = *a1;
  try
  {
    UwpWindowWrapperBase::TryPushWindowResizingState(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x467,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return result;
}
