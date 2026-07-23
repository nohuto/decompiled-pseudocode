/*
 * XREFs of EtwpSetProviderBinaryTracking @ 0x140917AE8
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x140912280 (EtwpGetNextGuidEntry.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140917BB8 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpSetProviderBinaryTracking(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdi
  _DWORD *i; // rdx
  _QWORD *NextGuidEntry; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  _DWORD *v13; // rsi
  _DWORD *j; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // rsi

  v5 = 0;
  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0LL);
  v8 = v6;
  if ( v6 )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(v6 + 816), 0x2000000u);
      for ( i = 0LL; ; i = v13 )
      {
        NextGuidEntry = EtwpGetNextGuidEntry(a1, i, 0, v7);
        v13 = NextGuidEntry;
        if ( !NextGuidEntry )
          break;
        EtwpTrackGuidEntryRegistrations(v8, NextGuidEntry, 0LL);
      }
      for ( j = 0LL; ; j = v17 )
      {
        v15 = EtwpGetNextGuidEntry(a1, j, 2u, v12);
        v17 = v15;
        if ( !v15 )
          break;
        LOBYTE(v16) = 2;
        EtwpTrackGuidEntryRegistrations(v8, v15, v16);
      }
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 816), 0xFDFFFFFF);
    }
    EtwpReleaseLoggerContext(v8, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
