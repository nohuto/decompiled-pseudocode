/*
 * XREFs of PopPrepareIoctl @ 0x140AFD904
 * Callers:
 *     PopBatteryAdd @ 0x1407DB310 (PopBatteryAdd.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopPowerAdapterAdd @ 0x1407DCEF0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterReinitialize @ 0x1407DD830 (PopPowerAdapterReinitialize.c)
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140B36AD0 (PopFanWorker.c)
 *     PopBatteryInitialize @ 0x140B76BD0 (PopBatteryInitialize.c)
 *     PopPowerAdapterQueryStatus @ 0x140B76DFC (PopPowerAdapterQueryStatus.c)
 * Callees:
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 */

__int64 __fastcall PopPrepareIoctl(IRP *a1, ULONG a2, char a3, struct _IRP *a4, ULONG a5, ULONG a6)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 result; // rax

  IoReuseIrp(a1, -1073741637);
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = (a3 != 0) + 14;
  CurrentStackLocation[-1].Parameters.Create.Options = a5;
  result = a6;
  CurrentStackLocation[-1].Parameters.Read.Length = a6;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  a1->AssociatedIrp.MasterIrp = a4;
  return result;
}
