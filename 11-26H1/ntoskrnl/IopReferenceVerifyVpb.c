/*
 * XREFs of IopReferenceVerifyVpb @ 0x1404FE4D0
 * Callers:
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IopIncrementVpbRefCount @ 0x14044AA10 (IopIncrementVpbRefCount.c)
 */

char __fastcall IopReferenceVerifyVpb(__int64 a1, ULONG_PTR *a2, _QWORD *a3)
{
  char v4; // di
  KIRQL v7; // al
  ULONG_PTR v8; // rcx
  KIRQL v9; // bp

  v4 = 0;
  v7 = KeAcquireQueuedSpinLock(9uLL);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = v7;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v8 && (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    *a3 = *(_QWORD *)(v8 + 8);
    v4 = 1;
    *a2 = v8;
    IopIncrementVpbRefCount(v8, 0);
  }
  KeReleaseQueuedSpinLock(9uLL, v9);
  return v4;
}
