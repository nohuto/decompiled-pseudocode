/*
 * XREFs of ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006A5AC
 * Callers:
 *     ?StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18006A2B0 (-StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1801CDFB0 (-StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@M.c)
 *     ?StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1801E4DF0 (-StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180204280 (-StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180212280 (-StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180231BF0 (-StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v1 += 33;
    AcquireSRWLockExclusive(v1);
  }
  **(_DWORD **)(a1 + 272) = 2;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
