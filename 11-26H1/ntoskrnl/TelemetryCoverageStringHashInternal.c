/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x140501C30
 * Callers:
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1406CA460 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageEnsureContext @ 0x140778B18 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x14082FF78 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1408301A0 (EtwpCoverageResetCP.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     PsSetProcessFaultInformation @ 0x140AC0480 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140B23108 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x140B2C340 (EtwpCoverageProvEnableCallback.c)
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
