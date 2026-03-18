/*
 * XREFs of PopPrepareIoctl @ 0x140AFBC84
 * Callers:
 *     PopBatteryAdd @ 0x1407D7CF0 (PopBatteryAdd.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopPowerAdapterAdd @ 0x1407D94D0 (PopPowerAdapterAdd.c)
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140B348C0 (PopFanWorker.c)
 *     PopPowerAdapterQueryStatus @ 0x140B71E04 (PopPowerAdapterQueryStatus.c)
 * Callees:
 *     IoReuseIrp @ 0x140268650 (IoReuseIrp.c)
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
