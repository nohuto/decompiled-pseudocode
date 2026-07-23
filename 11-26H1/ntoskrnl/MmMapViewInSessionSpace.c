/*
 * XREFs of MmMapViewInSessionSpace @ 0x140988210
 * Callers:
 *     LdrpMapResourceFile @ 0x14061B4E0 (LdrpMapResourceFile.c)
 *     EtwpCoverageEnsureContext @ 0x140778B18 (EtwpCoverageEnsureContext.c)
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x1407F43A8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1407F539C (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140837544 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x14083B934 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 *     CmFcpMapSection @ 0x140B4E818 (CmFcpMapSection.c)
 *     MiInitializeApiSets @ 0x140D06550 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140988260 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL);
}
