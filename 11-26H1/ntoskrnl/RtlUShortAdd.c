/*
 * XREFs of RtlUShortAdd @ 0x140481650
 * Callers:
 *     PspSiloInitializeSystemRootSymlink @ 0x1407EF710 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlAddResourceAttributeAce @ 0x140803440 (RtlAddResourceAttributeAce.c)
 *     CmpDeleteCorruptedLogfile @ 0x140862DE8 (CmpDeleteCorruptedLogfile.c)
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14088AA00 (AslpPathWildcardAllocMatchNode.c)
 *     RtlpCreateServerAcl @ 0x1408E0984 (RtlpCreateServerAcl.c)
 *     IopAllocateUnicodeString @ 0x14090DDE8 (IopAllocateUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2AEE0 (_SysCtxRegOpenCurrentUserKey.c)
 *     SepAddTokenOriginClaim @ 0x140A2D094 (SepAddTokenOriginClaim.c)
 *     VfTargetDriversAllocateFullName @ 0x140C28E64 (VfTargetDriversAllocateFullName.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140C388C4 (VfSuspectDriversAllocateEntryEx.c)
 *     BgpBcInitializeCriticalMode @ 0x140D148A4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  bool v3; // cf
  USHORT v4; // dx

  v3 = (unsigned __int16)(usAddend + usAugend) < usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 ? 0xC0000095 : 0;
}
