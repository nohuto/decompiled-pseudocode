/*
 * XREFs of TtmiWriteEventToSingleQueue @ 0x1407ED0EC
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1407E5D30 (TtmpPublishDeviceEvent.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407E6B40 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1407E6BDC (TtmiWriteEventToAllQueues.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1407E7A9C (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     TtmiLogQueueEnqueueEvent @ 0x1407E9F80 (TtmiLogQueueEnqueueEvent.c)
 *     TtmpAcquireQueueLock @ 0x1407ED230 (TtmpAcquireQueueLock.c)
 *     TtmpReleaseQueueLock @ 0x1407ED3A0 (TtmpReleaseQueueLock.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall TtmiWriteEventToSingleQueue(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Pool2; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  _QWORD *v11; // rcx

  TtmpAcquireQueueLock(a1);
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v4 = -1073740032;
    v5 = 410LL;
LABEL_3:
    TtmiLogError("TtmiWriteEventToSingleQueue", v5, 0xFFFFFFFFLL, v4);
    goto LABEL_11;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    v5 = 423LL;
    goto LABEL_3;
  }
  v8 = 4LL;
  v9 = (_OWORD *)(Pool2 + 16);
  do
  {
    *v9 = *a2;
    v9[1] = a2[1];
    v9[2] = a2[2];
    v9[3] = a2[3];
    v9[4] = a2[4];
    v9[5] = a2[5];
    v9[6] = a2[6];
    v9 += 8;
    v10 = a2[7];
    a2 += 8;
    *(v9 - 1) = v10;
    --v8;
  }
  while ( v8 );
  *v9 = *a2;
  v9[1] = a2[1];
  TtmiLogQueueEnqueueEvent();
  v11 = *(_QWORD **)(a1 + 160);
  if ( *v11 != a1 + 152 )
    __fastfail(3u);
  v7[1] = v11;
  *v7 = a1 + 152;
  *v11 = v7;
  *(_QWORD *)(a1 + 160) = v7;
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
LABEL_11:
  TtmpReleaseQueueLock(a1);
  return v4;
}
