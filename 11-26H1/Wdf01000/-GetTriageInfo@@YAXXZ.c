/*
 * XREFs of ?GetTriageInfo@@YAXXZ @ 0x14008E61C
 * Callers:
 *     FxLibraryCommonCommission @ 0x14008E93C (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

void GetTriageInfo(void)
{
  WPP_GLOBAL_WDF_Control.Dpc.DeferredContext = (void *)0x800000068LL;
  WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1 = (void *)0x200000000ALL;
  *(void **)((char *)&WPP_GLOBAL_WDF_Control.SecurityDescriptor + 4) = (void *)8;
  LODWORD(WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Flink) = 48;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DpcData) = 64;
  LODWORD(WPP_GLOBAL_WDF_Control.SecurityDescriptor) = 64;
  WPP_GLOBAL_WDF_Control.DeviceLock.Header.SignalState = 32;
  WPP_GLOBAL_WDF_Control.Dpc.TargetInfoAsUlong = 40;
  WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory = 0x3800000028LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc = (_KDPC *)40;
  WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2 = (void *)0x1000000048LL;
  *((_DWORD *)&WPP_GLOBAL_WDF_Control.Dpc.0 + 1) = 16;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) = 8;
  *(_DWORD *)&WPP_GLOBAL_WDF_Control.DeviceQueue.Type = 936;
  *(_DWORD *)(&WPP_GLOBAL_WDF_Control.DeviceQueue.Size + 1) = 192;
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)0x110000000E8LL;
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)0x8000000120LL;
  LODWORD(WPP_GLOBAL_WDF_Control.DeviceQueue.Lock) = 352;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine) = 72;
  WPP_GLOBAL_WDF_Control.AlignmentRequirement = 168;
  *(&WPP_GLOBAL_WDF_Control.AlignmentRequirement + 1) = 144;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext = (void *)0x7800000168LL;
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters = 0x12000000098LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject = (void *)0x7800000130LL;
  LODWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.CurrentIrp) = 320;
  WPP_GLOBAL_WDF_Control.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)0x88000003B0LL;
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.ActiveThreadCount = 8LL;
}
