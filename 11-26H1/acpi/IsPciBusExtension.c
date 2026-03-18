/*
 * XREFs of IsPciBusExtension @ 0x1400C8260
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1400C83A4 (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(_QWORD *)(a1 + 760));
}
