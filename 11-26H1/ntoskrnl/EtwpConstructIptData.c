/*
 * XREFs of EtwpConstructIptData @ 0x1408364F0
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x140836668 (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x14072A180 (ZwLoadDriver.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpConstructIptData(__int64 a1)
{
  NTSTATUS Driver; // eax
  _QWORD *Pool2; // rbx
  unsigned __int64 ExtensionTable; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  ExtensionTable = ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&ExpSysDbgLock.SchedulerAssistPriorityFloor);
  Pool2[2] = ExtensionTable;
  if ( !ExtensionTable )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1080) = Pool2;
  return 0LL;
}
