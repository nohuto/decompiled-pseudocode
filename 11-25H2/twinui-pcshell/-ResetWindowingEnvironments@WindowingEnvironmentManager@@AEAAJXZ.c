/*
 * XREFs of ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x180092F4C
 * Callers:
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x180092AD8 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z @ 0x180092ED0 (-v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ @ 0x180092FB0 (-EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332___ @ 0x180092FF8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowingEnvironmentManager::ResetWindowingEnvironments(WindowingEnvironmentManager *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowingEnvironmentManager *v8; // [rsp+30h] [rbp+8h] BYREF

  WindowingEnvironmentManager::EnsureLockHeldExclusive((WindowingEnvironmentManager *)((char *)this + 144));
  v8 = this;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332___(
         v3,
         CurrentThreadId,
         &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x128,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v4,
      v6);
  return 0LL;
}
