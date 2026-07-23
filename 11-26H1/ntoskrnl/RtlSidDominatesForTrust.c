/*
 * XREFs of RtlSidDominatesForTrust @ 0x1403AF7B0
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     RtlpValidTrustSubjectContext @ 0x1403AF76C (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14063E8E0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409467E0 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140A51E80 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140A5DC10 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140ACA3C0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  int v4; // r9d
  unsigned int v5; // eax
  int v6; // r9d

  *DominatesTrust = 0;
  if ( Sid1 )
  {
    if ( *((_BYTE *)Sid1 + 1) != 2 || *(_BYTE *)Sid1 != 1 )
      return -1073741811;
    v6 = *(_DWORD *)((char *)Sid1 + 2);
    if ( !v6 )
      v6 = *((unsigned __int16 *)Sid1 + 3) - 4864;
    if ( v6 || !*((_DWORD *)Sid1 + 2) && *((_DWORD *)Sid1 + 3) )
      return -1073741811;
  }
  if ( !Sid2 )
  {
LABEL_3:
    *DominatesTrust = 1;
    return 0;
  }
  if ( *((_BYTE *)Sid2 + 1) != 2 || *(_BYTE *)Sid2 != 1 )
    return -1073741811;
  v4 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Sid2 + 3) - 4864;
  if ( v4 )
    return -1073741811;
  v5 = *((_DWORD *)Sid2 + 2);
  if ( !v5 )
  {
    if ( *((_DWORD *)Sid2 + 3) )
      return -1073741811;
  }
  if ( Sid1 )
  {
    if ( *((_DWORD *)Sid1 + 2) >= v5 && *((_DWORD *)Sid1 + 3) >= *((_DWORD *)Sid2 + 3) )
      goto LABEL_3;
    *DominatesTrust = 0;
    return 0;
  }
  else
  {
    *DominatesTrust = v5 == 0;
    return 0;
  }
}
