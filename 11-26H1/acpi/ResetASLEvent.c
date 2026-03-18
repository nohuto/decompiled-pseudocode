/*
 * XREFs of ResetASLEvent @ 0x1400707A0
 * Callers:
 *     ResetSignal @ 0x140036A80 (ResetSignal.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetASLEvent(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  *(_DWORD *)a1 = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 24), v2);
}
