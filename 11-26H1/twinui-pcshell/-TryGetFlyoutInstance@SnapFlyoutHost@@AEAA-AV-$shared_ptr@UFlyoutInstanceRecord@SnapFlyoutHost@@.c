/*
 * XREFs of ?TryGetFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C79D0
 * Callers:
 *     ?OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18026A250 (-OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18026A390 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 *     ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x1805B44D0 (-OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ProgressRequest@?$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs@UIArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801C7A5C (-ProgressRequest@-$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeSt.c)
 */

_QWORD *__fastcall SnapFlyoutHost::TryGetFlyoutInstance(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rbp
  int v7; // ebx

  v3 = *(_QWORD **)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 32);
  while ( v3 != v5 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*v3 + 8LL) + 320LL);
    if ( v7 == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest(a3) )
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a2, v3);
      return a2;
    }
    v3 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return a2;
}
