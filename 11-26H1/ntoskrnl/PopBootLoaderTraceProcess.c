/*
 * XREFs of PopBootLoaderTraceProcess @ 0x1407D2B50
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x1406CDFBC (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140C0DC54 (BapdRecordFirmwareBootStats.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rax
  unsigned int v3; // r8d

  v0 = qword_140F10470;
  if ( qword_140F10470 )
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
            (ULONGLONG)&ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Blink,
            (unsigned __int64)v2 + (unsigned int)v2[2],
            v3);
      }
    }
  }
}
