/*
 * XREFs of PopBatteryWaitTag @ 0x140B65670
 * Callers:
 *     PopBatteryAdd @ 0x1407DB310 (PopBatteryAdd.c)
 *     PopBatteryUpdateTestExempt @ 0x1407DB65C (PopBatteryUpdateTestExempt.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 */

NTSTATUS __fastcall PopBatteryWaitTag(__int64 a1)
{
  IRP *v1; // rbx
  struct _IRP *v2; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v5; // rcx

  v1 = *(IRP **)(a1 + 56);
  v2 = (struct _IRP *)(a1 + 188);
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 188) = -1;
  IoReuseIrp(v1, -1073741637);
  CurrentStackLocation = v1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2703424;
  CurrentStackLocation[-1].Parameters.Create.Options = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  v1->AssociatedIrp.MasterIrp = v2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 184LL);
  *(_QWORD *)(v5 - 16) = PopBatteryIrpComplete;
  *(_QWORD *)(v5 - 8) = a1;
  *(_BYTE *)(v5 - 69) = -32;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
}
