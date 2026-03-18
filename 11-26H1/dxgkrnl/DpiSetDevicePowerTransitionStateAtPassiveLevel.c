/*
 * XREFs of DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x140032F68
 * Callers:
 *     DpiLdaPowerUpAdapterInChain @ 0x14018F4AC (DpiLdaPowerUpAdapterInChain.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DxgkReportDevicePoweredOn @ 0x14003306C (DxgkReportDevicePoweredOn.c)
 */

void __fastcall DpiSetDevicePowerTransitionStateAtPassiveLevel(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbp
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  v6 = (_DWORD *)(a1 + 4288);
  if ( (_DWORD)v3 != 5 || *v6 == 4 )
  {
    v7 = v3;
    WdLogSingleEntry3(9LL, a1, v3, 0LL);
    WdLogGlobalForLineNumber = 4531;
    *v6 = v3;
  }
  else
  {
    v7 = v3;
  }
  if ( a3 && !*(_DWORD *)(a1 + 4292) )
  {
    WdLogSingleEntry3(9LL, a1, v7, 1LL);
    v8 = *(_QWORD *)(a1 + 4032);
    WdLogGlobalForLineNumber = 4542;
    DxgkReportDevicePoweredOn(v8);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
