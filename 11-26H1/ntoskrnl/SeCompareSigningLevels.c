/*
 * XREFs of SeCompareSigningLevels @ 0x140A88910
 * Callers:
 *     MiCreateSystemSection @ 0x14038A4C0 (MiCreateSystemSection.c)
 *     MiWriteSegmentSignatureFlags @ 0x1404D49C4 (MiWriteSegmentSignatureFlags.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F23D0 (PsCheckProcessFileSigningLevel.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     SepIsMinTCB @ 0x14091E9C8 (SepIsMinTCB.c)
 *     MiValidateSectionSigningPolicy @ 0x1409CB78C (MiValidateSectionSigningPolicy.c)
 *     SeQuerySigningPolicy @ 0x140A283BC (SeQuerySigningPolicy.c)
 *     MiValidateExistingImage @ 0x140A56F88 (MiValidateExistingImage.c)
 *     SepIsImageInMinTcbList @ 0x140A88634 (SepIsImageInMinTcbList.c)
 *     SeGetImageRequiredSigningLevel @ 0x140A8876C (SeGetImageRequiredSigningLevel.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140A88938 (SepCheckAndSetAuditModeForProcess.c)
 *     NtSetCachedSigningLevel2 @ 0x140B0CB70 (NtSetCachedSigningLevel2.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCompareSigningLevels(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( SepRmCapTableLock.ReadTransferCount )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
