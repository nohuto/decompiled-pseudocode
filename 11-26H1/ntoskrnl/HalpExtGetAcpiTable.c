/*
 * XREFs of HalpExtGetAcpiTable @ 0x140587240
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x140342AEC (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpExtGetAcpiTable(__int64 a1, int a2, int a3, int a4)
{
  return HalpAcpiGetTable((__int64)HalpDeviceBlockUnblockPushLock.WaitBlock[1].SparePtr, a2, a3, a4);
}
