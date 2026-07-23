/*
 * XREFs of SeCompareSigningLevels @ 0x140A8FB90
 * Callers:
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     MiWriteSegmentSignatureFlags @ 0x1404CE234 (MiWriteSegmentSignatureFlags.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F7F30 (PsCheckProcessFileSigningLevel.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 *     SepIsImageInMinTcbList @ 0x14097A150 (SepIsImageInMinTcbList.c)
 *     MiValidateSectionSigningPolicy @ 0x14099C76C (MiValidateSectionSigningPolicy.c)
 *     SeQuerySigningPolicy @ 0x140A3B45C (SeQuerySigningPolicy.c)
 *     MiValidateExistingImage @ 0x140A64508 (MiValidateExistingImage.c)
 *     SeGetImageRequiredSigningLevel @ 0x140A8F9E8 (SeGetImageRequiredSigningLevel.c)
 *     NtSetCachedSigningLevel2 @ 0x140B0E2C0 (NtSetCachedSigningLevel2.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140B5CD50 (SepCheckAndSetAuditModeForProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCompareSigningLevels(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
