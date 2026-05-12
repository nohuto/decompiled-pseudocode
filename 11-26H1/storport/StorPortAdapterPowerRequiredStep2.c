/*
 * XREFs of StorPortAdapterPowerRequiredStep2 @ 0x140010E04
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1400108D0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterPowerRequiredStep2(char *Context)
{
  _QWORD **v2; // rsi
  int v3; // ecx
  int v4; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = (_QWORD **)(Context + 5024);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 628) + 8LL) + 12LL) & 1) == 0 )
  {
    if ( *((_DWORD *)Context + 87) == 1 )
    {
      if ( (Context[107] & 4) == 0 )
        goto LABEL_6;
      v2 = (_QWORD **)(Context + 5024);
    }
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           StorPortAdapterPoFxD0Completion,
           Context,
           0LL) == 259 )
    {
      Context[107] |= 2u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 628));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173442 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v3,
        (unsigned int)&EventAdapterPowerRequiredStop,
        v4,
        **v2,
        *((_DWORD *)Context + 14),
        0);
  }
}
