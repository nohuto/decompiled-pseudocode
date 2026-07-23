/*
 * XREFs of VerifierPortKeAcquireSpinLock @ 0x140C3A030
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockCommon @ 0x140C3A30C (ViKeAcquireSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeAcquireSpinLock(__int64 a1, __int64 a2, __int64 a3)
{
  return ViKeAcquireSpinLockCommon(a1, a3, a2);
}
