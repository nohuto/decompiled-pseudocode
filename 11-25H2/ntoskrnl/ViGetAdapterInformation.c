/*
 * XREFs of ViGetAdapterInformation @ 0x140B78EA0
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x140604B50 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
