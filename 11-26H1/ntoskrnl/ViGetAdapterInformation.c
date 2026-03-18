/*
 * XREFs of ViGetAdapterInformation @ 0x140C26F68
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140640F40 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
