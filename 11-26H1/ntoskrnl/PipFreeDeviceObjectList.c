/*
 * XREFs of PipFreeDeviceObjectList @ 0x1409B5B6C
 * Callers:
 *     IopFreeRelationList @ 0x1409B5B30 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x1409B698C (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x1409B4BCC (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDeviceObjectList(_DWORD *P)
{
  PiClearDeviceObjectList(P);
  ExFreePoolWithTag(P, 0);
}
