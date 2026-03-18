/*
 * XREFs of PipFreeDeviceObjectList @ 0x140913A8C
 * Callers:
 *     IopFreeRelationList @ 0x140913A50 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x14091431C (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140912AEC (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDeviceObjectList(_DWORD *P)
{
  PiClearDeviceObjectList(P);
  ExFreePoolWithTag(P, 0);
}
