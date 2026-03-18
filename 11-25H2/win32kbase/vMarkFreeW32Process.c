/*
 * XREFs of vMarkFreeW32Process @ 0x14013EC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Process(__int64 a1)
{
  *(_QWORD *)(a1 + 808) |= 0x1000uLL;
}
