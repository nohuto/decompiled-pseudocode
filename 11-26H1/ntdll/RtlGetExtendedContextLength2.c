/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x1800B1670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  return RtlGetExtendedContextLength3(ContextFlags, ContextLength, EnabledExtendedFeatures, 2147353560LL);
}
