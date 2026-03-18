/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x1404CAC28
 * Callers:
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x140643690 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageReset @ 0x14079BA4C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x14079BC54 (EtwpCoverageResetCP.c)
 *     DbgkForwardException @ 0x14091F420 (DbgkForwardException.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 *     PsSetProcessFaultInformation @ 0x140A5B7E0 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageProvEnableCallback @ 0x140A81160 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x140A81BA4 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageStringHashInternal(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
