/*
 * XREFs of _lambda_f991981efcc52a1e7ce38201fb3a674d_::operator() @ 0x1802B6008
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___::Run @ 0x18022B9D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1801C0430 (-StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_f991981efcc52a1e7ce38201fb3a674d_::operator()(__int64 *a1)
{
  RTL_SRWLOCK *v2; // rbx
  int v3; // eax
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)(*a1 + 256);
  AcquireSRWLockExclusive(v2);
  UwpWindowManagerBridge::StartWindowWatcherHelper(*a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  try
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 176) + 168LL))(*(_QWORD *)(*a1 + 176));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2BD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2BF,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v4);
  }
  return 0LL;
}
