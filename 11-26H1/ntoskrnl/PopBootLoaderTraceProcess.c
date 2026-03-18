/*
 * XREFs of PopBootLoaderTraceProcess @ 0x1407CFAB0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x1406C9F80 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140C07A44 (BapdRecordFirmwareBootStats.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rax
  unsigned int v3; // r8d

  v0 = qword_140F0FBB0;
  if ( qword_140F0FBB0 )
  {
    BapdRecordFirmwareBootStats(0LL);
    v1 = *(_QWORD *)(v0 + 232);
    if ( v1 )
    {
      v2 = *(_DWORD **)(v1 + 32);
      if ( *v2 == 1281517896 )
      {
        v3 = v2[3];
        if ( v3 )
          BapdWriteEtwEvents(
            (ULONGLONG)&ExpSysDbgLock.SchedulerApc.Reserved[2],
            (unsigned __int64)v2 + (unsigned int)v2[2],
            v3);
      }
    }
  }
}
