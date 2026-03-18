/*
 * XREFs of RtlSidDominatesForTrust @ 0x1402ACB80
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14063B770 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409847D0 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140A48B90 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140A54920 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB7984 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140AC87D0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, bool *a3)
{
  int v4; // r9d
  unsigned int v5; // eax
  int v6; // r9d

  *a3 = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
      return 3221225485LL;
    v6 = *(_DWORD *)(a1 + 2);
    if ( !v6 )
      v6 = *(unsigned __int16 *)(a1 + 6) - 4864;
    if ( v6 || !*(_DWORD *)(a1 + 8) && *(_DWORD *)(a1 + 12) )
      return 3221225485LL;
  }
  if ( !a2 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
  }
  if ( *(_BYTE *)(a2 + 1) != 2 || *(_BYTE *)a2 != 1 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a2 + 2);
  if ( !v4 )
    v4 = *(unsigned __int16 *)(a2 + 6) - 4864;
  if ( v4 )
    return 3221225485LL;
  v5 = *(_DWORD *)(a2 + 8);
  if ( !v5 )
  {
    if ( *(_DWORD *)(a2 + 12) )
      return 3221225485LL;
  }
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 8) >= v5 && *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a2 + 12) )
      goto LABEL_3;
    *a3 = 0;
    return 0LL;
  }
  else
  {
    *a3 = v5 == 0;
    return 0LL;
  }
}
