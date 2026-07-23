/*
 * XREFs of IovCallDriverNoIrpTracking @ 0x140C30834
 * Callers:
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140264B50 (IopfCallDriver.c)
 */

__int64 __fastcall IovCallDriverNoIrpTracking(__int64 a1, ULONG_PTR a2)
{
  return IopfCallDriver(a1, a2);
}
