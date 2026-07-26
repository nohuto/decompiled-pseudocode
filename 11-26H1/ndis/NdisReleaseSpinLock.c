/*
 * XREFs of NdisReleaseSpinLock @ 0x1400D9580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisReleaseSpinLock(__int64 a1)
{
  KeReleaseSpinLock((PKSPIN_LOCK)a1, *(_BYTE *)(a1 + 8));
}
