/*
 * XREFs of ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1401820FC
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?InitializeRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAJPEAPEAX@Z @ 0x140182258 (-InitializeRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAJPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ConvertUserToKernelEventHandle @ 0x1401B9E6C (ConvertUserToKernelEventHandle.c)
 */

__int64 __fastcall CKernelSensorThread::InitializeEventHandles(void **this, void *a2, void *a3)
{
  NTSTATUS refreshed; // edi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  CCompositionRefreshRateBooster *v16; // rcx

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1));
  refreshed = ConvertUserToKernelEventHandle(a2, this + 6);
  if ( refreshed < 0
    || (refreshed = ConvertUserToKernelEventHandle(a3, this + 7), refreshed < 0)
    || (UserSessionState = W32GetUserSessionState(v9, v8, v10),
        refreshed = ObOpenObjectByPointer(
                      *(PVOID *)(UserSessionState + 16816),
                      0x200u,
                      0LL,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      0,
                      this + 8),
        refreshed < 0)
    || (v15 = W32GetUserSessionState(v13, v12, v14),
        refreshed = ObOpenObjectByPointer(
                      *(PVOID *)(v15 + 19472),
                      0x200u,
                      0LL,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      0,
                      this + 9),
        refreshed < 0)
    || (refreshed = CCompositionRefreshRateBooster::InitializeRefreshRateUnboostTimer(v16, this + 10), refreshed < 0) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 367LL);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(this + 1));
  return (unsigned int)refreshed;
}
