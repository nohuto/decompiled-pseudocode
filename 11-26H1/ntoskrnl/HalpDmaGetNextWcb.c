/*
 * XREFs of HalpDmaGetNextWcb @ 0x14043780C
 * Callers:
 *     HalpContinueProcessingWaitQueue @ 0x1404377B0 (HalpContinueProcessingWaitQueue.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

_QWORD *__fastcall HalpDmaGetNextWcb(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  KIRQL v6; // cl
  __int64 v8; // rax

  v1 = (KSPIN_LOCK *)(a1 + 184);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v4 = (_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 360) = 0LL;
  v5 = *(_QWORD **)(a1 + 192);
  v6 = v3;
  if ( v5 == (_QWORD *)(a1 + 192) )
  {
    v5 = 0LL;
    *(_BYTE *)(a1 + 224) = 0;
  }
  else
  {
    if ( (_QWORD *)v5[1] != v4 || (v8 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v8;
    *(_QWORD *)(v8 + 8) = v4;
  }
  KeReleaseSpinLock(v1, v6);
  return v5;
}
