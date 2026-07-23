/*
 * XREFs of TtmiWriteEventToAllQueues @ 0x1407EC734
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1407EB890 (TtmpPublishDeviceEvent.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1407ED5FC (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmiSessionTerminalListWorker @ 0x1407F1C68 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407F2C4C (TtmiWriteEventToSingleQueue.c)
 *     TtmpAcquireQueueLock @ 0x1407F2D90 (TtmpAcquireQueueLock.c)
 *     TtmpReleaseQueueLock @ 0x1407F2F00 (TtmpReleaseQueueLock.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_UNKNOWN **__fastcall TtmiWriteEventToAllQueues(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // r14
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD **v7; // rsi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 80);
  v5 = *(_QWORD **)(a1 + 80);
  while ( v5 != v3 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    result = (_UNKNOWN **)TtmiWriteEventToSingleQueue(v6, a2);
    if ( (int)result < 0 )
    {
      TtmiLogError("TtmiWriteEventToAllQueues", 2192LL, (unsigned int)result, 0xFFFFFFFFLL);
      TtmpAcquireQueueLock(v6);
      *((_BYTE *)v6 + 168) = 0;
      v7 = (_QWORD **)(v6 + 19);
      while ( 1 )
      {
        v8 = *v7;
        if ( *v7 == v7 )
          break;
        if ( (_QWORD **)v8[1] != v7 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
          __fastfail(3u);
        *v7 = v9;
        v9[1] = v7;
        ExFreePoolWithTag(v8, 0x716D7454u);
      }
      KeSetEvent((PRKEVENT)(v6 + 16), 0, 0);
      result = (_UNKNOWN **)TtmpReleaseQueueLock(v6);
    }
  }
  return result;
}
