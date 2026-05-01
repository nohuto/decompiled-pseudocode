/*
 * XREFs of ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006FBCC
 * Callers:
 *     ?StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18006F8D0 (-StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1801D7110 (-StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@M.c)
 *     ?StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1801ED5F0 (-StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180210ED0 (-StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180220740 (-StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1802403C0 (-StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
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
