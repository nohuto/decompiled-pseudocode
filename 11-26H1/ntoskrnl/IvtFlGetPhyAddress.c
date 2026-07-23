/*
 * XREFs of IvtFlGetPhyAddress @ 0x1405ADC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtFlGetPhyAddress(_QWORD *a1)
{
  return *a1 & 0xFFFFFFFFFF000LL;
}
