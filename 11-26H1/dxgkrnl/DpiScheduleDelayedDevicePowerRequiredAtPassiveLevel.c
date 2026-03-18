/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x140011620
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1402AEF6C (DpiGetDxgAdapterSafe.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(__int64 a1)
{
  __int64 v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  if ( *(_DWORD *)(a1 + 4288) != 4 && *(_DWORD *)(a1 + 4292) == 1 )
  {
    WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 4828;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(
        &DxgkControlGuid_Context,
        &Dxgk_DevicePowerRequiredTimer,
        v2,
        *(_QWORD *)(a1 + 4032),
        1);
    if ( !*(_DWORD *)(a1 + 4232) )
      KeSetTimer((PKTIMER)(a1 + 4304), DueTime, (PKDPC)(a1 + 4368));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
