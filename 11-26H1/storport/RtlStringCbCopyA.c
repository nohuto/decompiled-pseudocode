/*
 * XREFs of RtlStringCbCopyA @ 0x140076CE0
 * Callers:
 *     RaidAddATADeviceIdMapping @ 0x14007625C (RaidAddATADeviceIdMapping.c)
 *     RaidAdapterStorageTcgResetState @ 0x140085A88 (RaidAdapterStorageTcgResetState.c)
 *     RaidUnitStorageTcgResetState @ 0x14008A358 (RaidUnitStorageTcgResetState.c)
 *     RaidActivateTcgLocking @ 0x14009277C (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x140092A9C (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x140092DF8 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x140093DD8 (RaidEraseTcgLockingObject.c)
 *     RaidFillTcgAuthKey @ 0x140094074 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x140094918 (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x140094A9C (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgLockingObjects @ 0x140094CAC (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     RaidRefreshTcg @ 0x140095C48 (RaidRefreshTcg.c)
 *     RaidRevertTcgConfiguration @ 0x140095CD8 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x140096028 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1400962C0 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x140096730 (RaidSetTcgSpAuthorityKey.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1400C4754 (FillBufferWithDriverTelemetryDump.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 *     NvmeControllerStoreSubsystemId @ 0x1400FB178 (NvmeControllerStoreSubsystemId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax

  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cbDest;
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cbDest) )
        break;
      v5 = pszDest[v4];
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cbDest;
    }
    while ( cbDest );
    v6 = pszDest - 1;
    if ( cbDest )
      v6 = pszDest;
    *v6 = 0;
    return cbDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
