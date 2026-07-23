/*
 * XREFs of PnpSetCustomTargetEvent @ 0x1409AB088
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14049DEB0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x140AE42C0 (IoReportTargetDeviceChange.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140B418A0 (PnpReportTargetDeviceChangeAsyncWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1409AB1EC (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetCustomTargetEvent(
        _QWORD *Object,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *Src)
{
  __int64 v10; // rdi
  __int64 DeviceEventEntry; // rbx
  const void *v12; // rdx
  void *v13; // rcx
  unsigned int v15; // [rsp+58h] [rbp+10h]

  if ( a2 )
    *a3 = 259;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v10 = *(_QWORD *)(Object[39] + 40LL);
  else
    v10 = 0LL;
  v15 = ((*(unsigned __int16 *)(v10 + 40) + 89) & 0xFFFFFFF8) + Src[1];
  DeviceEventEntry = PnpCreateDeviceEventEntry(v15 + 120);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *(_QWORD *)(DeviceEventEntry + 40) = a5;
  *(_QWORD *)(DeviceEventEntry + 24) = a2;
  *(_QWORD *)(DeviceEventEntry + 32) = a4;
  *(_DWORD *)(DeviceEventEntry + 136) = 3;
  *(_QWORD *)(DeviceEventEntry + 144) = a3;
  *(GUID *)(DeviceEventEntry + 120) = GUID_PNP_CUSTOM_NOTIFICATION;
  *(_DWORD *)(DeviceEventEntry + 152) = 0;
  *(_DWORD *)(DeviceEventEntry + 156) = v15;
  *(_QWORD *)(DeviceEventEntry + 160) = Object;
  v12 = *(const void **)(v10 + 48);
  if ( v12 )
    memmove((void *)(DeviceEventEntry + 176), v12, *(unsigned __int16 *)(v10 + 40));
  v13 = (void *)(DeviceEventEntry + v15 + 120 - (unsigned __int64)Src[1]);
  *(_QWORD *)(DeviceEventEntry + 168) = v13;
  memmove(v13, Src, Src[1]);
  return PnpInsertEventInQueue(DeviceEventEntry);
}
