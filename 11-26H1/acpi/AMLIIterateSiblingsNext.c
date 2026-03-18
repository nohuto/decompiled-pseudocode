/*
 * XREFs of AMLIIterateSiblingsNext @ 0x14003DB50
 * Callers:
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     ACPIGpeBuildEventMasks @ 0x14003D890 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x14003DA1C (EnableDisableCMOSRegions.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNextSibling @ 0x14003DB84 (AMLIGetNextSibling.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(__int64 a1)
{
  __int64 Sibling; // rbx

  Sibling = AMLIGetNextSibling();
  AMLIDereferenceHandleEx(a1);
  return Sibling;
}
