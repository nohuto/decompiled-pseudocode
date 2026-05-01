/*
 * XREFs of _lambda_759e1e24362ba58b3b85b34b47726433_::operator() @ 0x1801E6194
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___::Run @ 0x1801E6170 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1801E6228 (-StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_759e1e24362ba58b3b85b34b47726433_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  int v3; // eax
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1 + 32;
  AcquireSRWLockExclusive(v2);
  UwpWindowManagerBridge::StartUalmWatcherHelper(*a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  try
  {
    v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)(*a1)[30].Ptr + 192LL))((*a1)[30].Ptr);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E1,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v4);
  }
  return 0LL;
}
