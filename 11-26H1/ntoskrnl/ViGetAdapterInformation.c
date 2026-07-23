/*
 * XREFs of ViGetAdapterInformation @ 0x140C2CF78
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140644B20 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
