/*
 * XREFs of HalpExtGetAcpiTable @ 0x140589760
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpExtGetAcpiTable(__int64 a1, int a2, int a3, int a4)
{
  return HalpAcpiGetTable((__int64)HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink, a2, a3, a4);
}
