/*
 * XREFs of ViIsActiveChannelWcb @ 0x1406411F0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x140C25C00 (ViAdapterCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // bl
  KIRQL v6; // al
  __int64 i; // r8
  __int64 v8; // r8

  v2 = (KSPIN_LOCK *)(a1 + 176);
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  for ( i = *(_QWORD *)(a1 + 160); ; i = *(_QWORD *)(v8 + 72) )
  {
    v8 = i - 72;
    if ( a1 == v8 - 88 )
      break;
    if ( a2 == v8 )
    {
      v4 = 1;
      break;
    }
  }
  KeReleaseSpinLock(v2, v6);
  return v4;
}
