/*
 * XREFs of CmpInitializeRegistryNames @ 0x140CF4090
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 */

void CmpInitializeRegistryNames()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rsi
  UNICODE_STRING *v2; // rdi

  RtlInitUnicodeString((PUNICODE_STRING)PspSiloMonitorLock.Spare35, L"\\REGISTRY");
  RtlInitUnicodeString((PUNICODE_STRING)&PspSiloMonitorLock.648, L"\\REGISTRY\\MACHINE");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.PriorityFloorSummary,
    L"\\REGISTRY\\MACHINE\\HARDWARE");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.InGlobalForegroundList,
    L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&PspSiloMonitorLock.SavedApcStateFill[32],
    L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ForegroundLossTime,
    L"\\REGISTRY\\MACHINE\\HARDWARE\\DEVICEMAP");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.Header.WaitListHead,
    L"\\REGISTRY\\MACHINE\\HARDWARE\\RESOURCEMAP");
  RtlInitUnicodeString(&unk_140FD8508, L"\\REGISTRY\\MACHINE\\HARDWARE\\OWNERMAP");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.152, L"\\REGISTRY\\MACHINE\\SYSTEM");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&PspSiloMonitorLock.WriteTransferCount,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ThreadTimerDelay, L"\\REGISTRY\\USER");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ReadTransferCount, L"\\REGISTRY\\WC");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.SchedulerAssist, L"\\REGISTRY\\A");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ApcStateFill[32], L"SYSTEM");
  RtlInitUnicodeString(&unk_140FD84F8, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM");
  RtlInitUnicodeString(&unk_140FD8528, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM\\ROOT");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&PspSiloMonitorLock.WaitBlockFill11[128],
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES");
  RtlInitUnicodeString(&unk_140FD8518, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT");
  RtlInitUnicodeString(&unk_140FD8538, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\CLASS");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.FirstArgument,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SAFEBOOT");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&PspSiloMonitorLock.IptSaveArea,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ApcStateFill[16],
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\BOOTLOG");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.PriorityFloorCounts[16],
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES\\EVENTLOG");
  RtlInitUnicodeString((PUNICODE_STRING)&PspSiloMonitorLock.152, L"SymbolicLinkValue");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.OtherTransferCount,
    L"CONTROLSET001\\SERVICES\\MPSSVC");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.WriteOperationCount, L"Registry");
  v0 = (PCWSTR *)CmTypeString;
  v1 = 42LL;
  v2 = &CmTypeName;
  do
  {
    RtlInitUnicodeString(v2++, *v0++);
    --v1;
  }
  while ( v1 );
}
