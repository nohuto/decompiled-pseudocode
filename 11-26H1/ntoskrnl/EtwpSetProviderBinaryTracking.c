/*
 * XREFs of EtwpSetProviderBinaryTracking @ 0x14093BF48
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x1409366D0 (EtwpGetNextGuidEntry.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093C018 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpSetProviderBinaryTracking(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // ebx
  unsigned int *v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  unsigned int *v8; // rdi
  _DWORD *i; // rdx
  _QWORD *NextGuidEntry; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  _DWORD *v13; // rsi
  _DWORD *j; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // rsi

  v5 = 0;
  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v8 = v6;
  if ( v6 )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)v6 + 204, 0x2000000u);
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
      _InterlockedAnd((volatile signed __int32 *)v6 + 204, 0xFDFFFFFF);
    }
    EtwpReleaseLoggerContext(v8, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
