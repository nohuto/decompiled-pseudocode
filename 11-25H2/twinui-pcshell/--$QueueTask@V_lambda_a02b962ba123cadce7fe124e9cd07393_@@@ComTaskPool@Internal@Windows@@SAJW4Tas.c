/*
 * XREFs of ??$QueueTask@V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_a02b962ba123cadce7fe124e9cd07393_@@@Z @ 0x1802B4A90
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ @ 0x18012DB10 (-DismissView@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?0V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@?$CTaskWrapper@V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_a02b962ba123cadce7fe124e9cd07393_@@@Z @ 0x1806839F8 (--$-0V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@-$CTaskWrapper@V_lambda_a02b962ba123cadce7fe12.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_a02b962ba123cadce7fe124e9cd07393_>(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_a02b962ba123cadce7fe124e9cd07393_>::CTaskWrapper<_lambda_a02b962ba123cadce7fe124e9cd07393_>(
           v3,
           a2);
  else
    v4 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
