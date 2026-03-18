/*
 * XREFs of CmpInitializeRegistryNames @ 0x140CEDD14
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 */

void CmpInitializeRegistryNames()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rsi
  UNICODE_STRING *v2; // rdi

  RtlInitUnicodeString((PUNICODE_STRING)PspSiloMonitorLock.Spare35, L"\\REGISTRY");
  RtlInitUnicodeString((PUNICODE_STRING)&PspSiloMonitorLock.SavedApcStateFill[32], L"\\REGISTRY\\MACHINE");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.PriorityFloorCounts[24],
    L"\\REGISTRY\\MACHINE\\HARDWARE");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.PriorityFloorCounts[8],
    L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION");
  RtlInitUnicodeString((PUNICODE_STRING)&PspSiloMonitorLock.648, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.AbCompletedIoQoSBoostCount,
    L"\\REGISTRY\\MACHINE\\HARDWARE\\DEVICEMAP");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.Header.WaitListHead,
    L"\\REGISTRY\\MACHINE\\HARDWARE\\RESOURCEMAP");
  RtlInitUnicodeString(&unk_140FD74E8, L"\\REGISTRY\\MACHINE\\HARDWARE\\OWNERMAP");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ApcStateFill[32],
    L"\\REGISTRY\\MACHINE\\SYSTEM");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&PspSiloMonitorLock.WriteTransferCount,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.880, L"\\REGISTRY\\USER");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ReadOperationCount, L"\\REGISTRY\\WC");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.OtherOperationCount, L"\\REGISTRY\\A");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ApcStateFill[16], L"SYSTEM");
  RtlInitUnicodeString(&unk_140FD7508, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM");
  RtlInitUnicodeString(&unk_140FD74F8, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM\\ROOT");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&PspSiloMonitorLock.WaitBlockFill11[128],
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES");
  RtlInitUnicodeString(&unk_140FD7528, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT");
  RtlInitUnicodeString(&unk_140FD7518, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\CLASS");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.FirstArgument,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SAFEBOOT");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&PspSiloMonitorLock.IptSaveArea,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
  RtlInitUnicodeString(
    (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.152,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\BOOTLOG");
  RtlInitUnicodeString(
    (PUNICODE_STRING)KiSystemServiceTraceCallbackLock.TracingPrivate,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES\\EVENTLOG");
  RtlInitUnicodeString((PUNICODE_STRING)&PspSiloMonitorLock.152, L"SymbolicLinkValue");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.QueuedScb, L"CONTROLSET001\\SERVICES\\MPSSVC");
  RtlInitUnicodeString((PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.WriteTransferCount, L"Registry");
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
