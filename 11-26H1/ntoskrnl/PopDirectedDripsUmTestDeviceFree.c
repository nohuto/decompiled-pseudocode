/*
 * XREFs of PopDirectedDripsUmTestDeviceFree @ 0x1407E78E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsUmTestDeviceFree(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x4D554444u);
}
