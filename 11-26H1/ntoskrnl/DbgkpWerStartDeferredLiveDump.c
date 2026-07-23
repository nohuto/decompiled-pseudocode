/*
 * XREFs of DbgkpWerStartDeferredLiveDump @ 0x14078EFA8
 * Callers:
 *     DbgkpWerCaptureLiveFullDump @ 0x140B413AC (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x1405CEA0C (IoSetDeferredLiveDumpFileHandle.c)
 */

__int64 __fastcall DbgkpWerStartDeferredLiveDump(__int64 a1)
{
  int v2; // edi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = WerLiveKernelOpenDumpFile(*(_QWORD *)(a1 + 96), &v4);
  if ( v2 < 0 )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkpWerStartDeferredLiveDump: WerLiveKernelOpenDumpFile failed, status 0x%X\n",
      (unsigned int)v2);
    return (unsigned int)v2;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) = v4;
  v2 = IoSetDeferredLiveDumpFileHandle(*(_QWORD *)(a1 + 128), v4);
  if ( v2 < 0 )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkpWerStartDeferredLiveDump: IoSetDeferredLiveDumpFileHandle failed, status 0x%X\n",
      (unsigned int)v2);
    return (unsigned int)v2;
  }
  ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 112), DelayedWorkQueue);
  return 0LL;
}
