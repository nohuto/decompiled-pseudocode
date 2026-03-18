/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x14050814C
 * Callers:
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1406C6760 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageEnsureContext @ 0x140775C70 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x140829D38 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140829F60 (EtwpCoverageResetCP.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     PsSetProcessFaultInformation @ 0x140ABDE90 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140B20D08 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x140B2A2C0 (EtwpCoverageProvEnableCallback.c)
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
