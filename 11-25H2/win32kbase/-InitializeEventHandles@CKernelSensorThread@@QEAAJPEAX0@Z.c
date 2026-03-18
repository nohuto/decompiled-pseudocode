/*
 * XREFs of ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1402237B4
 * Callers:
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?InitializeRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAJPEAPEAX@Z @ 0x140160CDC (-InitializeRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAJPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ConvertUserToKernelEventHandle @ 0x1401AA5A0 (ConvertUserToKernelEventHandle.c)
 */

__int64 __fastcall CKernelSensorThread::InitializeEventHandles(void **this, void *a2, void *a3)
{
  int refreshed; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  CCompositionRefreshRateBooster *v13; // rcx

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  refreshed = ConvertUserToKernelEventHandle(a2, this + 6);
  if ( refreshed < 0
    || (refreshed = ConvertUserToKernelEventHandle(a3, this + 7), refreshed < 0)
    || (UserSessionState = W32GetUserSessionState(v8, v7),
        refreshed = ObOpenObjectByPointer(
                      *(PVOID *)(UserSessionState + 16824),
                      0x200u,
                      0LL,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      0,
                      this + 8),
        refreshed < 0)
    || (v12 = W32GetUserSessionState(v11, v10),
        refreshed = ObOpenObjectByPointer(
                      *(PVOID *)(v12 + 19440),
                      0x200u,
                      0LL,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      0,
                      this + 9),
        refreshed < 0)
    || (refreshed = CCompositionRefreshRateBooster::InitializeRefreshRateUnboostTimer(v13, this + 10), refreshed < 0) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 367);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1), 0LL);
  return (unsigned int)refreshed;
}
