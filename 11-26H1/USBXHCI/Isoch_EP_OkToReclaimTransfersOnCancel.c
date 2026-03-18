/*
 * XREFs of Isoch_EP_OkToReclaimTransfersOnCancel @ 0x14004CD30
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x140016E34 (TR_QueueDpcForTransferCompletion.c)
 */

void __fastcall Isoch_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  KIRQL v2; // al
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // di

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 336);
  *(_BYTE *)(a1 + 104) = v2;
  if ( (v3 & 4) != 0 )
  {
    v4 = a1 + 392;
    v5 = *(_QWORD *)(a1 + 392);
    if ( v5 != a1 + 392 )
    {
      **(_QWORD **)(a1 + 432) = v5;
      *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)(a1 + 432);
      **(_QWORD **)(a1 + 400) = a1 + 424;
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 400);
      *(_QWORD *)(a1 + 400) = a1 + 392;
      *(_QWORD *)v4 = v4;
      v2 = *(_BYTE *)(a1 + 104);
    }
    v6 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 336) = v3 | 2;
    v6 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( v6 )
    TR_QueueDpcForTransferCompletion((_QWORD *)a1);
}
