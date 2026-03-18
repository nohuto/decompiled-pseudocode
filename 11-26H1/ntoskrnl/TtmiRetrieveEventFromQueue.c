/*
 * XREFs of TtmiRetrieveEventFromQueue @ 0x1407ECFA0
 * Callers:
 *     TtmpDispatchGetTerminalEvent @ 0x1407E8018 (TtmpDispatchGetTerminalEvent.c)
 * Callees:
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     TtmiLogQueueDequeueEvent @ 0x1407E9E2C (TtmiLogQueueDequeueEvent.c)
 *     TtmpAcquireQueueLock @ 0x1407ED230 (TtmpAcquireQueueLock.c)
 *     TtmpReleaseQueueLock @ 0x1407ED3A0 (TtmpReleaseQueueLock.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmiRetrieveEventFromQueue(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rcx
  _OWORD *v9; // rdi
  __int64 v10; // rax
  __int128 v11; // xmm1

  TtmpAcquireQueueLock(a1);
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v4 = -1073740032;
    v5 = 474LL;
LABEL_3:
    TtmiLogError("TtmiRetrieveEventFromQueue", v5, 0xFFFFFFFFLL, v4);
    goto LABEL_13;
  }
  v6 = (_QWORD *)(a1 + 152);
  v7 = *(_QWORD **)(a1 + 152);
  if ( v7 == (_QWORD *)(a1 + 152) )
  {
    v4 = -2147483622;
    v5 = 479LL;
    goto LABEL_3;
  }
  if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
    __fastfail(3u);
  *v6 = v8;
  *(_QWORD *)(v8 + 8) = v6;
  if ( (_QWORD *)*v6 == v6 )
    KeResetEvent((PRKEVENT)(a1 + 128));
  v9 = v7 + 2;
  TtmiLogQueueDequeueEvent();
  v10 = 4LL;
  do
  {
    *a2 = *v9;
    a2[1] = v9[1];
    a2[2] = v9[2];
    a2[3] = v9[3];
    a2[4] = v9[4];
    a2[5] = v9[5];
    a2[6] = v9[6];
    a2 += 8;
    v11 = v9[7];
    v9 += 8;
    *(a2 - 1) = v11;
    --v10;
  }
  while ( v10 );
  *a2 = *v9;
  a2[1] = v9[1];
  ExFreePoolWithTag(v7, 0x716D7454u);
LABEL_13:
  TtmpReleaseQueueLock(a1);
  return v4;
}
