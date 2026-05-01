/*
 * XREFs of _lambda_6c82c5fc4697b74e4e3cb823547de234_::operator() @ 0x1804261C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6c82c5fc4697b74e4e3cb823547de234___::Run @ 0x180426A40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6c82c5fc4697b74e4e3cb823547de234___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1801EFAEC (-StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_6c82c5fc4697b74e4e3cb823547de234_::operator()(__int64 *a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  UwpWindowManagerBridge::StartUalmWatcherHelper(*a1);
  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 240) + 192LL))(*(_QWORD *)(*a1 + 240));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v2,
        v5);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F3,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v3);
  }
  return 0LL;
}
