/*
 * XREFs of UsbhOutOfBandwidthTimerDpc @ 0x14003DF50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 */

void __fastcall UsbhOutOfBandwidthTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // r10
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  PVOID v10; // r11
  __int64 v11; // r10

  v4 = *((_QWORD *)DeferredContext + 1);
  _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 688), 0LL, (signed __int64)DeferredContext);
  Log(*((_QWORD *)DeferredContext + 2), 8, 1869567025, v4, (__int64)DeferredContext);
  Log(*((_QWORD *)DeferredContext + 2), 8, 1869567026, v6, v7);
  if ( DeferredContext == v10 && *(_QWORD *)(v9 + 392) )
  {
    Log(*((_QWORD *)DeferredContext + 2), 8, 1869567027, v8, (__int64)v10);
    _InterlockedExchange((volatile __int32 *)(v11 + 428), 6);
    UsbhException(
      *((_QWORD *)DeferredContext + 2),
      *(_WORD *)(v11 + 4),
      41,
      DeferredContext,
      0xA0u,
      *((_DWORD *)DeferredContext + 38),
      *((_DWORD *)DeferredContext + 39),
      usbfile_hub_c,
      1950,
      0);
  }
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)DeferredContext + 24);
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)DeferredContext);
  ExFreePoolWithTag(DeferredContext, 0);
}
