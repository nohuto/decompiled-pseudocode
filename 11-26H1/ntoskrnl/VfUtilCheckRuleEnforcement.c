/*
 * XREFs of VfUtilCheckRuleEnforcement @ 0x140C2770C
 * Callers:
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140C43160 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140C431E0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 */

_BOOL8 __fastcall VfUtilCheckRuleEnforcement(__int64 a1)
{
  __int64 VerifierData; // rax
  char v2; // al
  _BOOL8 result; // rax

  result = 1;
  if ( VerifierTipDisable == 1 )
  {
    VerifierData = VfTargetDriversGetVerifierData(a1);
    if ( !VerifierData )
      return 0;
    v2 = *(_BYTE *)(VerifierData + 48);
    if ( v2 == 12 || v2 == 8 )
      return 0;
  }
  return result;
}
