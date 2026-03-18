/*
 * XREFs of MiIsTargetFullyRetpolined @ 0x1404FBED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsTargetFullyRetpolined(__int64 a1)
{
  return _bittest64(
           *(const signed __int64 **)&stru_140E2D150.WaitBlockFill11[112],
           (unsigned __int64)(a1 + 0x800000000000LL) >> 16);
}
