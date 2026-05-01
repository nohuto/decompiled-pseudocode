/*
 * XREFs of ??0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU?$coroutine_handle@X@experimental@std@@PEAUawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@6@W4DispatcherQueuePriority@896@@Z@@Z @ 0x18030773C
 * Callers:
 *     ?HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z @ 0x1801B1670 (-HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040AF88 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040D3B8 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180596F00 (-await_suspend@awaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _lambda_f475742c0de8d0f2b24fd9d946f0a567_::_lambda_f475742c0de8d0f2b24fd9d946f0a567_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = *a2;
  result = a1;
  a1[1] = a3;
  return result;
}
