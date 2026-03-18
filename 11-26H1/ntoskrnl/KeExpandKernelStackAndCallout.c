/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x140264800
 * Callers:
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtCreateKeyTransacted @ 0x140974390 (NtCreateKeyTransacted.c)
 *     NtOpenKey @ 0x140974540 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140974620 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtCreateKey @ 0x140A82AB0 (NtCreateKey.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B65CA0 (MiInitializePartitionSpecialPurposeMemory.c)
 *     IovpLogStackTrace @ 0x140C45DF4 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140C80C28 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140C80D10 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402638C0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, Size, 2, 0LL);
}
