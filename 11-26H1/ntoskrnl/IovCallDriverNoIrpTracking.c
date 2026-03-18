/*
 * XREFs of IovCallDriverNoIrpTracking @ 0x140C2A824
 * Callers:
 *     IovCallDriver @ 0x1404F36FC (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1402655E0 (IopfCallDriver.c)
 */

__int64 __fastcall IovCallDriverNoIrpTracking(__int64 a1, ULONG_PTR a2)
{
  return IopfCallDriver(a1, a2);
}
