/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x140263D70
 * Callers:
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtCreateKeyTransacted @ 0x1409363A0 (NtCreateKeyTransacted.c)
 *     NtOpenKey @ 0x140936550 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140936630 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtCreateKey @ 0x140A88920 (NtCreateKey.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B68D40 (MiInitializePartitionSpecialPurposeMemory.c)
 *     IovpLogStackTrace @ 0x140C4BE04 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140C86C28 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140C86D10 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140262E30 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, Size, 2, 0LL);
}
