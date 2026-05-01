/*
 * XREFs of _lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator() @ 0x180438CBC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___::Run @ 0x18043AED0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___--.c)
 * Callees:
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801123D4 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator()(__int64 a1)
{
  UwpWindowWrapperBase *v2; // rcx
  _DWORD *v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(UwpWindowWrapperBase **)a1;
  v3 = *(_DWORD **)(a1 + 8);
  LOBYTE(v3) = *v3 == 1;
  *((_BYTE *)v2 + 479) = (_BYTE)v3;
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
                           v4);
  }
  return result;
}
