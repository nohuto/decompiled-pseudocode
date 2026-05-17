/*
 * XREFs of RtlBarrier @ 0x1801417F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlBarrier()
{
  return RtlPosixBarrier();
}
