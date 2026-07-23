/*
 * XREFs of HalpDmaStartWcb @ 0x140439A18
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x140437894 (HalPutScatterGatherListV3.c)
 *     HalpAllocateAdapterChannel @ 0x140439894 (HalpAllocateAdapterChannel.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall HalpDmaStartWcb(__int64 a1, _QWORD *a2, char a3)
{
  KSPIN_LOCK *v3; // rbp
  char v7; // bl
  KIRQL v8; // dl
  _QWORD *v10; // rax

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( *(_BYTE *)(a1 + 224) )
  {
    if ( !a3 )
    {
      v10 = *(_QWORD **)(a1 + 200);
      if ( *v10 != a1 + 192 )
        __fastfail(3u);
      *a2 = a1 + 192;
      a2[1] = v10;
      *v10 = a2;
      *(_QWORD *)(a1 + 200) = a2;
    }
  }
  else
  {
    v7 = 1;
    *(_BYTE *)(a1 + 224) = 1;
  }
  KeReleaseSpinLock(v3, v8);
  return v7;
}
