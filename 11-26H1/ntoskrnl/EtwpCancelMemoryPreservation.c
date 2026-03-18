/*
 * XREFs of EtwpCancelMemoryPreservation @ 0x14082E13C
 * Callers:
 *     EtwpSetSoftRestartInformation @ 0x140777D18 (EtwpSetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x14082E370 (EtwpKsrCallback.c)
 *     EtwpFreeSoftRestartContext @ 0x140A6D2A4 (EtwpFreeSoftRestartContext.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x140488B18 (EtwpFreeTraceBuffer.c)
 */

void __fastcall EtwpCancelMemoryPreservation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  char *v4; // rdx

  v1 = *(_QWORD *)(a1 + 1352);
  if ( *(_BYTE *)(v1 + 33) )
  {
    KsrFreePersistedMemoryBlock(EtwpKsrGuid, *(_QWORD *)v1, 0LL);
    v4 = *(char **)(v1 + 8);
    *(_QWORD *)v1 = 0LL;
    if ( v4 )
    {
      EtwpFreeTraceBuffer(a1, v4, v3);
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    *(_BYTE *)(v1 + 33) = 0;
  }
}
