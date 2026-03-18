/*
 * XREFs of MmMapViewInSessionSpace @ 0x1409B7230
 * Callers:
 *     LdrpMapResourceFile @ 0x140618490 (LdrpMapResourceFile.c)
 *     EtwpCoverageEnsureContext @ 0x140775C70 (EtwpCoverageEnsureContext.c)
 *     NtCreateIoRing @ 0x140798AC0 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x1407EE848 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1407EF83C (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140831304 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1408356F4 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     CmFcpMapSection @ 0x140B4CA88 (CmFcpMapSection.c)
 *     MiInitializeApiSets @ 0x140D001B0 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1409B7280 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL);
}
